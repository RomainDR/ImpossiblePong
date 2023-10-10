#include "Viewport.h"
#include "../Utils/Settings.h"


Viewport::Viewport(const int& _width, const int& _height, const std::string& _title)
{
	window = new RenderWindow(VideoMode(_width, _height), _title);
	gameContent = new GameContent(window);
}

Viewport::~Viewport()
{
	delete window, gameContent;
}

void Viewport::Draw()
{
	while (window->isOpen())
	{
		Event _event;
		while (window->pollEvent(_event))
		{
			CheckEvent(_event.type);
			
		}
		window->clear();

		gameContent->Draw(window);
		gameContent->CheckBallCollide();
		gameContent->HasLost();
		DrawAllUI();

		window->display();
	}
}
void Viewport::CheckEvent(Event::EventType _type)
{
	switch (_type)
	{
	case sf::Event::Closed:
		window->close();
		break;
	
	case sf::Event::KeyPressed:
		if (Keyboard::isKeyPressed)
			if (gameContent->GetPlayer() == nullptr) break;
			if (UP)
				gameContent->GetPlayer()->MoveUp();
			else if (DOWN)
				gameContent->GetPlayer()->MoveDown();
		break;
	
	default:
		break;
	}
}
void Viewport::InitAllUI(GUIContent* _contentUI)
{
	allUIObject = _contentUI->Get();
}

void Viewport::DrawAllUI()
{
	for (GuiObject* _UI : allUIObject)
	{
		if (!_UI)
			continue;
		_UI->Draw(window);
	}
}

void Viewport::ClearUI()
{
	for (GuiObject* _UI: allUIObject)
		delete _UI;
}

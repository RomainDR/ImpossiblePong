#include "Viewport.h"
#include "../Utils/Settings.h"


Viewport::Viewport(const int& _width, const int& _height, const std::string& _title)
{
	window = new RenderWindow(VideoMode(_width, _height), _title);

	player = new Player(15);

}

Viewport::~Viewport()
{

	ClearUI();
	delete window, player;

	delete window;

}

void Viewport::Draw()
{
	while (window->isOpen())
	{
		Event _event;
		while (window->pollEvent(_event))
		{
			if (_event.type == Event::Closed)
				window->close();

			
		}
		window->clear();

		DrawAllUI();

		
		window->display();
	}
}

void Viewport::InitAllUI(GUIContent* _contentUI)
{
	allUIObject = _contentUI->Get();
}

void Viewport::DrawAllUI()
{
	for (GUIObject* _UI : allUIObject)
	{
		if (!_UI)
			continue;
		_UI->Draw(window);
	}
}

void Viewport::ClearUI()
{
	for (GUIObject* _UI: allUIObject)
		delete _UI;
}

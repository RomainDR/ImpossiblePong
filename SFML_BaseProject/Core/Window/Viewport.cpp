#include "Viewport.h"

Viewport::Viewport(const int& _width, const int& _height, const std::string& _title)
{
	window = new RenderWindow(VideoMode(_width, _height), _title);
	player = new Player(10);
}

Viewport::~Viewport()
{
	delete window, player;
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

			//TODO Remove
			if (_event.type == Event::KeyPressed) {
				if (Keyboard::isKeyPressed(Keyboard::A)) {
					player->MoveUp();
				}
				if (Keyboard::isKeyPressed(Keyboard::B)) {
					player->MoveDown();
				}
			}
		}
		window->clear();
		player->Draw(window);
		window->display();
	}
}

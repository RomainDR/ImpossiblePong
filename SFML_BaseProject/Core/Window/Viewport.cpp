#include "Viewport.h"

Viewport::Viewport(const int& _width, const int& _height, const std::string& _title)
{
	window = new RenderWindow(VideoMode(_width, _height), _title);
}

Viewport::~Viewport()
{
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
		window->display();
	}
}

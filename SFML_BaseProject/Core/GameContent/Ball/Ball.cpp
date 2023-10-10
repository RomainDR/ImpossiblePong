#include "Ball.h"
#include "../../Utils/Settings.h"
#include "../../Utils/Core.h"
Ball::Ball(const int& _size)
{
	shape = new CircleShape(_size);
	shape->setOrigin(shape->getPosition().x / 2, shape->getPosition().y / 2);
	InitPosition();
	clock.restart();
}

Ball::~Ball()
{
	delete shape;
}

void Ball::InitPosition()
{
	shape->setPosition(WIDTH / 2, HEIGHT / 2);
}

void Ball::Draw(RenderWindow* _window)
{
	Move();
	_window->draw(*shape);
}

void Ball::Move()
{
	if (clock.getElapsedTime().asSeconds() >= 5)
	{
		speed *= 1.20f;
		clock.restart();
	}
	float _x = shape->getPosition().x + speed * 1;
	shape->setPosition(_x, 450);
	if (_x >= WIDTH) invertX = !invertX;
}

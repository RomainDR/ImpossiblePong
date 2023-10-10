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
	if (clock.getElapsedTime().asSeconds() >= 5 && speed < 5.f)
	{
		speed *= 1.20f;
		clock.restart();
	}
	const float _posX = shape->getPosition().x;
	const float _posY = shape->getPosition().y;
	const int _radius = shape->getRadius();

	if (_posX + (_radius *2) >= WIDTH || _posX + (_radius*2) <= 0 && !lost) invertX = !invertX;
	if (_posY + (_radius * 2) >= HEIGHT || _posY + (_radius*2) <= 20 && !lost) invertY = !invertY;

	float _x;
	if (invertX) _x = shape->getPosition().x - (speed * 1.f);
	else _x = shape->getPosition().x + (speed * 1.f);

	float _y;
	if (invertY) _y = shape->getPosition().y - (speed * 1.f);
	else _y = shape->getPosition().y + (speed * 1.f);

	shape->setPosition(_x, _y);
	if (shape->getPosition().x < WIDTH * 0.05f) lost = true;

}
void Ball::CheckIfCollide(GameObject* _pad)
{
	if (lost) return;
	if (shape->getGlobalBounds().intersects(_pad->GetShape()->getGlobalBounds())) {
		invertX = !invertX;
		shape->setPosition(shape->getPosition().x > WIDTH / 2 ? shape->getPosition().x - 1 : shape->getPosition().x + 1
			, shape->getPosition().y > HEIGHT / 2 ? shape->getPosition().y + 1 : shape->getPosition().y - 1);
	}
}

FVector Ball::GetPosition() const
{
	return shape->getPosition();
}

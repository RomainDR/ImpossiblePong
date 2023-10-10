#include "Player.h"
#include "../Utils/Settings.h"

Player::Player(const int& _speed, const int& _sizeHeight)
{
	shape = new RectangleShape(FVector(25, _sizeHeight));
	speed = _speed;
	shape->setOrigin(FVector(150 / 2, _sizeHeight / 2));
	InitPosition();
}

void Player::InitPosition()
{
	shape->setPosition(FVector(150, HEIGHT / 2));
}
void Player::MoveUp()
{
	shape->setPosition(FVector(shape->getPosition().x, shape->getPosition().y - speed));
}

void Player::MoveDown()
{
	shape->setPosition(FVector(shape->getPosition().x, shape->getPosition().y + speed));
}
void Player::Draw(RenderWindow* _window)
{
	_window->draw(*shape);
}

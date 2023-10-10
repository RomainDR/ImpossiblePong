#include "Player.h"
#include "../Utils/Settings.h"

Player::Player(const int& _speed, const int& _sizeHeight)
{
	shape = new RectangleShape(FVector(150, _sizeHeight));
	shape->setOrigin(FVector(150 / 2, _sizeHeight / 2));
	InitPosition();
}

void Player::InitPosition()
{
	shape->setPosition(FVector(150, HEIGHT / 2));
}
void Player::MoveUp()
{
	shape->move(FVector(500, 500));
}

void Player::MoveDown()
{
}
void Player::Draw(RenderWindow* _window)
{
	_window->draw(*shape);
}

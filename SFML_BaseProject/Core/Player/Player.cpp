#include "Player.h"
#include "../Utils/Settings.h"
#include "../Utils/Core.h"

Player::Player(const int& _speed, const int& _sizeHeight)
{
	shape = new RectangleShape(FVector(25, _sizeHeight));
	speed = _speed;
	shape->setOrigin(FVector(150 / 2, _sizeHeight / 2));
	InitPosition();
}

Player::~Player()
{
	delete shape;
}

void Player::InitPosition()
{
	shape->setPosition(FVector(WIDTH * 0.10f, HEIGHT / 2.0f));
}
void Player::MoveUp()
{

	shape->setPosition(FVector(shape->getPosition().x, shape->getPosition().y - speed));
	if(shape->getGlobalBounds().top < 0) shape->setPosition(FVector(shape->getPosition().x,0 + shape->getSize().y /2));
}

void Player::MoveDown()
{
	const float _posX = shape->getPosition().x;
	const float _sizeY = shape->getSize().y;
	shape->setPosition(FVector(_posX, shape->getPosition().y + speed));
	if (shape->getGlobalBounds().top + _sizeY > HEIGHT) shape->setPosition(FVector(_posX, HEIGHT - _sizeY / 2));
}
void Player::Draw(RenderWindow* _window)
{
	_window->draw(*shape);
}

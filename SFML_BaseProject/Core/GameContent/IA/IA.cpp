#include "IA.h"
#include "../../Utils/Settings.h"


IA::IA(const int& _sizeHeight)
{
	shape = new RectangleShape(FVector(SIZE_PAD_WIDTH, _sizeHeight));
	shape->setOrigin(FVector(SIZE_PAD_WIDTH / 2, _sizeHeight / 2));
	InitPosition();
}

IA::~IA()
{
	delete shape;
}

void IA::InitPosition()
{
	shape->setPosition(FVector(WIDTH * 0.95f, HEIGHT / 2.0f));
}

void IA::Draw(RenderWindow* _window)
{
	_window->draw(*shape);
}

RectangleShape* IA::GetShape() const
{
	return shape;
}
void IA::MoveToBall(Ball* _ball)
{
	shape->setPosition(FVector(shape->getPosition().x, _ball->GetPosition().y));
}
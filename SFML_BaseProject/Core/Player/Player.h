#pragma once
#include "../Object/GameObject/GameObject.h"

class Player: public GameObject
{
private:
	RectangleShape* shape = nullptr;
	float multiplierSpeed = 10;
public:
	Player(const int& _speed = 10, const int& _sizeHeight = 500);

public:
	void InitPosition();
	void MoveUp();
	void MoveDown();
	void Draw(RenderWindow* _window);
};


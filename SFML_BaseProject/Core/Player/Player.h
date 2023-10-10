#pragma once
#include "../Object/GameObject/GameObject.h"

class Player: public GameObject
{
private:
	RectangleShape* shape = nullptr;
	int speed = 0;
public:
	Player(const int& _speed = 1, const int& _sizeHeight = 150);

public:
	void InitPosition();
	void MoveUp();
	void MoveDown();
	void Draw(RenderWindow* _window);
};


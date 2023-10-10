#pragma once
#include "../../Object/GameObject/GameObject.h"

class Player: public GameObject
{
private:
	RectangleShape* shape = nullptr;
	int speed = 1;
public:
	Player(const int& _speed = 1, const int& _sizeHeight = 150);
	~Player();

public:
	virtual void InitPosition() override;
	void MoveUp();
	void MoveDown();
	void Draw(RenderWindow* _window);
};


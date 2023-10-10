#pragma once
#include "../../Object/GameObject/GameObject.h"

class Ball : public GameObject
{
private:
	CircleShape* shape = nullptr;
	float speed = 0.1f;
	bool invertX = false;
	bool invertY = false;
	Clock clock;
public:
	Ball(const int& _size = 8);
	~Ball();

private:
	virtual void InitPosition() override;
public:
	virtual void Draw(RenderWindow* _window) override;
	void Move();
};


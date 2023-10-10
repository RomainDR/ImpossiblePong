#pragma once
#include "../../Object/GameObject/GameObject.h"

class IA : public GameObject
{
private:
	RectangleShape* shape = nullptr;

public:
	IA(const int& _sizeHeight = 150);
	~IA();

private:
	virtual void InitPosition() override;

public:
	virtual void Draw(RenderWindow* _window);
};


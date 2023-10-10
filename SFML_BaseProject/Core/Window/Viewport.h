#pragma once
#include "../Utils/SFMLCore.h"
#include "../Utils/Core.h"
#include "../Player/Player.h"

class Viewport
{
private:
	RenderWindow* window = nullptr;
	int width = 0;
	int height = 0;
	Player* player = nullptr;

public:
	Viewport(const int& _width, const int& _height, const std::string& _title);
	~Viewport();

public:
	void Draw();
};


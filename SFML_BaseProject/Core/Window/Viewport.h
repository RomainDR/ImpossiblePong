#pragma once
#include "../Utils/SFMLCore.h"
#include "../Utils/Core.h"

class Viewport
{
private:
	RenderWindow* window = nullptr;
	int width = 0;
	int height = 0;

public:
	Viewport(const int& _width, const int& _height, const std::string& _title);
	~Viewport();
};


#pragma once
#include "../Utils/Core.h"

class GameEngine
{
#pragma region f/p
private:
	//Database* database = nullptr;
	Viewport* viewport = nullptr;

#pragma endregion f/p
#pragma region constructor
public:
	GameEngine(const string& _title = "Game", const int& _width = 800, const int& _height = 600);
	~GameEngine();
#pragma endregion constructor
};


#pragma once
#include "../Utils/Core.h"

class GameEngine
{
#pragma region f/p
private:
	DataBase* database = nullptr;
	Viewport* viewport = nullptr;
	GUIContent* UI = nullptr;
#pragma endregion f/p
#pragma region constructor
public:
	GameEngine(const string& _title = "Game", const int& _width = 800, const int& _height = 600);
	~GameEngine();
#pragma endregion constructor

public:
	void StartEngine();
};


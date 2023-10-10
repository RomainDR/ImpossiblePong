#pragma once
#include "../Utils/Core.h"
#include "../Ressource/DataBase/DataBase.h"

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
	GameEngine(const std::string& _title = "Game", const int& _width = 800, const int& _height = 600);
	~GameEngine();
#pragma endregion constructor

public:
	void StartEngine();
};
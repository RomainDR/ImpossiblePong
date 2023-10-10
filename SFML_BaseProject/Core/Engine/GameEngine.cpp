#include "GameEngine.h"

GameEngine::GameEngine(const string& _title, const int& _width, const int& _height)
{
	database = new DataBase();
	viewport = new Viewport(_width, _height, _title);
	UI = new GUIContent(viewport->GetWindow());
}

GameEngine::~GameEngine()
{
	delete viewport, UI, database;
}

void GameEngine::StartEngine()
{
	viewport->InitAllUI(UI);
	viewport->Draw();

}

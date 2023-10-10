#include "GameEngine.h"

GameEngine::GameEngine(const std::string& _title, const int& _width, const int& _height)
{
	viewport = new Viewport(_width, _height, _title);
	UI = new GUIContent(viewport->GetWindow());
}

GameEngine::~GameEngine()
{
	delete viewport;
}

void GameEngine::StartEngine()
{
	viewport->Draw();
}

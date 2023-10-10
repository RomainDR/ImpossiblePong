#include "GameEngine.h"

GameEngine::GameEngine(const string& _title, const int& _width, const int& _height)
{
	viewport = new Viewport(_width, _height, _title);
}

GameEngine::~GameEngine()
{
	delete viewport;
}

void GameEngine::StartEngine()
{
	viewport->Draw();
}

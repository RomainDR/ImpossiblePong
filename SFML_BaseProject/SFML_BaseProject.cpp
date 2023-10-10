// SFML_BaseProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Core/Engine/GameEngine.h"

int main()
{
	GameEngine* _engine = new GameEngine("P2-Exercice", 800, 600);
	_engine->StartEngine();


	delete _engine;
}

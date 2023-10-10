#include "Content.h"
//#include "../../Core/CoreEngineObject.h"
//#include "../../ViewPort.h"
#include <iostream>


#pragma region Constructeur/Destructeur
//Content::Content(RenderWindow* _render)
//
//{
/*
	engineObjects.push_back(new Grid(50, Color::Yellow));

	makeSquareButton = new Button(FVector(100, 100), FVector(100, 50), "Make Square", _render);
	makeTriangleButton = new Button(FVector(300, 100), FVector(100, 50), "Make Triangle", _render);
	makeCircleButton = new Button(FVector(500, 100), FVector(100, 50), "Make Circle", _render);

	engineObjects.push_back(makeSquareButton);
	engineObjects.push_back(makeTriangleButton);
	engineObjects.push_back(makeCircleButton);
	*/

	//}
Content::~Content()
{
	/*
	for (EngineObject* _obj : engineObjects)
		delete _obj;

	delete  makeTriangleButton, makeSquareButton, makeCircleButton;
	makeTriangleButton = makeSquareButton = makeCircleButton = nullptr;
	*/
}
#pragma endregion Constructeur/Destructeur
#pragma region Method
void Content::Tick()
{
}
#pragma endregion Method
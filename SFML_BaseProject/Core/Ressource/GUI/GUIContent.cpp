#include "GUIContent.h"
//#include "../../Core/CoreEngineObject.h"
//#include "../../ViewPort.h"
#include "../../Object/GUIObject/Label/GUIObject.h"
#include <iostream>

#pragma region constructor/destructor
GUIContent::GUIContent(RenderWindow* _window) : Content(_window)
{
	allUIObject.push_back(new Label("Hello", FVector(500, 500), FVector(0, 0), 50));
	allUIObject.push_back(new Label("Hi", FVector(560, 500), FVector(0, 0), 50));
	allUIObject.push_back(new Label("How", FVector(610, 500), FVector(0, 0), 50));
}
GUIContent::~GUIContent()
{
	for (EngineObject* _obj : allUIObject)
		delete _obj;
	/*
	delete  makeTriangleButton, makeSquareButton, makeCircleButton;
	makeTriangleButton = makeSquareButton = makeCircleButton = nullptr;
	*/
}
#pragma endregion constructor/destructor
#pragma region methods
>>>>>>> Stashed changes

void GUIContent::Tick()
{

}

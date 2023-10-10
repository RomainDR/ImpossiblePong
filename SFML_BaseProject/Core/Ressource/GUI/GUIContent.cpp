#include "GUIContent.h"
#include "../../Utils/CoreUI.h"
#include <iostream>

#pragma region constructor/destructor
GUIContent::GUIContent()
{
	allUIObject.push_back(new Label("Hello",FVector(500,500), FVector(0, 0), 50));
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

#pragma endregion methods
#pragma region override
void GUIContent::Tick()
{

	/*
		if (makeTriangleButton && makeTriangleButton->IsCliked())
			ViewPort::SetShape(new RegularTriangle(FVector(ViewPort::Width / 2, ViewPort::Height / 2), 50, Color::White));
		if (makeSquareButton && makeSquareButton->IsCliked())
			ViewPort::SetShape(new Square(FVector(ViewPort::Width / 2, ViewPort::Height / 2), 50));
		if (makeCircleButton && makeCircleButton->IsCliked())
			ViewPort::SetShape(new Circle(FVector(ViewPort::Width / 2, ViewPort::Height / 2), 50));
	*/
}

#pragma endregion override

#include "GUIContent.h"
//#include "../../Core/CoreEngineObject.h"
//#include "../../Window/Viewport.h"
#include <iostream>

#pragma region constructor/destructor
GUIContent::GUIContent()
{
}
GUIContent::~GUIContent()
{
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

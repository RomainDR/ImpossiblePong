#pragma once
#include <vector>
#include "../Content/Content.h"

class GUIContent : public Content
{
#pragma region f/p
private:

	//Button* makeSquareButton = nullptr;
	//Button* makeTriangleButton = nullptr;
	//Button* makeCircleButton = nullptr;

#pragma endregion f/p
#pragma region constructor/destructor
public:
	GUIContent(RenderWindow* _window);
	~GUIContent();
#pragma endregion constructor/destructor
#pragma region methods
public:
	void Tick() override;
#pragma endregion methods
#pragma region override
public:
#pragma endregion override
#pragma region operator
public:

#pragma endregion operator
};


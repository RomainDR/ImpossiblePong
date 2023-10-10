#pragma once
#include <vector>
#include "../../GameContent/GameContent.h"

//#include "../../Object/EngineObject.h"
//#include "../../Object/Button.h"

class GUIContent :public  GameContent
{
#pragma region f/p
private:
	//Button* makeSquareButton = nullptr;
	//Button* makeTriangleButton = nullptr;
	//Button* makeCircleButton = nullptr;
#pragma endregion f/p
#pragma region constructor/destructor
public:
	GUIContent();
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


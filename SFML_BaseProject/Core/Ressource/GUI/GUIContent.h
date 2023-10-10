#pragma once
#include <vector>
#include "../../GameContent/GameContent.h"
#include "../../Object/GUIObject/GUIObject.h"
#include "../../Utils/CoreUI.h"

class GUIContent :public  GameContent
{
#pragma region f/p
private:
	vector<GuiObject*> allUIObject;
	Button* StartGame = nullptr;
#pragma endregion f/p
#pragma region constructor/destructor
public:
	GUIContent(RenderWindow* _render);
	~GUIContent();
#pragma endregion constructor/destructor
#pragma region Acesseur
public:
	inline vector<GuiObject*>Get() const { return allUIObject; }
	inline Button* GetStartGame() const { return StartGame; }
#pragma endregion Acesseur
#pragma region Method
private:
	void Clean();
#pragma endregion Method
#pragma region override
public:
	void Tick() override;
#pragma endregion override
};


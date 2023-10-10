#pragma once
#include "../Utils/SFMLCore.h"
#include "../GameContent/Ball/Ball.h"
#include "../Object/GUIObject/GUIObject.h"
#include "../Ressource/GUI/GUIContent.h"
#include "../GameContent/GameContent.h"
class Viewport
{
private:
	vector<GuiObject*> allUIObject;
	GameContent* gameContent = nullptr;
	RenderWindow* window = nullptr;
	int width = 0;
	int height = 0;

public:
	Viewport(const int& _width, const int& _height, const std::string& _title);
	~Viewport();
public:
	inline RenderWindow* GetWindow() { return window; };
public:
	void Draw();
	void CheckEvent(Event::EventType _type);
	void InitAllUI(GUIContent* _contentUI);
private:
	void ClearUI();
	void DrawAllUI();
};


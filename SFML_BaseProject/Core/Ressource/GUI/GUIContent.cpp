#include "GUIContent.h"
#include "../../Utils/Settings.h"
#include <iostream>

#pragma region constructor/destructor
GUIContent::GUIContent(RenderWindow* _render)
{
	StartGame = new Button(FVector(WIDTH / 2, HEIGHT / 2), FVector(100, 50), _render);


	allUIObject.push_back(new Label("Impossible Pong",FVector(WIDTH/2,HEIGHT/3), FVector(0, 0), 100));
	allUIObject.push_back(StartGame);


	StartGame->OnClicked().Bind(this, &GUIContent::Clean);
}
GUIContent::~GUIContent()
{
	for (GuiObject* _obj : allUIObject)
	{
		delete _obj;
		_obj = nullptr;
	}
	delete  StartGame;
	StartGame = nullptr;
	
	
}
#pragma endregion constructor/destructor
#pragma region methods
void GUIContent::Clean()
{
	
	for (size_t i = 0; i < allUIObject.size(); i++)
	{
		allUIObject[i]->SetColor(Color::Transparent);
		allUIObject[i]->SetActive(false);
	}
}
#pragma endregion methods
#pragma region override
void GUIContent::Tick()
{
	StartGame->IsCliked();
}
#pragma endregion override

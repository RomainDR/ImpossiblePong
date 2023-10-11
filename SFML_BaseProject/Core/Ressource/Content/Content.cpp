#include "Content.h"
#include "../../Utils/Core.h"
#include "../../Window/Viewport.h"
#include <iostream>


#pragma region Constructeur/Destructeur
Content::Content(RenderWindow* _render)
{

}
Content::~Content()
{
	
	for (EngineObject* _obj : engineObjects)
		delete _obj;

	
	
}
#pragma endregion Constructeur/Destructeur
#pragma region Method
void Content::Tick()
{
}
#pragma endregion Method
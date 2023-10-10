#pragma once
#include <vector>
<<<<<<< Updated upstream
#include "../../GameContent/GameContent.h"
//#include "../../Object/EngineObject.h"
=======
#include "../../Object/EngineObject/EngineObject.h"
>>>>>>> Stashed changes


using namespace std;

class Content : public EngineObject
{
#pragma region f/p
private:
	
	//vector<EngineObject*> engineObjects;
#pragma endregion f/p
#pragma region Constructeur/Destructeur
public:
	//inline vector<EngineObject*>Get() const { return engineObjects; }
	//Content(RenderWindow* _render);
	~Content();
#pragma endregion Constructeur/Destructeur
#pragma region Method
public:
	virtual void Tick();
	virtual void Draw(RenderWindow* _window) override;
#pragma endregion Method
};


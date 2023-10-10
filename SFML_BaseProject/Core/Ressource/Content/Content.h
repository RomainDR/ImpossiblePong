#pragma once
#include <vector>
#include "../../GameContent/GameContent.h"
#include "../../Object/EngineObject/EngineObject.h"


using namespace std;
class Content : public GameContent
{
#pragma region f/p
private:
	vector<EngineObject*> engineObjects;
#pragma endregion f/p
#pragma region Constructeur/Destructeur
public:
	Content(RenderWindow* _render);
	~Content();
#pragma endregion Constructeur/Destructeur
#pragma region Acesseur
	inline vector<EngineObject*>Get() const { return engineObjects; }
#pragma endregion Acesseur
#pragma region Method
public:
	void Tick() override;
#pragma endregion Method
};


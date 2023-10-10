#pragma once
#include "../Ressource/Content/Content.h"
#include "Player/Player.h"
#include "Ball/Ball.h"
#include "IA/IA.h"

class GameContent : public Content
{
private:
	std::vector<GameObject*> gameObjects = std::vector<GameObject*>();
#pragma region constructor/destructor
public:
	GameContent(RenderWindow* _window);
	~GameContent();
#pragma endregion constructor/destructor
#pragma region methods
public:
	void InitGame();
	Player* GetPlayer() const;
	Ball* GetBall() const;
	IA* GetIA() const;
	virtual void Draw(RenderWindow* _window) override;
	void CheckBallCollide();
	bool HasLost() const;
#pragma endregion methods

};


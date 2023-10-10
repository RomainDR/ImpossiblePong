#include "GameContent.h"
#include "../Utils/Settings.h"
#include "../Utils/Core.h"
#include "../Player/Player.h"

GameContent::GameContent(RenderWindow* _window) : Content(_window)
{
	InitGame();
}

GameContent::~GameContent()
{
	for (GameObject* _obj : gameObjects)
		delete _obj;
}

void GameContent::InitGame()
{
	gameObjects.push_back(new Player(5, SIZE_PAD_HEIGHT));
	gameObjects.push_back(new IA(SIZE_PAD_HEIGHT));
	gameObjects.push_back(new Ball(SIZE_BALL));
}

Player* GameContent::GetPlayer() const
{
	for(GameObject* _obj : gameObjects)
		if (Player* p = dynamic_cast<Player*>(_obj))
			return p;
		
}

Ball* GameContent::GetBall() const
{
	for (GameObject* _obj : gameObjects)
		if (Ball* ball = dynamic_cast<Ball*>(_obj))
			return ball;

}

IA* GameContent::GetIA() const
{
	for (GameObject* _obj : gameObjects)
		if (IA* ia = dynamic_cast<IA*>(_obj))
			return ia;

}

void GameContent::Draw(RenderWindow* _window)
{
	for (GameObject* _obj : gameObjects) {
		if (_obj == GetIA())	
			GetIA()->MoveToBall(GetBall());
		_obj->Draw(_window);
	}
}

void GameContent::CheckBallCollide()
{
	Ball* _ball = GetBall();

	for (GameObject* _obj : gameObjects)
		if (_obj == _ball) continue;
		else _ball->CheckIfCollide(_obj);
}

bool GameContent::HasLost() const
{
	return GetBall()->GetPosition().x < 0;
}

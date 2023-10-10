#pragma once
#include "../Object/GameObject/GameObject.h"

class Player: public GameObject
{
private:
	RectangleShape* shape = nullptr;
	float multiplierSpeed = 10;
public:
	Player(const int& _speed = 10, const int& _sizeHeight = 500);

public:
<<<<<<< Updated upstream:SFML_BaseProject/Core/Player/Player.h
=======
	virtual RectangleShape* GetShape() const override;
	virtual void InitPosition() override;
>>>>>>> Stashed changes:SFML_BaseProject/Core/GameContent/Player/Player.h
	void MoveUp();
	void MoveDown();
	void Draw(RenderWindow* _window);
};


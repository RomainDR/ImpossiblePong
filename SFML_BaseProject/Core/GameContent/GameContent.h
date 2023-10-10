#pragma once


class GameContent
{

#pragma region constructor/destructor
public:
	GameContent() = default;
	~GameContent() = default;
#pragma endregion constructor/destructor
#pragma region methods
public:
	virtual void Tick() {};
#pragma endregion methods

};


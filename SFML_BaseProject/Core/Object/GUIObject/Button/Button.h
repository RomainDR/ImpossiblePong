#pragma once
#include"../GuiObject.h"

#include "../../../Event/Action.h"
using namespace std;

class Button :public GuiObject
{
#pragma region f/p
private:
	RenderWindow* render = nullptr;
	RectangleShape* rect = nullptr;
	bool isClicked = false;
	Action onClicked;
#pragma endregion f/p
#pragma region constructor/destructor
public:
	Button() = default;
	Button(const FVector& _position, const FVector& _size, RenderWindow* _render);
	~Button();
#pragma endregion constructor/destructor
public:
	inline void SetColor(const Color _color) override { rect->setFillColor(_color); }
#pragma region methods
public:
	inline Action& OnClicked() { return onClicked; };
	bool IsCliked();
private:
	bool Contains(const Vector2i& _input) const;
#pragma endregion methods
#pragma region override
public:
	 void Draw(RenderWindow* _window) override;
#pragma endregion override
};


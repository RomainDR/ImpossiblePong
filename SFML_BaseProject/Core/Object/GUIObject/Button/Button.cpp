#include "Button.h"



#pragma region constructor/destructor
Button::Button(const FVector& _position, const FVector& _size, RenderWindow* _render)
{
	SetActive(true);
    render = _render;
    rect = new RectangleShape(_size);
    rect->setPosition(_position);
}
Button::~Button()
{
    delete rect;
	rect = nullptr;
}
#pragma endregion constructor/destructor
#pragma region methods
bool Button::IsCliked()
{
	bool _canClick = Contains(Mouse::getPosition(*render)),
		_hit = Mouse::isButtonPressed(Mouse::Left);

	if (_canClick && _hit && !isClicked&& isActive)
	{
		onClicked.Invoke();
		isClicked = true;
		return true;
	}
	else if (!_hit && isClicked)
	{
		
		isClicked = false;
		return false;
	}
	return false;
}
bool Button::Contains(const Vector2i& _input) const
{
	const bool _isValid = (_input.x >= rect->getPosition().x &&
		_input.x <= rect->getPosition().x + rect->getSize().x &&
		_input.y >= rect->getPosition().y &&
		_input.y <= rect->getPosition().y + rect->getSize().y);

	return _isValid;
}
#pragma endregion methods
#pragma region override
void Button::Draw(RenderWindow* _window)
{
    _window->draw(*rect);
}
#pragma endregion override




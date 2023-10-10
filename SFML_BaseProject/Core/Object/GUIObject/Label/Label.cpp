#include "Label.h"
#include "../../../Ressource/DataBase/DataBase.h"

#pragma region constructor/destructor
Label::Label(const string& _text, const FVector& _position, const FVector& _origin, const unsigned int& _size, const float& _rotation, const Color& _color)
{
	text.setFont(DataBase::Font);
	text.setPosition(_position);
	text.setOrigin(_origin);
	text.setCharacterSize(_size);
	text.setRotation(_rotation);
	text.setFillColor(_color);

	text.setString(_text);
}
Label::~Label()
{
}
#pragma endregion constructor/destructor
#pragma region override
void Label::Draw(RenderWindow* _window)
{
	if(_window)
		_window->draw(text);
}
#pragma endregion override

#pragma once
#include "../../../Utils/SFMLCore.h"
#include "../GUIObject.h"
#include <string>


class Label :public GuiObject
{
#pragma region f/p
private:
	Text text;
#pragma endregion f/p
#pragma region constructor/destructor
public:
	Label(const string& _text = "Label", const FVector& _position = FVector(0, 0), const FVector& _origin = FVector(0,0), const unsigned int& _size = 24,const float& _rotation = 0.f,const Color& _color = Color::Red);
	~Label();
#pragma endregion constructor/destructor
#pragma region Acesseur
public:
	inline FVector GetPosition() const {return text.getPosition();}
	inline FVector GetOrigin() const { return text.getOrigin(); }
	inline float GetRotation() const { return text.getRotation(); }

	inline void SetPosition(const FVector _position)  { text.setPosition(_position); }
	inline void SetOrigin(const FVector _origin)  { text.setOrigin(_origin); }
	inline void SetRotation(const float _rotation)  {  text.setRotation(_rotation); }
	inline void SetText(const string _text) { text.setString(_text); }
	inline void SetCharacterSize(const unsigned int _size) { text.setCharacterSize(_size); }
	inline void SetScale(const FVector _scale) { text.setScale(_scale); }
//	inline void SetColor(const Color _color) { text.setColor(_color); }
	inline void SetFillColor(const Color _color) { text.setFillColor(_color); }
	inline void SetLetterSpacing(const float _spacing) { text.setLetterSpacing(_spacing); }
	inline void SetLineSpacing(const float _spacing) { text.setLineSpacing(_spacing); }
	inline void SetOutlineColor(const Color _colorLine) { text.setOutlineColor(_colorLine); }
	inline void SetOutlineThickness(const float _thickness) { text.setOutlineThickness(_thickness); }
	inline void SetFont(const Font _font) { text.setFont(_font); }
	inline void SetStyle(const Uint32 _style) { text.setStyle(_style); }
#pragma endregion Acesseur
#pragma region methods
public:

#pragma endregion methods
#pragma region override
public:
	void Draw(RenderWindow* _window) override;
#pragma endregion override
};


#pragma once
#include "../EngineObject/EngineObject.h"
class GuiObject : public EngineObject
{
protected:
	bool isActive = false;
public:
	virtual void Draw(RenderWindow* _window) override
	{

	}
	inline virtual void SetColor(const Color _color) {  };
	inline virtual void SetActive(const bool _bool) { isActive = _bool; };
};


#pragma once
#include "../EngineObject/EngineObject.h"

class GameObject : public EngineObject
{
public:
	virtual RectangleShape* GetShape() const
	{
		return nullptr;
	}
	virtual void Draw(RenderWindow* _window) override;

};


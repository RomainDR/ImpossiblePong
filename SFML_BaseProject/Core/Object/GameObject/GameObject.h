#pragma once
#include "../EngineObject/EngineObject.h"

class GameObject : public EngineObject
{
public:
	virtual void Draw(RenderWindow* _window) override;
};


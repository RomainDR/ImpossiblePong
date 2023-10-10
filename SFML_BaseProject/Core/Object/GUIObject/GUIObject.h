#pragma once
#include "../EngineObject/EngineObject.h"

class GUIObject: public EngineObject
{
public:
	virtual void Draw(RenderWindow* _window) override;
};


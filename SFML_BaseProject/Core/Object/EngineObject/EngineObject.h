#pragma once
#include "../../Utils/SFMLCore.h"

class EngineObject
{
public:
	virtual void Draw(RenderWindow* _window) = 0;
};


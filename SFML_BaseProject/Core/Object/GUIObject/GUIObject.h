#pragma once
#include "../EngineObject/EngineObject.h"

class GuiObject : public EngineObject
{
private:
	virtual void InitPosition() = 0;
public:

	virtual void Draw(RenderWindow* _window) override;
};


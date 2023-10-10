#pragma once
#include "../EngineObject/EngineObject.h"

class GameObject : public EngineObject
{
private:
	virtual void InitPosition() = 0;
public:
	
	virtual void Draw(RenderWindow* _window) override;
};


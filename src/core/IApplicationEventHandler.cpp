#include "IApplicationEventHandler.hpp"

class ApplicationEventHandler : public IApplicationEventHandler
{
public:
	bool keyDown = false;
	ApplicationEventHandler() {}

	virtual void onKeyDown(uint32 keyCode, bool isRepeat) 
	{
		keyDown = true;
	}
	virtual void onKeyUp(uint32 keyCode, bool isRepeat) 
	{
		keyDown = true;
	}
};

IApplicationEventHandler::IApplicationEventHandler()
{
}

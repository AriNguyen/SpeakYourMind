#pragma once

#include "wx/wx.h"

class Window : public wxApp
{
public:
	Window(); 
	~Window();

	virtual bool OnInit() = 0;
};


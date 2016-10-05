/********************************************************************
	Rhapsody	: 8.1.3 
	Login		: Shira_Avron
	Component	: DefaultComponent 
	Configuration 	: Debug
	Model Element	: Display
//!	Generated Date	: Wed, 5, Oct 2016  
	File Path	: DefaultComponent\Debug\Display.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Display.h"
//#[ ignore
#define Default_Display_Display_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Display
Display::Display() {
    NOTIFY_CONSTRUCTOR(Display, Display(), 0, Default_Display_Display_SERIALIZE);
}

Display::~Display() {
    NOTIFY_DESTRUCTOR(~Display, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(Display, Default, Default, false, OMAnimatedDisplay)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Debug\Display.cpp
*********************************************************************/

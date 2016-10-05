/********************************************************************
	Rhapsody	: 8.1.3 
	Login		: Shira_Avron
	Component	: DefaultComponent 
	Configuration 	: Trace
	Model Element	: Speaker
//!	Generated Date	: Wed, 5, Oct 2016  
	File Path	: DefaultComponent\Trace\Speaker.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Speaker.h"
//#[ ignore
#define Default_Speaker_Speaker_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Speaker
Speaker::Speaker() {
    NOTIFY_CONSTRUCTOR(Speaker, Speaker(), 0, Default_Speaker_Speaker_SERIALIZE);
}

Speaker::~Speaker() {
    NOTIFY_DESTRUCTOR(~Speaker, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(Speaker, Default, Default, false, OMAnimatedSpeaker)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Trace\Speaker.cpp
*********************************************************************/

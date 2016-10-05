/*********************************************************************
	Rhapsody	: 8.1.3 
	Login		: Shira_Avron
	Component	: DefaultComponent 
	Configuration 	: Debug
	Model Element	: Speaker
//!	Generated Date	: Wed, 5, Oct 2016  
	File Path	: DefaultComponent\Debug\Speaker.h
*********************************************************************/

#ifndef Speaker_H
#define Speaker_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Default.h"
//## package Default

//## class Speaker
class Speaker {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedSpeaker;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Speaker();
    
    //## auto_generated
    ~Speaker();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSpeaker : virtual public AOMInstance {
    DECLARE_META(Speaker, OMAnimatedSpeaker)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\Debug\Speaker.h
*********************************************************************/

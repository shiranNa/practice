/*********************************************************************
	Rhapsody	: 8.1.3 
	Login		: Shira_Avron
	Component	: DefaultComponent 
	Configuration 	: Debug
	Model Element	: Display
//!	Generated Date	: Wed, 5, Oct 2016  
	File Path	: DefaultComponent\Debug\Display.h
*********************************************************************/

#ifndef Display_H
#define Display_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Default.h"
//## package Default

//## class Display
class Display {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedDisplay;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Display();
    
    //## auto_generated
    ~Display();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDisplay : virtual public AOMInstance {
    DECLARE_META(Display, OMAnimatedDisplay)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\Debug\Display.h
*********************************************************************/

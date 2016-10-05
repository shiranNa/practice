/*********************************************************************
	Rhapsody	: 8.1.3 
	Login		: Shira_Avron
	Component	: DefaultComponent 
	Configuration 	: Trace
	Model Element	: Button
//!	Generated Date	: Wed, 5, Oct 2016  
	File Path	: DefaultComponent\Trace\Button.h
*********************************************************************/

#ifndef Button_H
#define Button_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Default.h"
//## link itsDialer
class Dialer;

//## package Default

//## class Button
class Button {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedButton;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## operation Button()
    Button();
    
    //## auto_generated
    ~Button();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Dialer* getItsDialer() const;
    
    //## auto_generated
    void setItsDialer(Dialer* p_Dialer);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Dialer* itsDialer;		//## link itsDialer
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedButton : virtual public AOMInstance {
    DECLARE_META(Button, OMAnimatedButton)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\Trace\Button.h
*********************************************************************/

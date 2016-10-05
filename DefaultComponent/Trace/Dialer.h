/*********************************************************************
	Rhapsody	: 8.1.3 
	Login		: Shira_Avron
	Component	: DefaultComponent 
	Configuration 	: Trace
	Model Element	: Dialer
//!	Generated Date	: Wed, 5, Oct 2016  
	File Path	: DefaultComponent\Trace\Dialer.h
*********************************************************************/

#ifndef Dialer_H
#define Dialer_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Default.h"
//## link itsCellularRadio
class CellularRadio;

//## link itsDisplay
class Display;

//## link itsSpeaker
class Speaker;

//## package Default

//## class Dialer
class Dialer {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedDialer;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## operation Dialer()
    Dialer();
    
    //## auto_generated
    ~Dialer();
    
    ////    Additional operations    ////
    
    //## auto_generated
    CellularRadio* getItsCellularRadio() const;
    
    //## auto_generated
    void setItsCellularRadio(CellularRadio* p_CellularRadio);
    
    //## auto_generated
    Display* getItsDisplay() const;
    
    //## auto_generated
    void setItsDisplay(Display* p_Display);
    
    //## auto_generated
    Speaker* getItsSpeaker() const;
    
    //## auto_generated
    void setItsSpeaker(Speaker* p_Speaker);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    CellularRadio* itsCellularRadio;		//## link itsCellularRadio
    
    Display* itsDisplay;		//## link itsDisplay
    
    Speaker* itsSpeaker;		//## link itsSpeaker
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsCellularRadio(CellularRadio* p_CellularRadio);
    
    //## auto_generated
    void _setItsCellularRadio(CellularRadio* p_CellularRadio);
    
    //## auto_generated
    void _clearItsCellularRadio();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDialer : virtual public AOMInstance {
    DECLARE_META(Dialer, OMAnimatedDialer)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\Trace\Dialer.h
*********************************************************************/

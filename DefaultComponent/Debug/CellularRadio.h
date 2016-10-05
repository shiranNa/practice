/*********************************************************************
	Rhapsody	: 8.1.3 
	Login		: Shira_Avron
	Component	: DefaultComponent 
	Configuration 	: Debug
	Model Element	: CellularRadio
//!	Generated Date	: Wed, 5, Oct 2016  
	File Path	: DefaultComponent\Debug\CellularRadio.h
*********************************************************************/

#ifndef CellularRadio_H
#define CellularRadio_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Default.h"
//## link itsDialer
class Dialer;

//## link itsDisplay
class Display;

//## package Default

//## class CellularRadio
class CellularRadio {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedCellularRadio;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    CellularRadio();
    
    //## auto_generated
    ~CellularRadio();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Dialer* getItsDialer() const;
    
    //## auto_generated
    void setItsDialer(Dialer* p_Dialer);
    
    //## auto_generated
    Display* getItsDisplay() const;
    
    //## auto_generated
    void setItsDisplay(Display* p_Display);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Dialer* itsDialer;		//## link itsDialer
    
    Display* itsDisplay;		//## link itsDisplay
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsDialer(Dialer* p_Dialer);
    
    //## auto_generated
    void _setItsDialer(Dialer* p_Dialer);
    
    //## auto_generated
    void _clearItsDialer();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedCellularRadio : virtual public AOMInstance {
    DECLARE_META(CellularRadio, OMAnimatedCellularRadio)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\Debug\CellularRadio.h
*********************************************************************/

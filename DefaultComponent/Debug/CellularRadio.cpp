/********************************************************************
	Rhapsody	: 8.1.3 
	Login		: Shira_Avron
	Component	: DefaultComponent 
	Configuration 	: Debug
	Model Element	: CellularRadio
//!	Generated Date	: Wed, 5, Oct 2016  
	File Path	: DefaultComponent\Debug\CellularRadio.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "CellularRadio.h"
//## link itsDialer
#include "Dialer.h"
//## link itsDisplay
#include "Display.h"
//#[ ignore
#define Default_CellularRadio_CellularRadio_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class CellularRadio
CellularRadio::CellularRadio() {
    NOTIFY_CONSTRUCTOR(CellularRadio, CellularRadio(), 0, Default_CellularRadio_CellularRadio_SERIALIZE);
    itsDialer = NULL;
    itsDisplay = NULL;
}

CellularRadio::~CellularRadio() {
    NOTIFY_DESTRUCTOR(~CellularRadio, true);
    cleanUpRelations();
}

Dialer* CellularRadio::getItsDialer() const {
    return itsDialer;
}

void CellularRadio::setItsDialer(Dialer* p_Dialer) {
    if(p_Dialer != NULL)
        {
            p_Dialer->_setItsCellularRadio(this);
        }
    _setItsDialer(p_Dialer);
}

Display* CellularRadio::getItsDisplay() const {
    return itsDisplay;
}

void CellularRadio::setItsDisplay(Display* p_Display) {
    itsDisplay = p_Display;
    if(p_Display != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDisplay", p_Display, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDisplay");
        }
}

void CellularRadio::cleanUpRelations() {
    if(itsDialer != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDialer");
            CellularRadio* p_CellularRadio = itsDialer->getItsCellularRadio();
            if(p_CellularRadio != NULL)
                {
                    itsDialer->__setItsCellularRadio(NULL);
                }
            itsDialer = NULL;
        }
    if(itsDisplay != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDisplay");
            itsDisplay = NULL;
        }
}

void CellularRadio::__setItsDialer(Dialer* p_Dialer) {
    itsDialer = p_Dialer;
    if(p_Dialer != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDialer", p_Dialer, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDialer");
        }
}

void CellularRadio::_setItsDialer(Dialer* p_Dialer) {
    if(itsDialer != NULL)
        {
            itsDialer->__setItsCellularRadio(NULL);
        }
    __setItsDialer(p_Dialer);
}

void CellularRadio::_clearItsDialer() {
    NOTIFY_RELATION_CLEARED("itsDialer");
    itsDialer = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedCellularRadio::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsDialer", false, true);
    if(myReal->itsDialer)
        {
            aomsRelations->ADD_ITEM(myReal->itsDialer);
        }
    aomsRelations->addRelation("itsDisplay", false, true);
    if(myReal->itsDisplay)
        {
            aomsRelations->ADD_ITEM(myReal->itsDisplay);
        }
}
//#]

IMPLEMENT_META_P(CellularRadio, Default, Default, false, OMAnimatedCellularRadio)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Debug\CellularRadio.cpp
*********************************************************************/

/********************************************************************
	Rhapsody	: 8.1.3 
	Login		: Shira_Avron
	Component	: DefaultComponent 
	Configuration 	: Trace
	Model Element	: Dialer
//!	Generated Date	: Wed, 5, Oct 2016  
	File Path	: DefaultComponent\Trace\Dialer.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Dialer.h"
//## link itsCellularRadio
#include "CellularRadio.h"
//## link itsDisplay
#include "Display.h"
//## link itsSpeaker
#include "Speaker.h"
//#[ ignore
#define Default_Dialer_Dialer_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Dialer
Dialer::Dialer() {
    NOTIFY_CONSTRUCTOR(Dialer, Dialer(), 0, Default_Dialer_Dialer_SERIALIZE);
    itsCellularRadio = NULL;
    itsDisplay = NULL;
    itsSpeaker = NULL;
    //#[ operation Dialer()
                setItsSpeaker (new Speaker);                   
                setItsDisplay (new Display);                   
                setItsCellularRadio (new CellularRadio);       
                itsCellularRadio->setItsDisplay(itsDisplay);   
    //#]
}

Dialer::~Dialer() {
    NOTIFY_DESTRUCTOR(~Dialer, true);
    cleanUpRelations();
}

CellularRadio* Dialer::getItsCellularRadio() const {
    return itsCellularRadio;
}

void Dialer::setItsCellularRadio(CellularRadio* p_CellularRadio) {
    if(p_CellularRadio != NULL)
        {
            p_CellularRadio->_setItsDialer(this);
        }
    _setItsCellularRadio(p_CellularRadio);
}

Display* Dialer::getItsDisplay() const {
    return itsDisplay;
}

void Dialer::setItsDisplay(Display* p_Display) {
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

Speaker* Dialer::getItsSpeaker() const {
    return itsSpeaker;
}

void Dialer::setItsSpeaker(Speaker* p_Speaker) {
    itsSpeaker = p_Speaker;
    if(p_Speaker != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSpeaker", p_Speaker, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSpeaker");
        }
}

void Dialer::cleanUpRelations() {
    if(itsCellularRadio != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCellularRadio");
            Dialer* p_Dialer = itsCellularRadio->getItsDialer();
            if(p_Dialer != NULL)
                {
                    itsCellularRadio->__setItsDialer(NULL);
                }
            itsCellularRadio = NULL;
        }
    if(itsDisplay != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDisplay");
            itsDisplay = NULL;
        }
    if(itsSpeaker != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSpeaker");
            itsSpeaker = NULL;
        }
}

void Dialer::__setItsCellularRadio(CellularRadio* p_CellularRadio) {
    itsCellularRadio = p_CellularRadio;
    if(p_CellularRadio != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsCellularRadio", p_CellularRadio, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsCellularRadio");
        }
}

void Dialer::_setItsCellularRadio(CellularRadio* p_CellularRadio) {
    if(itsCellularRadio != NULL)
        {
            itsCellularRadio->__setItsDialer(NULL);
        }
    __setItsCellularRadio(p_CellularRadio);
}

void Dialer::_clearItsCellularRadio() {
    NOTIFY_RELATION_CLEARED("itsCellularRadio");
    itsCellularRadio = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDialer::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSpeaker", false, true);
    if(myReal->itsSpeaker)
        {
            aomsRelations->ADD_ITEM(myReal->itsSpeaker);
        }
    aomsRelations->addRelation("itsDisplay", false, true);
    if(myReal->itsDisplay)
        {
            aomsRelations->ADD_ITEM(myReal->itsDisplay);
        }
    aomsRelations->addRelation("itsCellularRadio", false, true);
    if(myReal->itsCellularRadio)
        {
            aomsRelations->ADD_ITEM(myReal->itsCellularRadio);
        }
}
//#]

IMPLEMENT_META_P(Dialer, Default, Default, false, OMAnimatedDialer)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Trace\Dialer.cpp
*********************************************************************/

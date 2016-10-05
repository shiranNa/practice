/********************************************************************
	Rhapsody	: 8.1.3 
	Login		: Shira_Avron
	Component	: DefaultComponent 
	Configuration 	: Trace
	Model Element	: Button
//!	Generated Date	: Wed, 5, Oct 2016  
	File Path	: DefaultComponent\Trace\Button.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Button.h"
//## link itsDialer
#include "Dialer.h"
//#[ ignore
#define Default_Button_Button_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Button
Button::Button() {
    NOTIFY_CONSTRUCTOR(Button, Button(), 0, Default_Button_Button_SERIALIZE);
    itsDialer = NULL;
    //#[ operation Button()
                setItsDialer(new Dialer);
    //#]
}

Button::~Button() {
    NOTIFY_DESTRUCTOR(~Button, true);
    cleanUpRelations();
}

Dialer* Button::getItsDialer() const {
    return itsDialer;
}

void Button::setItsDialer(Dialer* p_Dialer) {
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

void Button::cleanUpRelations() {
    if(itsDialer != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDialer");
            itsDialer = NULL;
        }
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedButton::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsDialer", false, true);
    if(myReal->itsDialer)
        {
            aomsRelations->ADD_ITEM(myReal->itsDialer);
        }
}
//#]

IMPLEMENT_META_P(Button, Default, Default, false, OMAnimatedButton)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Trace\Button.cpp
*********************************************************************/

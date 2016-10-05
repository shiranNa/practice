/********************************************************************
	Rhapsody	: 8.1.3 
	Login		: Shira_Avron
	Component	: DefaultComponent 
	Configuration 	: Trace
	Model Element	: Trace
//!	Generated Date	: Wed, 5, Oct 2016  
	File Path	: DefaultComponent\Trace\MainDefaultComponent.cpp
*********************************************************************/

//## auto_generated
#include "MainDefaultComponent.h"
//## auto_generated
#include "Button.h"
int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize(argc, argv, 6423))
        {
            Button * p_Button;
            p_Button = new Button;
            //#[ configuration DefaultComponent::Trace 
            //#]
            OXF::start();
            delete p_Button;
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: DefaultComponent\Trace\MainDefaultComponent.cpp
*********************************************************************/

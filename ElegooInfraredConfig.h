#ifndef __ELEGOO_INFRARED_CONFIG_H__
#define __ELEGOO_INFRARED_CONFIG_H__

#include "ElegooInfraredConfigInterface.h"

// Supporting the infrared remote control shipped with the car
class ElegooInfraredConfig: public ElegooInfraredConfigInterface
{
public:
	// May return UNKNOWN_CMD, will never return NO_COMMAND
	virtual ElegooCommand checkCommand(unsigned long possibleCommandCode)
	{
		switch (possibleCommandCode)
		{
		case 5316027:      
      // Taste ^
      return ElegooCommand::MOVE_FORWARDS;    
    
    case 1386468383:
      // Taste <
      return ElegooCommand::TURN_LEFT;    

    case 553536955:
      // Taste >
      return ElegooCommand::TURN_RIGHT;   

   case 2747854299:
      // Taste DOWN
      return ElegooCommand::MOVE_BACKWARDS;   
      
    case 16761405:          
    // Taste ???
      return ElegooCommand::MOVE_FORWARDS;    

    case 16720605:          
        // Taste ???
      return ElegooCommand::MOVE_FORWARDS;    

    case 16754775:
        // Taste ???
      return ElegooCommand::MOVE_FORWARDS;    

    case 16712445:
    // Taste ???
      return ElegooCommand::MOVE_FORWARDS;    
      
		case 16736925:
			return ElegooCommand::MOVE_FORWARDS;		
		
		
		
		case 3622325019:
      // Taste OK
			return ElegooCommand::STOP_MOVING;
    case 3238126971:
      // Taste 1
      return ElegooCommand::AUTO_DRIVER_1;
    case 2538093563:
    // Taste 2
      return ElegooCommand::AUTO_DRIVER_2;
    case 4039382595:
    // Taste 3
      return ElegooCommand::LINE_TRACKING_DRIVER;
		default:
			return ElegooCommand::UNK_COMMAND;
		}
	}

	virtual ~ElegooInfraredConfig()
	{
	}
};

#endif

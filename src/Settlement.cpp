#include "Settlement.h"

    // Constructor
    Settlement::Settlement(const string &name, SettlementType type): name(name), type(type){}

    // Get the name of the settlement
    const string &Settlement::getName() const{
        return name;
    }

    // Get the type of the settlement
    SettlementType Settlement::getType() const{
        return type;
    }

    // Convert the settlement to a string
    const string Settlement::toString() const{
        string typeStr;
        if (type == SettlementType::VILLAGE){
            typeStr = "Village";
        }
        else if ( type == SettlementType::CITY){
            typeStr = "City";
        }
        else {
            typeStr = "Metropolis";
        }
        return "Settlement name :" + name + "settlement type: " + typeStr;
        
    }
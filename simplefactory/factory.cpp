#include "Truck.h" 
#include "Van.h"
#include "Sedan.h"
#include "factory.h"

Truck * SimpleFactory::create_truck(){
    Truck * ptr = new Truck();
    return ptr;
}

Van * SimpleFactory::create_van(){
    Van * ptr = new Van();
    return ptr;
}

Sedan * SimpleFactory::create_sedan(){
    Sedan * ptr = new Sedan();
    return ptr;
}



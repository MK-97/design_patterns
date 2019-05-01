#ifndef TRUCK_H
#define TRUCK_H
#include "factory.h"

class Truck: public SimpleFactory{

    public:
        Truck(){
            std::cout <<"Truck made" <<std::endl;
            typeOfCar = "truck";
        };



};
#endif

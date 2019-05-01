#ifndef SEDAN_H
#define SEDAN_H
#include "factory.h"

class Sedan: public SimpleFactory{

    public:
        Sedan(){
            std::cout <<"Sedan made"<<std::endl;
            typeOfCar = "sedan";
        }
};
#endif

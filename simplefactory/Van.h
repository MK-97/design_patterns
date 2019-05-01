#ifndef VAN_H
#define VAN_H
#include "factory.h"

class Van: public SimpleFactory{

    public:
        Van(){
            std::cout <<"Van made" <<std::endl;
            typeOfCar = "van";
        }
};
#endif

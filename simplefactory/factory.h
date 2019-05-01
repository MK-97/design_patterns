#ifndef FACTORY_H
#define FACTORY_H

#include <iostream>

class Truck;
class Van;
class Sedan;

class SimpleFactory{

    public:


        std::string typeOfCar;

        virtual void identifyCar(){
            std::cout << "This car is " << typeOfCar << std::endl;
        }

        Truck * create_truck();

        Van * create_van();

        Sedan * create_sedan();


};
#endif 

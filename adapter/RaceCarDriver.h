#ifndef RACECARDRIVER_H
#define RACECARDRIVER_H
#include <iostream>
#include "RaceCar.h"

class RacecarDriver{

    public:

        RacecarDriver(){
        }


    void Drive(RaceCar & car){
       car.RaceCarAccelerate(); 
    }
        

};
#endif

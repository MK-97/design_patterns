#ifndef RACECAR_H
#define RACECAR_H
#include <iostream>

class RaceCar{

    public:
        RaceCar(){
        }

        virtual void RaceCarAccelerate(){
            std::cout << "*Racecar sounds*" <<std::endl;
        }


};
#endif

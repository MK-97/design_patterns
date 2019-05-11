#ifndef DRIVERADAPTER_H
#define DRIVERADAPTER_H

#include <iostream>
#include "Car.h"
#include "RaceCar.h"

class DriverAdapter: public RaceCar{
        
    public:
        DriverAdapter(Car & regularcar_): car_(regularcar_) {}

        void RaceCarAccelerate() override {
            car_.CarAccelerate();
        }

    private:
        
        Car & car_;
};
#endif

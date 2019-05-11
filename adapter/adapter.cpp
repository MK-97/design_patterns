#include "RaceCarDriver.h"
#include "DriverAdapter.h"
#include "RaceCar.h"
#include "Car.h"
int main(){

    Car regularcar = Car();
    RacecarDriver Sam;

    RaceCar nascar = RaceCar();
    DriverAdapter prius(regularcar);
    
    Sam.Drive(nascar);
    Sam.Drive(prius);



}// end of main

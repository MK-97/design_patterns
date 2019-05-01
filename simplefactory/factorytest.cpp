#include "factory.h"
#include "factory.cpp"
int main(){

    SimpleFactory test;
    Truck* trucktest;
    Van * vantest;
    Sedan * sedantest;

    trucktest = test.create_truck();
    trucktest->identifyCar();

    vantest = test.create_van();
    vantest->identifyCar();

    sedantest = test.create_sedan();
    sedantest->identifyCar();


}

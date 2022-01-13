// name(s) and Perm 
// This is the only file to submit.

#include "car.hpp"
#include <cstddef>
#include <cstring>
#include <iostream>
// #include .......

Car::Car(){
    this->manufacturer = NULL;
    this->model = NULL;
    this->zeroToSixtyNs = 0;
    this->headonDragCoeff = 0;
    this->horsepower = 0;
    this->backseatDoors = None; 
    this->seatCount = 0;
}

Car(char const* const manufacturerName, char const* const modelName, PerformanceStats perf, uint8_t numSeats, DoorKind backseatDoorDesign){
    manufacturer = manufacturerName;
    model = modelName;
    zeroToSixtyyNs = perf.zeroToSixtyyNs;
    headonDragCoeff = perf.headonDragCoeff;
    horsepower = perf.horsepower;
    seatCount = numSeats;
    backseatDoors = backseatDoorDesign;
}



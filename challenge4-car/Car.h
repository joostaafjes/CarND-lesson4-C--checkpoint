//
// Created by Joost Aafjes on 16/10/2018.
//

#ifndef CHALLENGE4_CAR_CAR_H
#define CHALLENGE4_CAR_CAR_H

/*
Your code goes here!
Take a look at Car.cpp to see how to define the Car class.

Hint: you'll need to define:
1. the class itself
2. the class constructor
3. one private property
4. three public methods
*/

class Car {
private:
    bool in_working_condition_;

public:
    Car();
    void wearAndTear();
    bool drive();
    void fix();
};


#endif //CHALLENGE4_CAR_CAR_H

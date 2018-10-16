//
// Created by Joost Aafjes on 16/10/2018.
//

#include "Factorial.h"

int Factorial(int n) {
    if (n == 0) {
       return 1;
    } else {
        return n * Factorial(n-1);
    }
}

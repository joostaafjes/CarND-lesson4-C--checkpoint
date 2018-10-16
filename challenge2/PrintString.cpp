#include <iostream>
#include <string>
#include "./PrintString.h"

// it's also worth noting that `string` and `cout` live in namespace std, eg. `std::string`.
// with the declaration on the next line, you can just use `string` and `cout`.
using namespace std;

void PrintString(string str, int n)
{
    // your code goes here! print str n times. Follow each str with a newline,
    // eg. cout << str << endl;
    for (int index = 0; index < n; index++) {
        std::cout << str << std::endl;
    }
}

/*
Like always, no need to change anything here, but feel free to play with the
test case.
*/
#include <iostream>
#include "Doubler.h"

using namespace std;

int main()
{
    int value = 25;

    cout << "Original value: " << value << endl;

    Doubler(value);

    cout << "Doubled value: " << value << endl;

    return 0;
}

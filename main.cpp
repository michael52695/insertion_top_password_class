#include <iostream>
#include <string>
#include <fstream>
#include "SORTING.h"

using namespace std;


int main()
{
    SORTING a;
    a.load();
    a.insertionSort();
    a.display();
    return 0;
}

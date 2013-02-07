#include "SORTING.h"
#include <iostream>
#include <string>
#include <fstream>


void SORTING::load() {
    string line;
    int n = 0;

    ifstream myfile;
    myfile.open("top_passwords.txt");

    while (myfile.good()) {
        getline(myfile, line);
        array[n] = line;
        n++;
    }
    myfile.close();
}

void SORTING::insertionSort() {
    string key;
    int j = 0;
    int N=100;

    for (int i = 0; i<N; i++) {
        key = array[i];
        j = i-1;

        while(j>=0 && array[j]>key) {
            array[j+1] = array[j];
            j=j-1;
        }
        array[j+1] = key;
    }
}

void SORTING::display() {
    for (int a = 0; a<100; a++) {
        cout << array[a] <<endl;
    }
}

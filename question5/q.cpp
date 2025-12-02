/*
Ek structure Car banao jisme:

name (string)
model (int)
mileage (float)

Task:

5 cars ka array banao.
Har car ka data input lo.
Find and display the car with the highest mileage.
Find and display the car with the lowest mileage.
*/

#include <iostream>
#include <string>
using namespace std;

struct Car {
    string name;
    int model;
    float mileage;
};

int main() {
    Car c[5];

    // ---- Input ----
    for (int i = 0; i < 5; i++) {
        cout << "Enter Car " << i+1 << " Name: ";
        cin >> c[i].name;
        cout << "Enter Model: ";
        cin >> c[i].model;
        cout << "Enter Mileage: ";
        cin >> c[i].mileage;
        cout << endl;
    }

    // ---- Initialize indices for max/min ----
    int indexMax = 0;
    int indexMin = 0;

    // ---- Find highest and lowest mileage ----
    for (int i = 1; i < 5; i++) {

        if (c[i].mileage > c[indexMax].mileage) {  
            indexMax = i;
        }

        if (c[i].mileage < c[indexMin].mileage) {  
            indexMin = i;
        }
    }

    // ---- Output ----
    cout << "\n--- Car with Highest Mileage ---\n";
    cout << "Name: " << c[indexMax].name << endl;
    cout << "Model: " << c[indexMax].model << endl;
    cout << "Mileage: " << c[indexMax].mileage << endl;

    cout << "\n--- Car with Lowest Mileage ---\n";
    cout << "Name: " << c[indexMin].name << endl;
    cout << "Model: " << c[indexMin].model << endl;
    cout << "Mileage: " << c[indexMin].mileage << endl;

    return 0;
}

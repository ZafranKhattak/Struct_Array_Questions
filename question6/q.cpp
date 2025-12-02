/*
Ek structure Patient banao jisme:

name (string)
age (int)
disease (string)

Tasks:
1️⃣ Input
5 patients ka data input lo.

2️⃣ Search Feature

User se disease ka naam input lo.
Sirf un patients ko display karo jinko woh disease hai.
Agar koi match na mile:
"No patient found with this disease."

3️⃣ Sorting Feature

All patients ko unke age ke hisaab se ascending order (chhoti age → badi age) mein sort karo
using any sorting method (bubble sort recommended).

Sorting ke baad poora sorted list print karo.
*/

#include <iostream>
#include <string>
using namespace std;

struct Patient {
    string name;
    int age;
    string disease;
};

int main() {
    Patient p[5];
    string findDisease;
    bool found = false;

    // -------------------- INPUT --------------------
    cout << "Enter data of 5 patients:\n";
    cin.ignore(); // To clear previous input buffer

    for (int i = 0; i < 5; i++) {
        cout << "\nPatient " << i + 1 << " Name: ";
        getline(cin, p[i].name);

        cout << "Age: ";
        cin >> p[i].age;

        cout << "Disease: ";
        cin >> p[i].disease;

        cin.ignore(); // To avoid skipping getline on next iteration
    }

    // -------------------- SEARCH --------------------
    cout << "\nEnter disease to search: ";
    cin >> findDisease;

    cout << "\n--- Patients with disease '" << findDisease << "' ---\n";

    for (int i = 0; i < 5; i++) {
        if (p[i].disease == findDisease) {
            cout << "\nName: " << p[i].name << endl;
            cout << "Age: " << p[i].age << endl;
            cout << "Disease: " << p[i].disease << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "\nNo patient found with this disease.\n";
    }

    // -------------------- SORTING BY AGE --------------------
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (p[j].age > p[j + 1].age) {
                Patient temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }

    // -------------------- DISPLAY SORTED DATA --------------------
    cout << "\n--- Patients Sorted by Age (Ascending) ---\n";
    for (int i = 0; i < 5; i++) {
        cout << "\nName: " << p[i].name << endl;
        cout << "Age: " << p[i].age << endl;
        cout << "Disease: " << p[i].disease << endl;
    }

    return 0;
}

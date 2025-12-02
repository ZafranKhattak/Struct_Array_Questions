/*
Question 2 (Easy–Medium Level)

Ek structure Employee banao jisme:
id (int)
name (string)
salary (float)
Phir 3 employees ka array banao.
Input lo sirf un employees ka data print karo jin ki salary 50,000 se zyada ho.
*/
#include <iostream>
#include <string>
using namespace std ;

struct Employee{
    string name ;
    int id;
    float salary;
    
};
int main() {
    
    Employee emp[3];
    
    for (int i=0; i<3; i++){
    cout <<"Enter "<< i+1 <<" Id: " ;
    cin >> emp[i].id;
    cout <<"Enter your name: " ;
    cin >> emp[i].name;
    cout <<"Enter your salaray: " ;
    cin >> emp[i].salary;
    } 
    cout << endl << endl;
    for (int i=0; i<3; i++){
        
    if (emp[i].salary > 50000){
    cout <<"ID: " << emp[i].id << endl;
    cout <<"Name : " << emp[i].name << endl;
    cout <<"Salary is " << emp[i].salary << endl;
}
    }
    return 0;
}
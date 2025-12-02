/*
Question 3 (Medium Level)

Ek structure Product banao jisme:
name (string)
price (float)
quantity (int)
Phir 5 products ka array banao.

Task:
Sab products ka data input lo.
Har product ka total cost calculate karo (price × quantity).
Sirf un products ko print karo jin ka total cost 10,000 se zyada hai.
*/

// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std ;

struct Product{
    
    string name ;
    float price; 
    int qnt;
    int totalCost=0;
    
};
int main() {
    
    Product emp[2];
    
    for (int i=0; i<2; i++)
    {
        cout <<"Enter your Product: ";
        cin >> emp[i].name;
        cout <<"Enter your Price: " ;
        cin >> emp[i].price;
        cout <<"Enter your qunatity: " ;
        cin >> emp[i].qnt;
        
        emp[i].totalCost = (emp[i].price) *(emp[i].qnt) ; 
    }
    
    cout <<endl;
    
    for (int i=0; i<2; i++)
    {
        if (emp[i].totalCost > 500)
        {
            cout <<"Product name: " << emp[i].name << endl;
            cout <<"Price: " << emp[i].price << endl;
            cout <<"Quantity is: " << emp[i].qnt << endl;
            cout <<"Total Cost: " << (emp[i].price) * (emp[i].qnt) << endl;
        }
    }
    
    return 0;
}
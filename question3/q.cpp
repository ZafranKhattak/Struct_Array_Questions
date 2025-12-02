/*
Question 4 (Medium–Hard Level)

Ek structure Book banao jisme:
title (string)
author (string)
price (float)
Phir 4 books ka array banao.

Task:
4 books ka data input lo.
User se author ka naam input lo.
Sirf un books ko print karo jo us author ki ho.
Agar koi book nahi milti to message print karo:
"No book found by this author."
*/

// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include <cctype>
using namespace std ;

struct Book{
    
    string title ;
    string author; 
    float price;

    
};
int main() {
    
    Book emp[2];
    
    for (int i=0; i<2; i++)
    {
        cout <<"Enter your Title: ";
        cin >> emp[i].title;
        string tolower(emp[i].author) ;
        cout <<"Enter your Author: " ;
        cin >> (emp[i].author);
        cout <<"Enter your Price: " ;
        cin >> emp[i].price;
  
    }
    
    cout <<endl;

    string name;
    string tolower(name) ;
    cout <<"Enter your Author name: ";
    cin >>(name) ;
    bool found = false;
    for (int i=0; i<2; i++)
    {
     if (name == emp[i].author)
     {
         cout <<"Title of Book is: " << emp[i].title << endl;
         cout <<"The Author is " << emp[i].author << endl;
         cout <<"Price of Book is: " << emp[i].price << endl;
         found = true;
    }
} 
    if (!found)
    {
        cout <<"No book written by the author";
    }
    
    return 0;
}
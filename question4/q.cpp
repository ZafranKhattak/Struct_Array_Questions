/*
Question 5 (Hard Level – Important for Exams)

Ek structure Student banao jisme:
name (string)
marks[3] (3 subjects ke marks)
total (int)
percentage (float)
Task:

3 students ka array banao.
Har student ke 3 subjects ke marks input lo.
Total aur percentage calculate karo.
Sirf un students ko print karo jinki percentage 70% se zyada ho.
*/


#include <iostream>
#include <string>
#include <cctype>
using namespace std ;

struct Student{
    
    string name;
    int marks[3];
    int total ;
    float percentage;
};
int main() {

Student s[2];
    
    for (int i=0; i<2; i++)
    {
        cout <<"Enter your Name: " << i+1<<" : " ;
        cin >> s[i].name;
        s[i].total = 0 ;
        for (int j=0; j<3; j++)
        {
            cout <<"Enter Marks: " << j+1 <<" : ";
            cin >> s[i].marks[j];
            
            s[i].total += s[i].marks[j];
        
        }
        s[i].percentage = (s[i].total/300.0)*100 ;
    }

    for (int i=0; i<2; i++)
    {
        if (s[i].percentage > 70)
        {
            cout <<"Name : " << s[i].name << endl;
            cout <<"TotalMarks: " << s[i].total << endl;
            cout <<"Percentage is: " << s[i].percentage << endl;
        }
    }
    return 0;
}
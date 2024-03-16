// Q.13 Write a program to print the roll number and average marks of 8 students in three subjects (each out of 100). 
// The marks are entered by the user and the roll numbers are automatically assigned.

// Input:- 

#include <iostream>
using namespace std;
struct student
{
    char name[50];
    int roll;
    float marks;
}
s[10];
main()
{
    cout <<"Enter information of students: " << endl;
    for(int i = 0; i < 8; ++i)
    {
        s[i].roll = i+1;
        cout << "For roll number" << s[i].roll << "," << endl;
        cout <<"Enter name: ";
        cin >> s[i].name;
        cout <<"Enter marks: ";
        cin >> s[i].marks;
        cout << endl;
    }
    cout <<"Displaying Information: " << endl;
    for(int i = 0; i < 8; ++i)
    {
        cout <<"\nRoll number: " << i+1 << endl;
        cout <<"\nName: " << s[i].name << endl;
        cout <<"\nMarks: " << s[i].marks << endl;
    }
};

// Output:-
// Roll number: 1
// Name: Imran
// Marks: 70
// Roll number: 2
// Name: Sarthak
// Marks: 75
// Roll number: 3
// Name: Sushant
// Marks: 85
// Roll number: 4
// Name: Ritika
// Marks: 90
// Roll number: 5
// Name: Shruti
// Marks: 80
// Roll number: 6
// Name: Rushikesh
// Marks: 65
// Roll number: 7
// Name: Pranav
// Marks: 70
// Roll number: 8
// Name: Sidharth
// Marks: 60

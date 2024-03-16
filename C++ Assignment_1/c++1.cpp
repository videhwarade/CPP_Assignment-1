// Q.1 Create a class named 'Student' with a string variable 'name' and an integer variable 'roll_no'. 
// Assign the value of roll_no as '2' and that of name as "John" by creating an object of the class Student.


#include<iostream>
using namespace std;
class Student
{
public:
    int Roll_no;
    string Name;
};
int main()
{
    Student S1;
    S1.Name = "John";
    S1.Roll_no = 2;
    cout << "Name: " << S1.Name << endl;
    cout << "roll_no: " << S1.Roll_no << endl;
}

/*
output
Name: John
Roll_no: 2
*/
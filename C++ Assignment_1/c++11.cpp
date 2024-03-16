// Q.11 Write a program that would print the information (name, year of joining, salary, address) 
// of threeemployees by creating a class named 'Employee'. The output should be as follows:
// Name Year of joining Address
// Robert 1994 64C- WallsStreat
// Sam 2000 68D- WallsStreat
// John 1999 26B- WallsStreat

// Input:-

#include<iostream>
#include<string.h>
using namespace std;
class Employee
{
    private:
        float salary;
        int year;
        char name[50];
        string address;
public:
   void set(char name1[], float salary1, int year, char address1[])
    {
        strcpy(name,name1);
        salary=salary1;
        year=year;
        address=address1;
    }
    void get()
    {
        cout<<"\nName: "<<name<<"\nSalary: "<<salary<<"\nDate of joining: "<<year<<"\nAddress: "<<address;
    }
};
main()
{
    Employee e1;
    e1.set("Robert",15000, 1994,"64C-WallsStreat");
    Employee e2;
    e2.set("Sam", 13000 , 2000, "68D-WallsStreat");
    Employee e3;
    e3.set("John",14000, 1999,"26B-WallsStreat"); 
    e1.get();
    e2.get();
    e3.get();
}

// output
// Name: Robert
// Salary: 15000
// Date of joining: 7339708
// Address: 64C-WallsStreat
// Name: Sam
// Salary: 13000
// Date of joining: 1987214994
// Address: 68D-WallsStreat
// Name: John
// Salary: 14000
// Date of joining: 32
// Address: 26B-WallsStreat
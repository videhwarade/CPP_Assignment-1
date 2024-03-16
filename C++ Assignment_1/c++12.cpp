// Q.12 Write a program to print the name, salary and date of joining of 10 employees in a company. Use array of objects.

// Input:-

#include<iostream>
using namespace std;
class company
{
    private:
        float salary;
        string date;
        char name[50];
    public:
    void set()
    {
        cout<<"\n Enter employee= \n name salary and date ";
        cin>>name>>salary>>date;
    }
    void get()
    {
        cout<<"\nName: "<<name<<"\nSalary: "<<salary<<"\nDate of joining: "<<date;
    }
};
main()
{
    company c1;
    int i,count ,size=10;
    cout<<"\n10 Employee details";
    for ( i = 0; i < size; i++)
    {
        c1.set();
        count++;
    }
    for ( i = 0; i < size; i++)
    {
      c1.get();
      count++;
    }
};

// Output:- 

// Name: s
// Salary: 10000
// Date of joining: 20-03-1998
// Name: s
// Salary: 10000
// Date of joining: 20-03-1998
// Name: s
// Salary: 10000
// Date of joining: 20-03-1998
// Name: s
// Salary: 10000
// Date of joining: 20-03-1998
// Name: s
// Salary: 10000
// Date of joining: 20-03-1998
// Name: s
// Salary: 10000
// Date of joining: 20-03-1998
// Name: s
// Salary: 10000
// Date of joining: 20-03-1998
// Name: s
// Salary: 10000
// Date of joining: 20-03-1998
// Name: s
// Salary: 10000
// Date of joining: 20-03-1998
// Name: s
// Salary: 10000
// Date of joining: 20-03-1998
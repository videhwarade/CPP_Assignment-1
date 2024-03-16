// Q.2 Assign and print the roll number, phone number and address of two students 
// having names "Sam" and "John" respectively by creating two objects of the class 'Student'.

#include<iostream>
#include<string.h>
using namespace std;
class Student
{
private:
    int rollno;
    string phno;
    string address;
    string name;
public:
    Student(string name1,int rollno1, string phno1, string address1)
    {
        name = name1;
        rollno = rollno1;
        phno = phno1;
        address=address1;
    }
    void show()
		{
			cout<<"\n Name: "<<name<<"\n Roll No: "<<rollno<<"\n Phone No.: "<<phno<<"\n Address: "<<address;
		}
};
main()
{
	Student s1("Sam",20,"1800011503","Pune 411001");
	Student s2("John",30,"1800015003","Jalgaon 425001");
	s1.show();
	cout<<"\n-----------------------------";
	s2.show();
	cout<<"\n-----------------------------";
};

// Output:-
//  Name: Sam
//  Roll No: 20
//  Phone No.: 1800011503
//  Address: Pune 411001
// -----------------------------
//  Name: John
//  Roll No: 30
//  Phone No.: 1800015003
//  Address: Jalgaon 425001
// -----------------------------
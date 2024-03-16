// Q.4 Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units by creating 
// a class named 'Triangle' with the constructor having the three sides as its parameters.

// Input:-

#include <iostream>
#include <math.h>
using namespace std;
class Triangle 
{
    private:
        int a1, a2, a3;
    public:
        float s,ans1;
        int peri;
    
    Triangle(int s1, int s2, int s3) 
    {
        a1=s1;
        a2=s2;
        a3=s3;
    }
    
    int perimeter()
    {
        peri= a1 + a2 + a3;
        return(peri);
           
    }
    float area() 
    {
        s = perimeter() / 2.0;
        ans1=sqrt(s * (s - a1) * (s - a2) * (s - a3));
        return (ans1);
    }

    void printDetails()
    {
        cout << "\nArea of triangle: " <<ans1;
        cout << "\nPerimeter of triangle: " <<peri;
    }
};

int main()
{
    Triangle t1(3, 4, 5);
    t1.area();
    t1.perimeter();
    t1.printDetails();
}

// Output:-
// Area of triangle: 6
// Perimeter of triangle: 12
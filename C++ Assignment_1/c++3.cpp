// Q.3 Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units 
// by creating a class named 'Triangle' with a function to print the area and perimeter.

// Input:- 

#include <iostream>
#include <math.h>
using namespace std;
class Triangle 
{
    private:
        int a1=3, a2=4, a3=5;
    public:
        float s,ans1;
        int ans;
    int perimeter()
    {
        ans= a1 + a2 + a3;
        return ans;
    }   
    float area() 
    {
        s = perimeter() / 2.0;
        ans1=sqrt(s * (s - a1) * (s - a2) * (s - a3));
        return (ans1);
    }
    void Details()
    {
        cout << "\nArea of triangle: " <<ans1;
        cout << "\nPerimeter of triangle: " <<ans;
    }
};
int main()
{
    Triangle t1;
    t1.area();
    t1.perimeter();
    t1.Details();
}

// Output:-
// Area of triangle: 6
// Perimeter of triangle: 12

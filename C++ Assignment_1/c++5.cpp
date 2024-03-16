// Q.5 Write a program to print the area of two rectangles having sides (4,5) and (5,8) respectively 
// by creating a class named 'Rectangle' with a function named 'Area' which returns the area. Length 
// and breadth are passed as parameters to its constructor.

// Input:- 

#include <iostream>
using namespace std;
class rectangle 
{
    private:
    int l,b, ans;
    public:
    rectangle (int x,int y)
    {
        l=x;
        b=y;  
    }
    void out()
    {
        ans= l*b;
    }
    void display()
    {
        cout<<"\nArea Of Rectangle="<<ans;
    }
};  
main()
{
    rectangle r1(4,5);
    r1.out();
    r1.display();
    rectangle r2(5,8);
    r2.out();
    r2.display();
}

// Output:-
// Area Of Rectangle=20
// Area Of Rectangle=40

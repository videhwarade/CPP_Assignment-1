// Q.6 Write a program to print the area of a rectangle by creating a class named 'Area' having two functions. 
// First function named as 'setDim' takes the length and breadth of the rectangle as parameters and the second function 
// named as 'getArea' returns the area of the rectangle. Length and breadth of the rectangle are entered through keyboard.

// Input:-
 
#include <iostream>
using namespace std;
class rectangle 
{
    private:
    int l,b, ans;
    public:
    void setdim()
    {
        cout<<"\nEnter the length = ";
        cin>>l;
        cout<<"\nEnter the breath = ";
        cin>>b; 
        
    }
    void getarea()
    {
        ans= l*b;
        cout<<"\nArea Of Rectangle = "<<ans;
    }
};  
main()
{
    rectangle r1;
    r1.setdim();
    r1.getarea();
}

// Output:-
// Enter the length = 15
// Enter the breath = 12
// Area Of Rectangle = 180
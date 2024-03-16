// Q.7 Write a program to print the area of a rectangle by creating a class named 'Area' taking the values of 
// its length and breadth as parameters of its constructor and having a function named 'returnArea' which returns 
// the area of the rectangle. Length and breadth of the rectangle are entered through keyboard.

// Input:-

#include <iostream>
using namespace std;

class Area 
{
    private:
    int l,b, ans;
    public:

   int area()
    {
        cout<<"\n Enter the length of rectangle = ";
        cin>>l;
        cout<<"\n Enter the breath of rectangle = ";
        cin>>b;
        return(0);
    }

    void returnArea()
    {
        ans=l*b;
        cout<<"\nArea of the Rectangle = "<<ans;
    }
};    
main()
{
    Area a1;
    a1.area();
    a1.returnArea();
}
    
// Output:-
// Enter the length of rectangle = 15
// Enter the breath of rectangle = 14
// Area of the Rectangle = 210

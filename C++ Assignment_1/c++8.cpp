// Q.8 Print the average of three numbers entered by the user by creating a class named 'Average' 
// having a function to calculate and print the average without creating any object of the Average class.

// Input:-
 
#include<iostream>
using namespace std;
class Average
{
    private:
    float a,b,c,avg;
    public:    
    void Ave()
    {
        cout<<"\n Enter three values=";
        cin>>a>>b>>c;
    }
    void get()
    {
        avg=(a+b+c)/3.0;
        cout<<"\n average og three numbers="<<avg;         
    }
    
};
class avew :public Average
{    
};
main()
{
    avew obi;
    obi.Ave();
    obi.get();
}

// Output:-
// Enter three values 1 2 3 

// average og three numbers=2
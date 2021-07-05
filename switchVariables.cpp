#include <iostream>
using namespace std;

int main(){
    int x, y;
    cout<<"What is the value for x? ";
    cin>>x;
    cout<<"What is the value for y? ";
    cin>>y;

    int myx, myy;
    myx = x;
    myy = y;

    //assuming x = 10 and y = 5 initially 
    x = x + y; //x = 10 + 5 >> x = 15
    y = x - y;// y = 15 - 5 >> y = 10
    x = x - y;// x = 15 - 10 >> x = 5

    cout<< "The mytial value for X and Y was: " << myx << " " << myy << " , the new values for X and Y are: " << x << " " << y;
}
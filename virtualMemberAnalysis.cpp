#include <iostream>
#include <string>
using namespace std;

class car
{
private:
    /* data */
public:
    int myint;
    string getEngineType1() {
      return "None1";
    }

    virtual string getEngineType2() {   //virtual functions are template functions that are intended to be overwritten by child functions
      return "None2";
    }
};

class childCar: public car
{
public:
    string getEngineType1() {     //this function has no virtual counterpart so in order to call it the object must be instantiated as a child object
      return "Nuclear";
    }

    string getEngineType2() override {    //I've included a change to this line of code for reading purposes and to better help myself while reading this code, this change should not
                                          //affect the implementation of the function
      return "Solar";
    }
};

int main(){

    // Explain the behavior of this code:
    childCar c;     //instantiates an object with the child class called c
    car *p;         //creates a pointer object of the parent class
    p = &c;         
// 
//  The pointer is then assigned the memory location of the child object created previouly. This has the effect of creating a pointer that acts like a child however it must pass
//  all methods through the parent class first before continuing to the child class. This pointer cannot be used with the dot operatior like a normal pointer so to access member
//  or functions one must use the ->.
// 
  p->myint = 1;
  //TLDR: virtual functions are used to indicate that the code should look at the child class before attempting to execute
  
    // Why do these two versions of getEngineType behave differently?
    cout << " getEngineType1: " << p->getEngineType1() << endl;
// 
//    The first line of code is intended to act like the child class and output the "Nuclear" item however it does not do this
//    This is because the pointer was created from the parent class and even though it has been reasigned to the child class, it will
//    first look in the parent class before continuing. This requirement for the pointer to look in the parent class first is fixed in
//    the second implemeentaiton and demonstrated below
// 
    cout << " getEngineType2: " << p->getEngineType2() << endl;
//    
//    The Second line of code uses a different method which is created differently. The poitnter is forced to look in the parent class
//    first due to how it was cretead but now it sees that this function is a virtual function in the parent class. This means that the
//    code will then attempt to find the child class and use the code there. If the function is not found in the child class, the pointer
//    will then execute the method found in the parent class.
//
}

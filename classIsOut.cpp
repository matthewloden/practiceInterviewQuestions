#include <iostream>
#include <string>
using namespace std;

class carDealship       //the parent function
{
private:
    /* data */
public:
    string carBrand;
    string getCarBrand(){       //both parent and child have the same arguemnts and function call items
        return "Empty String";
    }
};

class childCarDealship: public carDealship      //this child class is created and copies the public information in it's parent
{
public:
    string engineType;      //created a string for the data to be stored in main() below
    string getCarBrand(){
        return engineType;      //returns the engine type of the car
    }
};

int main(){
    carDealship parentCar;      //object initailzed with the parent class
    parentCar.carBrand = "Toyota";
    //parentCar.engineType = "Gasoline";        not possible to access this variable b/c child can look up to parent but not the other way around
    childCarDealship childCar;  //object initalized with the child class 
    childCar.carBrand = "Honda";
    childCar.engineType = "Electric";       //assigned the engine type to electric

    cout<<"Parent Class .getCarBrand(): "<<parentCar.getCarBrand()<<endl;    //prints the parent classes member function which should be "an empty string" 
    cout<<"Child Class .getCarBrand(): "<<childCar.getCarBrand()<<endl;     //prints the child classes member function which should output the engine type
}
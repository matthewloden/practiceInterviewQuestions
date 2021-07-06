#include <iostream>
#include <string>
using namespace std;

class classIsOut
{
private:
    /* data */
    int idNumber;
public:
    classIsOut(int x,string y,bool z,int idnum);
    int roomNumber;
    string courseName;
    bool inSchool;
};

classIsOut::classIsOut(int x,string y,bool z,int idnum){
    roomNumber = x;
    courseName = y;
    inSchool = z;
    idNumber = idnum;
};

//how to change object values??!?


void newSchoolYear(int roomNumber,string courseName,bool inSchool){
    roomNumber = roomNumber % 100;
    courseName = courseName + "101";
    if(inSchool == false){
        inSchool = true;
    }
}

int main(){
    classIsOut Matthew(567,"Math",false,10065);
    classIsOut James(127,"English",true,40123);
    classIsOut Heather(637,"Science",true,30567);
    
    newSchoolYear(Matthew.roomNumber,Matthew.courseName,Matthew.inSchool);
    cout<<Matthew.roomNumber<<"  "<<Matthew.idNumber<<endl;
}
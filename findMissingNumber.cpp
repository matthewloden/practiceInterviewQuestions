#include <iostream>
using namespace std;

int missingNumber(int A[],int N){
    //N is the size of the array without the missing number
    //A is of size N-1
    int missingNum;

    int sum = 0;
    for(int i = 0; i < N-1; i++){
        sum += A[i];
        cout<<"inputArray["<<i<<"]: "<<A[i]<<endl;
    }
    int calculatedSum = 0;
    int newArray[N];
    for(int i = 0; i < N;i++){
        newArray[i] = i+1;
        calculatedSum += newArray[i];
    }
    //cout<<calculatedSum<<endl;
    missingNum = calculatedSum - sum;
    cout<<"The Missing Number is: "<<missingNum<<endl;
    return 0;
}

int main(){
    //constraints:::
    //1 <= N <= 10^6
    //1 <= A[i] <= 1-^6

    int myArray[4] = {1,2,3,5};//N = 5
    int myOtherArray[6] = {1,3,4,5,6,7};//N = 7

    missingNumber(myArray,5);
    missingNumber(myOtherArray,7);
}
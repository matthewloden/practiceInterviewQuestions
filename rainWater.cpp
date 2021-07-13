#include <iostream>
#include <algorithm>
using namespace std;

int findMax(int arr[],int length){
    int myMax = 0;
    for(int i = 0; i < length; i++){
        myMax = max(arr[i],arr[i+1]);
    }
    return myMax;
}

int fallingRain(int arr[],int length){
    //int maximum = findMax(arr,length);
    int right = 0;
    int left = 0;
    right = length;
    for(int i = 0; i < length; i++){
        while(right > left){
            if(arr[left] > i && arr[right] > i){
                cout<<"found walls"<<endl;
                for(int j = left; j < right;j++){
                    if(arr[j] > i && arr[right-j] > i){
                        cout<<"found rainwater!"<<endl;
                    }
                }
                left++;
                right--;        
            }
            else if(arr[left] == i){
                cout<<"incrementing window"<<endl;
                left++;
            }
            else if(arr[right] == i){
                cout<<"decrementing window"<<endl;
                right--;
            }
            else{
                cout<<"failure"<<endl;
            }
            
        }
        
    }
}

int main(){
    int myArray[] = {0,1,0,2,1,0,1,3,2,1,2,1};
    int length = sizeof(myArray) / sizeof(myArray[0]);

    fallingRain(myArray,length);
}
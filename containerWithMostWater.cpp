#include <iostream>

using namespace std;

//expected output, 49units

int min(int a, int b){
    if(a > b){
        return b;
    }
    else{
        return a;
    }
}

int maxArea(int height[],int length){
    int maxArea = 0;
    for(int i = 0; i < length; i++){
        for(int j = 1; j < length;j++){
            if(j - i > 0){
                int minHere = min(height[i],height[j]);
                //cout<<"i: "<<i<<" j: "<<j;
                int distance = j - i;
                //cout<<" Height: "<<height[i]<<" distance: "<<distance<<" minNum: "<<minHere<<" area: "<<minHere*distance<<endl;
                if(minHere*distance > maxArea){
                    maxArea = minHere*distance;
                }
            }
            
        }
    }
    cout<<"The Maximum Area is: "<<maxArea<<endl;
    return maxArea;
}



int main(){
    int height[] = {1,8,6,2,5,4,8,3,7};
    int length = sizeof(height) / sizeof(height[0]);
    int height1[] = {1,1};
    int height2[] = {4,3,2,1,4};
    int height3[] = {1,2,1};
    int length1 = sizeof(height1) / sizeof(height1[0]);
    int length2 = sizeof(height2) / sizeof(height2[0]);
    int length3 = sizeof(height3) / sizeof(height3[0]);
    //cout<<"The maximum Area is: "<<maxArea(height)<<endl;
    maxArea(height,length);
    maxArea(height1,length1);
    maxArea(height2,length2);
    maxArea(height3,length3);
}
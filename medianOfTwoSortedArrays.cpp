#include <iostream>

using namespace std;

int findMedian(int nums1[],int nums2[],int length1, int length2){
    int mergedArray[length1 + length2];
    int i = 0, j = 0, k = 0;
    while( i < length1 && j < length2){
        if(nums1[i] < nums2[j]){
            mergedArray[k]  = nums1[i];
            k++;
            i++;
        }
        else{
            mergedArray[k] = nums2[j];
            k++;
            j++;
        }
    }
    while(i < length1){
        mergedArray[k++] = nums1[i++];
    }
    while(j < length2){
        mergedArray[k++] = nums2[j++];
    }
    int medianNum=0;
    int mid = (length1 + length2) / 2;
    cout<<"MergedArray[]: {";   
    for(int i = 0; i < (length1+length2);i++){
        cout<<mergedArray[i]<<", ";
        if(i == mid){
            medianNum = mergedArray[i];
        }
    }
    cout<<"} the median number is: "<<medianNum<<endl;
}


//input nums1 = [1,3] , nums2 = [2]
//output = 2
int main(){
    int nums1[] = {};
    int nums2[] = {1};
    int length1 = sizeof(nums1) / sizeof(nums1[0]);
    int length2 = sizeof(nums2) / sizeof(nums2[0]);
    

    findMedian(nums1,nums2,length1,length2);
}
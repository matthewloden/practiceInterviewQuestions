#include <iostream>
#include <string>
#include <vector>
using namespace std;

// 
// 
// 
// Given a string s, find the length of the longest substring witout repeating characters
// 
// 0 <= s.length <= 5 * 104
// s consists of English letters, digits, symbols and spaces.
// 
// 
// 

int nonRepeatingSubString(string s){
    int size = s.length();

    vector<int> cursor(128);
    int left = 0;
    int right = 0;

    int result = 0;
    while(right < size){
        char r = s[right];
        cursor[r]++;
        while(cursor[r] > 1){
            char l = s[left];
            cursor[l]--;
            left++;
        }

        result = max(result,right-left+1);

        right++;
    }
    return result;
}



int main(){
    string s = "abcabcabc"; //expected result is 3
    
    cout<<"The longest non-repeating string is of length: "<<nonRepeatingSubString(s);

}
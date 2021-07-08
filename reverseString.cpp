#include <iostream>
#include <string>
using namespace std;

string reverseString(string s){
    int length = s.length();
    string reverse;
    for(int i = length; i > -1;i--){
        reverse += s[i];
    } 
    return reverse;
}


string isPalindrome(string s){
    int length = s.length();
    string reverse = reverseString(s);
    if(s.compare(reverse)){
        return "True!";
    }
    else{
        return "False!";
    }
}

int main(){
    string s = "";
    getline(cin,s);

    cout<<"The reverse of "<<s<<" is "<<reverseString(s)<<endl;
    cout<<"Is the input a Palindrome?? "<<isPalindrome(s)<<endl;
}
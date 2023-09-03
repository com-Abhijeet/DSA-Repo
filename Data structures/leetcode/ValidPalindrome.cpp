/*  LEETCODE 
125. Valid Palindrome

A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, 
it reads the same forward and backward. Alphanumeric characters include letters and numbers.
Given a string s, return true if it is a palindrome, or false otherwise.

Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
Example 2:

Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.
Example 3:

Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.

*/

#include<iostream>
#include<string>
using namespace std;

 char toLowerCase(char ch) { 
     if( (ch >='a' && ch <='z') || (ch >='0' && ch <='9'))
            return ch;
    else{
        char temp = ch -'A' + 'a';
        return temp;
    }
 }

string removeSpecialCharacter(string s){
    for (int i = 0; i < s.size(); i++) {
        if ((s[i] >= 'A' && s[i] <= 'Z' ) || (s[i] >= 'a' && s[i] <= 'z' ) || (s[i] >= '0' && s[i] <= '9' )) {
            
        }
        else{
            s.erase(i, 1);
            i--;
        }
      
    }
    return s;
    
} 
bool isPalindrome(string s) {
    int size = s.size();
    string a = "";
    int st = 0;
    int e = size - 1;
    bool count = true;
    //check valid string
    cout<<"string after removing special char: ";
    a = removeSpecialCharacter(s);
        for(auto i : a){
            cout<<i;
        }
    cout<<endl;
    for(int j=0; j<a.length(); j++) {
        a[j] =  toLowerCase(a[j]);
    }
    cout<<"string after lower case: ";
    for(auto i : a){
        cout<<i;
    }
    cout<<endl;

    for(int i = 0;i<a.size();i++){
        if(a[i] != a[a.size()-i-1]){
            return false;
            }
    }
    return true;
}

int main(){
    string s = "0p";
    cout<<isPalindrome(s);

}
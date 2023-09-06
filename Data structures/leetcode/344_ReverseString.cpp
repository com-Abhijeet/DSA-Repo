/*
344. Reverse String
Write a function that reverses a string. The input string is given as an array of characters s.

You must do this by modifying the input array in-place with O(1) extra memory.

Example 1:

Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]
Example 2:

Input: s = ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]

*/


    #include<iostream>
    #include<vector>
    using namespace std;
    void reverseString(vector<char>& s) {
        int st = 0;
        int e = s.size() - 1;
        while(st<e){
            swap(s[st++] , s[e--]);
        }  
    }
    int main(){
        vector<char> s = {'h','e','l','l','o'};
        reverseString(s);
        for(auto i: s){
            cout<<i<<" ";
        }
        cout<<endl;
        return 0;
    }
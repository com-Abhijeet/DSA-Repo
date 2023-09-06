/*  LEET CODE PREMIUM QUESTION < STAR STUDENT >
Problem Statement:
There are N students in a student meeting. Suppose there is a student who is known to everyone, but he or she doesn't know anyone in the meeting. 
such a student is called the Star Student. 
Find if a Star Student is present in the meeting or not. 
Students' association is represented in the form of 2-D matrix such that if M[i][j] is 1 then it shows that ith student knows j student else 0. 
Print the index of the Star student if exists otherwise print -1. Solve using graph approach.

Sample Input 1:
N=4
M=
0 0 1 0
0 0 1 0
0 0 0 0
0 0 1 0 

output:
Star Student found at 2

Explanation: All 0th, 1st and 3rd students know 2nd student. 
However, 2nd student doesn't know anyone. Therefore, 2nd student is the Star Student.


*/


#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n; //1 - 99
    cout<<"Enter the elements of Array: "<<endl;
    int arr[n][n] ;
    int count = 0 ;
    int star_index ;
    vector<int>in_deg(n , 0);
    vector<int>out_deg(n , 0);
    for(int i = 0; i< n ; i++){
        for(int j = 0 ; j < n ; j++){
        cin>>arr[i][j];
        }
    }

    for(int i = 0; i < n ; i++){
        for(int j = 0; j < n ; j++){
            if(arr[i][j] == 1){
                in_deg[j]++;
                out_deg[i]++;
            }
        }
    }
    
    for(int i = 0; i < n ; i++){
        if(in_deg[i] == n-1 && out_deg[i] == 0){
            count++;
            star_index = i;
        }
        else{

            
        }
    }

    if(count !=0){
        cout<<"Star Student Found At "<<star_index;
    }
    else{
        cout<<"No Star Student Found";
    }



}

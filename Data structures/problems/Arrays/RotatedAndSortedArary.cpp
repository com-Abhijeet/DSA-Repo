/*
Check if the array is sorted and rotated.
Given an array nums, return true if the array was originally sorted in non-decreasing order, then rotated some number of positions (including zero). Otherwise, return false.
There may be duplicates in the original array.
Note: An array A rotated by x positions results in an array B of the same length such that A[1]B[(1+x) A. length], where is the modulo operation.
Example 1:
Input: nuns [3,4,5,1,2]
Output: true
Explanation: [1,2,3,4,5] is the original sorted array.
You can rotate the array by x = 3 positions to begin on the the element of value 3: [3,4,5,1,2).
*/
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>arr = {5 , 6 , 7 , 8 , 1 , 2 , 3 , 4};
    int size = arr.size();
    int count = 0 ;
    for(int i = 1; i<size  ; i++){
        if(arr[i - 1]>arr[i]){
            count++;
        }
    }
    if(arr[size - 1 ] > arr[0]){
        count++;
    }
    if(count <= 1){
        cout<<"true : Array is sorted and rotated";
    }
    else{
        cout<<"false : Array is not sorted and not rotated ";
    }
}
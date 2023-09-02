/*  Rotate Array
Given an array, rotate the array to the right by k steps, where k is non-negative.
Example 1:
Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]
Example 2:
Input: nums = [-1,-108,3,99], k = 2
Output: [3,99,-1,-100]
Explanation:
rotate 1 steps to the right: [99,-1,-100,31
rotate 2 steps to the right: [3,99,-1,-100]Given an array, rotate the array to the right by k steps, where k is non-negative.
*/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {1,2,3,4,5,6,7};
    int k = 3;
    int size = arr.size();

    for(int i = 0; i < k ; i++){
        int temp = arr[size - 1];
        for(int j = size - 1; j > 0 ; j--){
            arr[j] = arr[j - 1];
        }
        arr[0] = temp;
    }

    for(auto i: arr){
        cout<<i<<" ";
    }

}

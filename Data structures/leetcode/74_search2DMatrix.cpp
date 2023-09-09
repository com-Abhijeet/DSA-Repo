/* 74 Search a 2d matrix
You are given an m x n integer matrix matrix with the following two properties:
Each row is sorted in non-decreasing order.
The first integer of each row is greater than the last integer of the previous row.
Given an integer target, return true if target is in matrix or false otherwise.

You must write a solution in O(log(m * n)) time complexity.

Example 1:

Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
Output: true

*/

#include<iostream>
#include<vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    for(int i = 0 ; i<matrix.size() ; i++){
        for(int j = 0; j<matrix[i].size() ; j++){
            if(matrix[i][j] == target){
                return true;
            }
        }
    }
    return false;
}

int main(){
    vector<vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target = 3;
    bool tf = searchMatrix(matrix,target);
    if(tf == 1){
        cout<<"element found"<<endl;
    }
    else{
        cout<<"element not found"<<endl;
    }


}
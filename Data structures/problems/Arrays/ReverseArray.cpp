// Reversing a array after a target element , 
//QUESTION WAS :- 
// Given an array/list 'ARR' of integers and a position 'M'. You have to reverse the array after that position.
// Example:
// We have an array ARR = {1, 2, 3, 4, 5, 6) and MI= 3, considering e based indexing so the subarray (5, 6) will be reversed and our output array will be (1, 2, 3, 4, 6, 5).

#include<iostream>
#include<vector>
using namespace std;

int ReverseArray(vector<int>arr){
    int size = arr.size();
    int s = 0;
    int e = size - 1;

    while(s<e){
        swap(arr[s], arr[e]);
        s++;
        e--;
    }

    cout<<"Reversed Array  is - >";
    for(auto i: arr){
        cout<<i<<" ";
    }
    cout<<endl;
}

int revArrp(vector<int>arr , int target){
     int size = arr.size();
    int s = target;
    int e = size - 1;

    while(s<e){
        swap(arr[s], arr[e]);
        s++;
        e--;
    }

    cout<<"Reversed Array After the target element is - >";
    for(auto i: arr){
        cout<<i<<" ";
    }
    cout<<endl;

}
int main(){
    vector<int> a;
    int n ;
    int target;
    cout<<"Enter the target element -> ";
    cin>>target;
    cout<<"Enter the elements in array -> ";
    while(cin >> n){
        a.push_back(n);
    }
    cout<<"Original Array - >";
    for( auto p:a){
        cout<<p<<" ";
    }
    cout<<endl;

    

    ReverseArray(a);
    revArrp(a ,target);
    
}
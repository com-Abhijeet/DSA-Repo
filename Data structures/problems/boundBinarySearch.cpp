// Question of the code :
// Use of Binary Search to find the bounds of element  in a sorted array. Also find the total number of occurance .
//  Search withing a given array the first occurance of the key and the last occurance of the key . The given array is sorted

#include<iostream>
using namespace std;

int firstOccurance(int arr[], int size, int key){
    int start = 0;
    int end = size - 1 ;
    int mid = (start + (end - start )/2);
    int ans = -1;

    while(start <= end){
        if (arr[mid] == key){
            ans = mid;
            end = mid - 1;
        }
        else if(arr[mid] > key){
            end = mid - 1 ;
        }
        else{
            start = mid + 1; 
        }
        mid = (start + (end - start)/2);

    }

    return ans;

}

int lastOccurance(int arr[], int size, int key){
    int start = 0;
    int end = size - 1 ;
    int mid = (start + (end - start )/2);
    int ans = -1;

    while(start <= end){
        if (arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }
        else if(arr[mid] > key){
            end = mid - 1 ;
        }
        else{
            start = mid + 1; 
        }
        mid = (start + (end - start)/2);

    }

    return ans;

}


int main(){
    int arr[10] = {1 , 5 , 6 , 6 , 6, 6 , 7 , 10 , 15 , 19};
    int key = 6;

    cout<<"First occurance of the key is at index "<<firstOccurance(arr, 10 , key)<<endl;

    cout<<"Last occurance of the key is at index "<<lastOccurance(arr, 10 , key)<<endl;

    //  Also print the total number of occurances of the key in the array . 

    int totalOcc = (lastOccurance(arr , 10 , key) - firstOccurance(arr , 10 , key) )  + 1;   

    cout<<"the total number of times "<<key<<"has occured is "<<totalOcc<<endl;

    return 0;


}

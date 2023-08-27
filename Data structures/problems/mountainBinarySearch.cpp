//  Given that the elements in array are not sorted annd are in a mountian way , ex { 1 , 2, 5 , 3, 2} where in the largest element is the peak of the mountain .
//  We have to find the peak element in the array .

#include<iostream>
using namespace std;

int peakElement(int arr[], int size){
    int start  = 0;
    int end = size - 1;
    int mid = (start + (end - start)/2);

    while(start < end){
        if(arr[mid] < arr[mid + 1]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
        mid = (start + (end - start)/2);

       
    }
     return arr[start];
}

int main(){

    int arr[6] = {1 , 2 , 6 , 2 , 1  };

    cout<<"the peak element of the mountian is :"<<peakElement(arr, 5);

    return 0 ;


}
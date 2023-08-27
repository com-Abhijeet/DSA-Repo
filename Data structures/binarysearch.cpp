#include<iostream>

using namespace std;

int binarysearch(int arr[], int size , int key){

    int start = 0;
    int end = size-1;
    int mid = (start + end)/2;

    // To avaoid int value going out of range for both 2^31 start and end we use , 
    // int mid  =  (start + (end - start) / 2);         it prevents values from going out of range of the int ie 2^31

    while(start <= end){
        
        if(arr[mid] == key){
            return mid;
        }
        //if mid big go to left side 
        else if(arr[mid] > key){
            end = mid - 1;
        }
        //if mid small go to right side
        else {
            start = mid + 1;
        }
        mid = (start + end)/2;
    }

    return - 1;
}



int main(){
    int arrEven[5] = {2 , 4 , 6 , 8 , 10};
    int arrOdd[5] = {1 , 3 , 5 , 7 , 9};

    int keyEven = 4;
    int keyOdd = 3;

    int evenIndex = binarysearch(arrEven,5,keyEven);
    cout<<"Index of the even key is : "<<evenIndex<<endl;
    int oddIndex = binarysearch(arrOdd,5,keyOdd);
    cout<<"index of Oddkey is : "<<oddIndex<<endl;

    return 0;

}
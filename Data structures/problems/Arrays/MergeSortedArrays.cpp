// Merge 2 sorted arrays ;

#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>arr1, vector<int>arr2 , vector<int> arr3){
    int n = arr1.size();
    int m = arr2.size();

    int i = 0, j = 0 ,k = 0;

    while(i<n && j<m){   //Merging the sorted arrays: 
        if(arr1[i]  < arr2[j]){
            arr3.push_back(arr1[i]);
            i++;
            k++;
        }
        else{
            arr3.push_back(arr2[j]);
            j++;
            k++;
        }
    }

    // while one array can be smaller than the other wwe add the remaining element at the last ;
    while(i<n){
        arr3.push_back(arr1[i]);
        i++;
        k++;
    }

    while(j<m){
        arr3.push_back(arr2[j]);
        j++;
        k++;
    }

    cout<<" Merged array of the two sorted arary is : "<<endl;
    for(int o = 0; o<arr3.size(); o++){
        cout<<arr3[o]<<" ";
    }
}
int main(){
    vector<int> arr1 = {1 , 3 , 5 , 7 , 9};
    vector<int> arr2 = {0 , 2 , 4 , 6 };
    vector<int> arr3 ;

    merge(arr1 , arr2 , arr3);
}
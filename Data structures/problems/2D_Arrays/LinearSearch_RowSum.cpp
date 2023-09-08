 #include<iostream>
 using namespace std;

void printArr(int n , int m , int arr[][3]){
    for(int i = 0; i< n ; i++ ){
        for(int j  = 0; j < m ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
 int searchArr(int n , int m , int arr[][3], int target){
    for(int i = 0; i< n; i++){
        for(int j  = 0; j < m ; j++){
            if(arr[i][j] == target){
                return true;
            }
        }
    }
    return false;
 }
 void rowSum(int n , int m , int arr[][3]){
    for(int i = 0; i< n ; i++ ){
        int rsum = 0 ; 
        for(int j  = 0; j < m ; j++){
            rsum += arr[i][j];
        }
        cout<<"Sum of row "<<i<<" is "<<rsum<<endl; 
    }
    
 }
void LargestRowSum(int n , int m , int arr[][3]){
    int max = INT8_MIN;
    for(int i = 0; i< n ; i++ ){
            int rsum = 0 ; 
        for(int j  = 0; j < m ; j++){
            rsum += arr[i][j];
        }
        if(rsum > max){
            max = rsum;
        }
    }
    cout<<"Largest Sum of Row is : "<<max<<endl;
    
}

 int main(){
    int n = 3;
    int m = 3;
    int arr[n][3];
    for(int i = 0; i < n ; i++){
        for (int j = 0 ; j< m ; j++){
            cin>>arr[i][j];
        }
    }
    int target;
    cin>>target;

    bool valid =searchArr(n , m , arr , target);
    if(valid == true ){
        cout<<"element found;"<<endl;
    }
    else{
        cout<<"element not found"<<endl;
    }
    rowSum(n , m , arr);
    LargestRowSum(n , m ,arr);

 }
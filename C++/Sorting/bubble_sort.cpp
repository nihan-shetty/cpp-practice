#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        bool isSwap = false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j+1]<arr[j]){
                swap(arr[j],arr[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap){
            return;
        }
    }
    return;
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return;
}

int main(){
    int n;
    cout<<"Enter the number of elements : ";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    bubbleSort(arr,n);
    printArray(arr,n);

    return 0;
}
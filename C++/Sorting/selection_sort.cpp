#include<iostream>
#include<climits>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        int smallest=i;
        for(int j=i+1;j<n;j++){
            if(arr[smallest] > arr[j]){
                smallest = j;
            }
        }
        swap(arr[smallest],arr[i]);
    }
    return;
}

void printArray(int arr[], int n){
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

    selectionSort(arr,n);
    printArray(arr,n);

    return 0;
}
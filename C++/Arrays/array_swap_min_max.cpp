#include<iostream>
using namespace std;

int largest(int arr[],int n){
    int maximum = 0;
    for(int i=0;i<n;i++){
        if(arr[i]>maximum){
            maximum = i;
        }
    }
    return maximum;
}

int smallest(int arr[],int n){
    int minimum = 0;
    for(int i=0;i<n;i++){
        if(arr[i]<minimum){
            minimum = i;
        }
    }
    return minimum;
}

int main(){
    int n;
    cout<<"Enter the size of array :";
    cin>>n;

    int arr[n];

    cout<<"Enter teh eements :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int Largest = largest(arr,n);
    int Smallest = smallest(arr,n);

    swap(arr[Largest],arr[Smallest]);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}
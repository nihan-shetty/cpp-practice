#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"We are printing all possible subarray"<<endl;
    
    for(int st=0;st<n;st++){
        for(int end=st;end<n;end++){
            for(int i=st;i<=end;i++){
                cout<<arr[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}
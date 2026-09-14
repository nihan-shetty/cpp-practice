#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int target;
    cout<<"Enter the target :"<<endl;
    cin>>target;

    bool found = false;

    for(int i=0;i<n;i++){
        if(arr[i] == target){
            found = true;
            break;
        }
    }

    if(found){
        cout<<"Target is Found"<<endl;
    }else{
        cout<<"Target is Not Found"<<endl;
    }

    return 0;
}
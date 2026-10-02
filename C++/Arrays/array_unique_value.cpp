#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the siz eof array :";
    cin>>n;

    int arr[n];

    cout<<"Enter the elements :"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int i=0;
    int j=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(arr[i] == arr[j] && i!=j){
                break;
            }
        }
        if(j>=n){
            cout<<arr[i]<<endl;
        }
    }

    return 0;
}
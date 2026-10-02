#include<iostream>
using namespace std;

int main(){
    int m,n;
    cout<<"Enter the size of two arrays :";
    cin>>m>>n;

    int arr1[m];
    int arr2[n];
    
    cout<<"Enter the elements for array 1 only "<<m<<" elements : ";
    for(int i=0;i<m;i++){
        cin>>arr1[i];
    }

    cout<<"Enter the elements for array 2 only "<<n<<" elements : ";
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }

    cout<<"The common elements between two arrays are : ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr1[i] == arr2[j]){
                cout<<arr1[i]<<" ";
                break;
            }
        }
    }
    cout<<endl;

    return 0;
}
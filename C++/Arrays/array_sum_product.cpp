#include<iostream>
using namespace std;

int Product(int arr[],int n){
    int product = 1;
    for(int i=0;i<n;i++){
        product*=arr[i];
    }
    return product;
}

int Sum(int arr[],int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){
    int n;
    cout<<"Enter the size of the array :";
    cin>>n;

    int arr[n];
    
    cout<<"Enter the elements :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

   cout<<Product(arr,n)<<endl;
   cout<<Sum(arr,n)<<endl;

   return 0;
}
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,k;
    cout<<"Enter size of numbers : "<<endl;
    cin>>n;
    cout<<"Enter hoe many numbers to shift : "<<endl;
    cin>>k;

    vector<int> numbers(n);

    for(int i=0;i<n;i++){
        cin>>numbers[i];
    }

    cout<<"Original Vector : ";

    for(int i=0;i<n;i++){
        cout<<numbers[i]<<" ";
    }

    for(int i=0;i<k;i++){
        int temp = numbers[n-1];
        for(int j=n-1;j>0;j--){
            numbers[j] = numbers[j-1];
        }
        numbers[0] = temp;
    }

    cout<<"Rotated Vector : ";

    for(int i=0;i<n;i++){
        cout<<numbers[i]<<" ";
    }

    return 0;
}
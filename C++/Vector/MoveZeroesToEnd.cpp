#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of numbers : ";
    cin>>n;

    vector<int> numbers(n);

    for(int i=0;i<n;i++){
        cin>>numbers[i];
    }

    cout<<"Original Vector : ";
    
    for(int i=0;i<n;i++){
        cout<<numbers[i]<<" ";
    }

    int j=0;
    for(int i=0;i<n;i++){
        if(numbers[i] != 0){
            numbers[j] = numbers[i];
            if(i!=j){
                numbers[i] = 0;
            }
            j++;
        }
    }

    cout<<"Modified Vector : ";

    for(int i=0;i<n;i++){
        cout<<numbers[i]<<" ";
    }

    return 0;
}
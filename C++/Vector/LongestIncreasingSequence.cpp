#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of numbers : ";
    cin>>n;

    vector<int> numbers(n);

    for(int i=0;i<n;i++){
        cin>>numbers[i];
    }

    int max = INT_MIN;

    int count = 1;

    for(int i=1;i<n;i++){
        if(numbers[i] > numbers[i-1]){
            count++;
        }else{
            if(count > max){
                max = count;
            }
            count = 1;
        }
    }

    if(count > max){
        max = count;
    }

    cout<<"Longest increasing consecutive sequence length : "<<max<<endl;

    return 0;
}
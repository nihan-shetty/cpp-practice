#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cout<<"Enter teh siz eof array :";
    cin>>n;

    int arr[n];
    
    cout<<"Enter the elements :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int smallest =INT_MAX;
    int largest =INT_MIN;
    int smallest_index = 0;
    int largest_index = 0;

    for(int i=0;i<n;i++){
        if(arr[i]<smallest){
            smallest = arr[i];
            smallest_index = i;
        }
        if(arr[i]>largest){
            largest = arr[i];
            largest_index = i;
        }
    }

    cout<<"smallest index"<<smallest_index<<endl;
    cout<<"largest index"<<largest_index<<endl;

    return 0;
}               
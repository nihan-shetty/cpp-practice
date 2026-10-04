#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cout<<"Enter the siz eof array : ";
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int maxSum=INT_MIN;

    for(int i=0;i<n;i++){
        int currSum=0;
        for(int j=i;j<n;j++){
            currSum+=arr[j];
            maxSum = max(currSum,maxSum);
        }
    }

    cout<<"Maximum sum of a subarray : "<<maxSum<<endl;

    return 0;
}
#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<int>& nums,int n){
    int i=0;
    int j=n-1;
    while(i<j){
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
        i++;
        j--;
    }

    return;
}

int main(){
    int n;
    cout<<"Enter the size of vector : ";
    cin>>n;

    vector<int> nums(n);

    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    rotate(nums,n);

    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;

    return 0;
}
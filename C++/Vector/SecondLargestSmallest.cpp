#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of numbers : ";
    cin>>n;
    vector<int> numbers(n);

    for(int i=0;i<n;i++){
        cin>>numbers[i];
    }

    int Largest = INT_MIN;
    int SecLargest = INT_MIN;
    int Smallest = INT_MAX;
    int SecSmallest = INT_MAX;

    for(int i=0;i<n;i++){
        if(numbers[i] > Largest){
            SecLargest = Largest;
            Largest = numbers[i];
        }
        if(numbers[i] < Smallest){
            SecSmallest = Smallest;
            Smallest = numbers[i];
        }
        else if(numbers[i] < Largest && numbers[i] > SecLargest){
            SecLargest = numbers[i];
        }
        else if(numbers[i] > Smallest && numbers[i] < SecSmallest){
            SecSmallest = numbers[i];
        }
    }

    cout<<"Largest : "<<Largest<<endl;
    cout<<"Second Largest : "<<SecLargest<<endl;
    cout<<"Smallest : "<<Smallest<<endl;
    cout<<"Second Smallest : "<<SecSmallest<<endl;

    return 0;
}
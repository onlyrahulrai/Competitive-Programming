#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    int nums[] = {1,2,3,4,5,6,7};
    int n = sizeof(nums)/sizeof(nums[0]);
    int first,second;

    if(n<2){
        cout<<"Invalid Input!";
    }else{
        first = second = INT_MIN;

        for(int i=0;i<n;i++){
            if(nums[i]>first){
                second=first;
                first=nums[i];
            }else if(nums[i] > second && nums[i] < first){
                second=nums[i];
            }
        }

        if(second == INT_MIN){
            cout<<"No second largest element! ";
        }else{
            cout<<"\nThe second largest element is: "<<second<<endl;
        }
    }


    return 0;
}
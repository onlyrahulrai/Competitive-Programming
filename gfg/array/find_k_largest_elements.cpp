#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void kLargest(int nums[],int n,int k){
    sort(nums,nums+n,greater<int>());

    cout<<"\nLargest "<<k<<" Elements: ";
    for(int i=0;i<k;i++){
        cout<<nums[i]<<" ";
    }
}

int main(){
    int nums[] = {1,2,3,4,5,6,7,8,9};
    int n=sizeof(nums)/sizeof(nums[0]);
    int k=4;

    cout<<"Original array: ";
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }

    kLargest(nums,n,k);

    return 0;
}
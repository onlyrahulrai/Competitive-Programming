#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int mostFrequent(int nums[],int n){
    sort(nums,nums+n);

    int max_count = 1,res=nums[0],curr_count=1;

    for(int i=1;i<n;i++){
        if(nums[i] == nums[i-1]){
            curr_count++;
        }else{
            if(curr_count > max_count){
                max_count = curr_count;
                res = nums[i-1];
            }
            curr_count = 1;
        }
    }

    if(curr_count > max_count){
        max_count = curr_count;
        res = nums[n-1];
    }

    return res;
}


int main(){
    int nums[] = {1,2,3,4,4,8,5,6,7,8,8,8};
    int n = sizeof(nums)/sizeof(nums[0]);

    cout<<"Original Array: ";
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }

    cout<<"\n"<<mostFrequent(nums,n)<<endl;

    return 0;
}

/*

// Method 1

void most_occured_count(int nums[],int n){
    int max_count = 0;
    cout << "\nMost occurred number: ";
    for (int i=0; i<n; i++){
        int count=0;
        for (int j=i+1;j<n;j++)
            if (nums[i]==nums[j])
                count++;
        if (count>max_count)
            max_count = count;
    }

    for (int i=0;i<n;i++)
    {
    int count=0;
    for (int j=i+1;j<n;j++)
        if (nums[i]==nums[j])
            count++;
    if (count==max_count)
        cout << nums[i] << " ";
    }
}

int main(){
    int nums[] = {1,2,3,4,5,6,7,8,1,3,4};
    int n = sizeof(nums)/sizeof(nums[0]);

    cout<<"Original Array: ";
    for (int i=0;i<n;i++)
    {
        cout<<nums[i]<<" ";
    }
    
    most_occured_count(nums,n);

    return 0;
}

*/
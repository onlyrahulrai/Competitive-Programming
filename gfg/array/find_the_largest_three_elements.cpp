#include<bits/stdc++.h>
#include<iostream>
using namespace std;


/*

// Method 3

int main(){
    vector<int> nums = {11,65,193,36,209,664,32};
    sort(nums.begin(),nums.end());
    int n = nums.size();

    reverse(nums.begin(),nums.end());

    for(int i=0;i<3;i++){
        cout<<nums[i]<<" ";
    }

    return 0;
}

*/

/* 

// Method 2

int main(){
    int nums[] = {7,12,9,15,19,32,56,70};
    int n = sizeof(nums)/sizeof(nums[0]);

    sort(nums,nums+n);

    int check = 0,count = 1;

    for (int i=1;i<=n;i++)
    {
        if(count<4){
            if(check != nums[n-i]){
                cout<<nums[n-i]<<" ";
                check = nums[n-i];
                count++;
            }
        }else{
            break;
        }    
    }

    return 0;
}
*/


/*

// Method 1

void three_largest(int nums[],int n){
    int i,first,second,third;

    if(n < 3){
        cout<<" Invalid Input: ";
    }

    third = first = second = INT_MIN;

    for (i=0;i<n;i++)
    {
        if(nums[i] > first){
            third=second;
            second=first;
            first=nums[i];
        }else if(nums[i] > second){
            third=second;
            second=nums[i];
        }else{
            third=nums[i];
        }
    }
    
    cout<<"\nThree largest elements are: "<<first<<" "<<second<<" "<<third;
}

int main(){
    int nums[] = {7,12,9,15,19,32,56,70};
    int n = sizeof(nums)/sizeof(nums[0]);

    cout<<"Original Array: ";
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }

    three_largest(nums,n);

    return 0;
}*/
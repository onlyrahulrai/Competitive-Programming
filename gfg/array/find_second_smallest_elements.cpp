#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    int nums[] = {1,2,3,4,5,6,7};
    int n = sizeof(nums)/sizeof(nums[0]);
    int first,second;
    vector<int> v;
    first=second=INT_MAX;

    if(n<2){
        cout<<"Invalid Input! ";
    }else{
        for(int i=0;i<n;i++){
            if(nums[i] < first){
                second=first;
                first=nums[i];
            }else if(nums[i]<second && nums[i] != first){
                second=nums[i];
            }
        }

        
        if(second == INT_MAX || first == INT_MAX){
            cout<<"Invalid Input!";
        }else{
            v.push_back(first);
            v.push_back(second);

            cout<<v[0]<<" "<<v[1]<<endl;
        }
        
    }


    return 0;
}

/*

// Method 1

int main(){
    int nums[] = {1,2,3,4,5,6,7};
    int n = sizeof(nums)/sizeof(nums[0]);

    int first,second;
    first=second=INT_MAX;

    if(n < 2){
        cout<<"Invalid Input!";
    }else{
        for(int i=0;i<n;i++){
            if(nums[i] < first){
                second = first;
                first=nums[i];
            }else if(nums[i] < second && nums[i] > first){
                second=nums[i];
            }
        }

        if(second == INT_MAX){
            cout<<"\nSecond largest not fount!";
        }else{
            cout<<"\nSecond largest is: "<<second<<endl;
        }
    }

    return 0;
}

*/
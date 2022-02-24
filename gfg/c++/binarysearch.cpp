#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    int n=5;

    int s=0,e=n-1,mid=s+(e-s)/2;
    int k = 3;

    int target=0;

    while (s<=e)
    {
        if(arr[mid]==k){
            target = mid;
            break;
        }else if(arr[mid]<k){
            s=mid+1;
        }else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    
    if(target){
        cout<<"element exists ";
    }else{
        cout<<"element not exists ";
    }

    return 0;
}
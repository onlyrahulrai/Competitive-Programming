#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {5, 6, 7, 8};
    int n=4,m=4,sum=10;

    int low = 0,high=n-1,count = 0;

    while (low < m && high >= 0){
        if(arr1[low] + arr2[high] == sum){
            low++,high--;
            count++;
        }else if((arr1[low] + arr2[high]) < sum){
            low++;
        }else if((arr1[low] + arr2[high]) > sum){
            high--;
        }
    }

    cout<<count<<endl;

    return 0;    
}
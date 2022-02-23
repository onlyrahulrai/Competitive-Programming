#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool findTriplets(int arr[],int n){
    sort(arr,arr+n);
    for(int i=0;i<n-1;i++){
        int l=i+1,h=n-1;
        while (l<h)
        {
            int sum = arr[i]+arr[l]+arr[h];
            if(sum == 0) return 1;
            else if(sum < 0) l++;
            else h--;
        }
    }

    return 0;
}

int main(){
    int n;
    cout<<"Enter the length of array: ";
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Triplets of: "<<findTriplets(arr,n)<<endl;
}
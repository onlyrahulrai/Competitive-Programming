#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int arr[] = { 18, 20, 19, 2 ,1 ,19, 11, 6, 12, 16, 8, 1, 1, 8, 20, 1, 6, 7, 9};
    int length = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+length,greater<int>());

    cout<<arr[2]<<endl;

    return 0;
}


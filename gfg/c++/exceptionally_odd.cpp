#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 2, 3, 1, 3};
    int res = 0;

    for(int i=0;i<7;i++){
        res ^= arr[i];
    }

    cout<<res<<endl;

    return 0;
}
#include<bits/stdc++.h>
#include<iostream>
using namespace std;


// Method 1
// int main(){
//     int arr[] = {1,2,3,4,5,6,7};
//     int n = 7;

//     int max = INT_MIN;

//     for(int i=0;i<n;i++){
//         if(arr[i] > max){
//             max = arr[i];
//         }
//     }

//     cout<<max<<endl;

//     return 0;
// }


// Method 2

int find_largest(int nums[],int n){
    return *max_element(nums,nums+n);
}

int main(){
    int nums[] = {1,2,3,4,5,6,7};
    int n = 7;

    cout<<"Original array: ";

    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }

    cout<<"\nLargest element of the said array: "<<find_largest(nums,n);


    return 0;
}

#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){
    int arr1[] = {1,2,5,4,0,3};
    int arr2[] = {2,4,5,0,1};

    int length1 = sizeof(arr1)/sizeof(arr1[0]);
    int length2 = sizeof(arr2)/sizeof(arr2[0]);
    sort(arr1,arr1+length1);
    sort(arr2,arr2+length2);
    

    bool equal = true;
    for(int i=0;i<length1;i++){
        if(arr1[i] != arr2[i]){
            equal = false;
        } 
    }

    if(equal){
        cout<<"equal "<<endl;
    }else{
        cout<<"not equal "<<endl;
    }

    return 0;
}
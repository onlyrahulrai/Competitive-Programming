#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }


    for(int i=0;i<n;i++){
        for (int j=i+1; i<n;j++)
        {
            if(arr[i] > arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }else{
                break;
            }
        }
    }

    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }

    return 0;
}
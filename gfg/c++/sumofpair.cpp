#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum = 0;
    int j = n;
    for(int i=1;i<=n;i++){
        sum += (i*j);
        j--;
    }

    cout<<sum;

    return 0;
}
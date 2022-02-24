#include<bits/stdc++.h>
#include<iostream>
using namespace std;

vector<int> primeDivision(int N){
    vector<bool>sieve(N,true);

    sieve[0];
    sieve[1];

    for (int i=2;i*i<N;i++)
    {
        if(sieve[i]){
            for (int multiple=i*i;multiple<N;multiple+=i)
            {
                sieve[multiple] = false;
            } 
        }
    }

    for(int i=2;i<N;i++){
        if(sieve[i] && sieve[N-i])return {i,N-i};
    }
    return {};
}


int main(){
    int n;
    cout<<"Enter the length: ";
    cin>>n;

    vector<int> prime = primeDivision(n);
    cout<<prime[0]<<" "<<prime[1]<<endl;

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;

    cin>>a>>b;

    while(b){
        int temp=a&b;
        a=a^b;
        b=temp<<1;
    }

    cout<<a<<endl;

    return 0;
}
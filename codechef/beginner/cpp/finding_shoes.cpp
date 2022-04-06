#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t){
        int n,m;
        cin>>n>>m;
        cout<<(n<=m ? n: n*2-m)<<endl;
        t-=1;
    }
    return 0;
}
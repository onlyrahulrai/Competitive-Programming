#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t){
        int x,y;
        cin>>x>>y;
        cout<<abs(y-x)<<endl;
        t-=1;
    }

    return 0;
}
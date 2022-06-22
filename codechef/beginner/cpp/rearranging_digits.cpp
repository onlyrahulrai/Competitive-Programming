#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--){
        int d;
        cin>>d;
        string str;
        cin>>str;
        bool flag = false;
        for(int i=0;i<str.length();i++){
            if (str[i] == '0' || str[i] == '5'){
                flag = true;
            }
        }

        if (flag){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
    

    return 0;
}
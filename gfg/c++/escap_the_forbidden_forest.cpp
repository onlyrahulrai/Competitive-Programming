#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    string str1="*@#*",str2="*#";
    int dp[101][101];

    int x=str1.length(),y=str2.length();

    for (int i=0;i<=x;i++)
    {
        for(int j=0;j<=y;j++){
            if(i==0 || j==0){
                dp[i][j]=0;
            }else if(str1[1-1] == str2[j-1]){
                dp[i][j] = 1 + dp[i-1][j-1];
            }else{
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }

    for (int i=0;i<=x;i++)
    {
        for (int j=0;j<=y;j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
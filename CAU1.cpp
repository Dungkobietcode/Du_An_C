#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("CAU01.INP","r",stdin);
    freopen("CAU01.OUT","w",stdout);
    int n;
    cin>>n;
    if(n<0){
        cout<<"Invalid";
    }else if(n%400==0 || n%4==0 && n%100!=0){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
    return 0;
}

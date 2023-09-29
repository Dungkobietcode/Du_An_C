#include <bits/stdc++.h>

using namespace std;
int main(){
    int n,c=0;
    cin >>n;
    if (n<2){
        cout<<"0";
    }else{
    for (int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            c++;
        }
    }
        if(c==0){
            cout<<"1";
            exit(0);
        }        
    }
    cout<<"0";
    return 0;
}
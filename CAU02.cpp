#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("CAU02.INP","r",stdin);
    freopen("CAU02.OUT","w",stdout);
    int n;
    cin>>n;
    int d;
    for(int i=2;i<=n;i++){
        d=0;
        while(n%i==0){
            d++;
            n/=i;
        }
        if(d){
            cout<<i;
            if(d>1){
                cout<<"^"<<d;
            }
            if(n>i){
                cout<<".";
            }
        }
    }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,c=0;
    cin >>n;
    if(n<2){
        cout<<"Day Ko Phai So Nguyen To Xin Nhap Lai"<<"\n";
        cin>>n;
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)
            c++;
    }
    if(c==0){
        cout<<"n la so nguyen to";
    }else{
        cout<<"n ko phai la so nguyen to";
    }
    return 0;
}
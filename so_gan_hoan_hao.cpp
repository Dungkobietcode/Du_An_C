#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n;
    for (int i=1;i<=n;i++){
        if (n%i==0){
            k+=i;
        }
    }
    if(2*n <= k){
        cout<<n<<endl;
    }
        else{
        cout<<"0";
        }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007

void solve(){
    bool flag=1;
    while(flag){
     int a,b;
     cout<<"ENTER THE BOTH NUMBERS:";
     cin>>a>>b;
     char c;
     cout<<"ENTER THE OPERATION :";
     cin>>c;
     if(c=='+'){
        cout<<a+b<<endl;
     }
     else if(c=='-'){
        cout<<a-b<<endl;
     }
     else if(c=='*')cout<<a*b<<endl;
     else{
        if(b==0)cout<<"NOT POSSIBLE"<<endl;
        else cout<<a/b<<endl;
     }
     cout<<"WANNA USE THE CALCULATOR AGAIN PRESS 1 ELSE PRESS 0:";
     cin>>flag;
    }
}
int main()
{ 
   int t=1;
   while(t--){
    solve();
    }
    return 0;
}
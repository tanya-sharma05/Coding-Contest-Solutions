// You want to make a binary string S of length N. You will be paid according to the following rules:
// For each occurrence of the subsequence 0 in S, you are paid A coins.
// For each occurrence of the subsequence 1 in S, you are paid B coins.
// For each occurrence of the subsequence 01 in S, you are paid C coins.
// For each occurrence of the subsequence 10 in S, you are paid D coins.
// You want to maximize the number of coins you get. Find this maximum value.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b,c,d;
        cin>>n>>a>>b>>c>>d;
        
        int ans=0;
        for(int c0=0;c0<=n;c0++){
            int c1=n-c0;
            
            int a1=c0*a+c1*b+c0*c1*c;
            int a2=c0*a+c1*b+c0*c1*d;
            
            ans=max({ans,a1,a2});
        }
        cout<<ans<<endl;
    }
    
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        
        int first=0,last=0;
        for(int i=0;i<n;i++){
            if(a[i]==1){
                first=i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(a[i]==1){
                last=i;
                break;
            }
        }
        
        if(last-first+1<=x) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}

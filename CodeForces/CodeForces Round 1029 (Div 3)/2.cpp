#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        for(int i=1;i<n;i++){
            if(i%2==0) cout<<i<<" ";
        }
        cout<<n<<" ";
        for(int i=n-1;i>=1;i--){
            if(i%2!=0) cout<<i<<" ";
        }
        
        cout<<endl;
    }
    
    return 0;
}

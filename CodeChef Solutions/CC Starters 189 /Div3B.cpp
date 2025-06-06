// There are N different food items, each providing an essential vitamin Ai and costing Bi. There is an integer parameter 
// C which represents the value of a single vitamin to you. You will buy some of the food items to maximize CX-Y
// , where X represents the number of distinct vitamins eaten, and Y represents the total cost of all the food items. 
// Find this maximum possible value. It is also possible to buy no food item at all, in which case the answer is simply 0.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,c;
        cin>>n>>c;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        
        unordered_map<int,int> mp; //vit:cost 
        for(int i=0;i<n;i++){
            int vit=a[i];
            int cost=b[i];
            
            if(mp.find(vit)==mp.end() || cost<mp[vit]) mp[vit]=cost;
        }
       
        vector<int> costs;
        for(auto i:mp) costs.push_back(i.second);
       
        sort(costs.begin(),costs.end());
        
        int x=0,y=0,ans=0;
        for(int i=0;i<costs.size();i++){
            x=i+1;
            y+=costs[i];
            ans=max(ans,c*x-y);
        }
        cout<<ans<<endl;
    }
    
    return 0;
}

// There are N different food items, each providing an essential vitamin Ai and costing Bi. There is an integer parameter 
// C which represents the value of a single vitamin to you. You will buy some of the food items to maximize CX-Y
// , where X represents the number of distinct vitamins eaten, and Y represents the total cost of all the food items. 
// Find this maximum possible value. It is also possible to buy no food item at all, in which case the answer is simply 0.

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,c;
	    cin>>n>>c;
	    vector<int> a(n);
	    for(int i=0;i<n;i++) cin>>a[i];
	    vector<int> b(n);
	    for(int i=0;i<n;i++) cin>>b[i];
	    
	    unordered_map<int,int> mp; // vitamin:cost 
	    for(int i=0;i<n;i++){
	        int vitamin=a[i];
	        int cost=b[i];
	        if(!mp.count(vitamin)||cost<mp[vitamin]) mp[vitamin]=cost;
	    }
	    
	    vector<int> cost;
	    for(auto i:mp) cost.push_back(i.second);
	    
	    sort(cost.begin(),cost.end());
	    int y=0,x=0,maxi=0;
	    for(int i=0;i<cost.size();i++){
	        y+=cost[i];
	        x=i+1;
	        maxi=max(maxi,c*x-y);
	    }
	    cout<<maxi<<endl;
	}
	return 0;
}

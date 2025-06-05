// You are given an array A of N elements and you should find the length of the shortest possible good subarray of A.
//  If no good subarray exists, print -1. 

#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &a){
    int n=a.size();
    int left=0,right=0;
    int mini=INT_MAX;
    unordered_map<int,int> mp;
    while(right<n){
        mp[a[right]]++;
        
        while(mp.size()>2){
            mp[a[left]]--;
            if(mp[a[left]]==0) mp.erase(a[left]);
            left++;
        }
        
        while(mp.size()==2){
            mini=min(mini,right-left+1);
            mp[a[left]]--;
            if(mp[a[left]]==0) mp.erase(a[left]);
            left++;
        }
        right++;
    }
    return (mini==INT_MAX)?-1:mini;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> a(n); 
	    for(int i=0;i<n;i++) cin>>a[i];
	    
	    cout<<solve(a)<<endl;
	}
	return 0;
}


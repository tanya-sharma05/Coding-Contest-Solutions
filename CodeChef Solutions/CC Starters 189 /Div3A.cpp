// You are given an array A of N elements and you should find the length of the shortest possible good subarray of A.
//  If no good subarray exists, print -1. (An array is called good if it has exactly 2 distinct elements.) 

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> a(n); 
	    set<int> s;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        s.insert(a[i]);
	    }
	    if(s.size()>=2) cout<<2<<endl;
	    else cout<<-1<<endl;
	}
	return 0;
}

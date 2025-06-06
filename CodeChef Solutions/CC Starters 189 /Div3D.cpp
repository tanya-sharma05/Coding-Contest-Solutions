// You are given an array A of length N.
// The interesting value of a subarray is defined as the product of the maximum and minimum elements of the subarray.
// Find the minimum and maximum interesting value over all subarrays for the given array.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        
        sort(a.begin(),a.end());
        long long a1=a[0]*a[0];
        long long a2=a[n-1]*a[n-1];
        long long a3=a[0]*a[n-1];
        
        cout<<min({a1,a2,a3})<<" "<<max({a1,a2,a3})<<endl;
    }
    
    return 0;
}

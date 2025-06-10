class Solution {
public:
    int maxSumDistinctTriplet(vector<int>& x, vector<int>& y) {
        vector<pair<int,int>> v;
        for(int i=0;i<y.size();i++){
            v.push_back({y[i],i});
        }
        sort(v.rbegin(),v.rend());
        stack<pair<int,int>> s;
        for(int i=v.size()-1;i>=0;i--){
            s.push(v[i]);
        }
    
        int res=0;
        set<int> st;
        for(int i=0;i<x.size();i++){
            st.insert(x[i]);
        }
        if(st.size()<=2) return -1;
        else{
            vector<int> p;
            while(!s.empty() && p.size()!=3){
                int ele=s.top().first;
                int idx=s.top().second;
    
                if(res==0){
                    res+=y[idx];
                    p.push_back(x[idx]);
                }
                else if(res!=0 && find(p.begin(),p.end(),x[idx])==p.end()){
                    res+=y[idx];
                    p.push_back(x[idx]);
                }
    
                s.pop();
            }
        }
        return res;
    }
};

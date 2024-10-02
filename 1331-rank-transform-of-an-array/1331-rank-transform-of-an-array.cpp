class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& a) {
        int n = a.size();
            if(n== 0)
                    return {};
            set<int> s(a.begin(),a.end());
            
            map<int,int> mp;
            int r =1;
            for(auto val : s)
            {
                    mp[val] = r;
                    r++;
            }
            vector<int> ans;
            
            for(auto val : a)
            {
                  ans.push_back(mp[val]);  
            }
            return ans;
    }
};
class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        vector<int> mp(k,0);
            
            for(auto num : arr)
            {
                    int rem = (num%k +k ) % k; // handle native value
                    mp[rem]++;
            }
            
            if(mp[0] % 2 != 0)
                    return false;
            
            for(int i =1;i<=k/2;i++)
            {
                    int count = k- i;
                    if(mp[count] != mp[i])
                            return false;
            }
            return true;
    }
};
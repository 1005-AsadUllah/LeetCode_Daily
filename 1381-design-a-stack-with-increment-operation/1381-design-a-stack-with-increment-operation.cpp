class CustomStack {
public:
        vector<int> v;
        int n=0;
    CustomStack(int maxSize) {
        n = maxSize;
    }
    
    void push(int x) {
        if(n > v.size())
        {
                v.push_back(x);
        }
    }
    
    int pop() {
        if(!v.empty())
        {
                int k = v.back();
                v.pop_back();
                return k;
        }
            return -1;
    }
    
    void increment(int k, int val) {
            int m=min(k,static_cast<int>(v.size()));
        for(int i =0;i<m;i++)
        {
                v[i] += val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */
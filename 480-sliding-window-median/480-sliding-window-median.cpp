class Solution {
  private:
    multiset<double>MinH, MaxH;
    vector<double> ans;
    
    public:  
    void balance()
    {
         if(MaxH.size() > MinH.size() + 1)
            {
                MinH.insert(*MaxH.rbegin());
                MaxH.erase(MaxH.find(*MaxH.rbegin()));
            }
            else if(MaxH.size() + 1 < MinH.size())
            {
                MaxH.insert(*MinH.begin());
                MinH.erase(MinH.find(*MinH.begin()));
            }
    }
    
    void addNum(double n)
    {
        
        if(MaxH.size()==0)
            MaxH.insert(n);
        else
        {
            if(n < *MaxH.rbegin())
                MaxH.insert(n);
            else
                MinH.insert(n);
            
            balance();
        }    
    }
    
    void addAns()
    {
        if(MaxH.size() == MinH.size())
            ans.push_back((*MaxH.rbegin() + *MinH.begin())/2);
        else
        {
            if(MaxH.size() > MinH.size())
                ans.push_back(*MaxH.rbegin());
            else
                ans.push_back(*MinH.begin());
        }
    }
    
    void slideWindow(double n)
    {
        if(MaxH.size() and MaxH.find(n) != MaxH.end())
            MaxH.erase(MaxH.find(n));
        else
            MinH.erase(MinH.find(n));
        
        balance();
    }
    
    vector<double> medianSlidingWindow(vector<int>& nums, int k) {
        
        for(int i=0; i<nums.size(); i++)
        {
            addNum(nums[i]*1.0);
            if(i + 1 >= k)
            {
                addAns();
                slideWindow(nums[i-k+1]*1.0);
            }
        }
        return ans;
    }
};
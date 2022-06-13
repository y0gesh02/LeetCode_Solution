class MyHashSet {
public:
    
    vector<int>ans;
    int n;
    MyHashSet() {
        n=1e6+1; 
        ans.resize(n);
    }
    
    void add(int key) {
        if(ans[key]) return;
        ans[key]=1;
    }
    
    void remove(int key) {
         if(!ans[key]) return;
          ans[key]=0;
    }
    
    bool contains(int key) {
        
        return ans[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
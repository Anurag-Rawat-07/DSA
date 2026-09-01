class MyHashSet {
public:
    vector<bool> S;
    MyHashSet() {
        S.resize(1000001, false);
    }
    
    void add(int key) {
        S[key]=true;
    }
    
    void remove(int key) {
        S[key]=false;
        
    }
    
    bool contains(int key) {
        return S[key];
        
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
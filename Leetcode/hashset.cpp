//NORMAL SOLUTION TLE
class MyHashSet {
public:
    /** Initialize your data structure here. */
    vector<int> v;
    MyHashSet() {
        
    }
    
    void add(int key) {
       if(!contains(key)){
            v.push_back(key);
        }
    }
    
    void remove(int key) {
        if(contains(key)){
            v.erase(find(v.begin(), v.end(), key));
        }
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        return find(v.begin(), v.end(), key)!=v.end();
    }
};


//OPTIMAL SOLUTION
class MyHashSet {
public:
    /** Initialize your data structure here. */
    MyHashSet() {
        
        v.resize(1000000,0);
    }
    
    void add(int key) {
       v[key]=1;
    }
    
    void remove(int key) {
        v[key]=0;
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        return v[key]==1;
    }
private:
    vector<int>v;
    
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
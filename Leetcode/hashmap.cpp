class MyHashMap {
public:
    map<int,int>m;
    /** Initialize your data structure here. */
    MyHashMap() {
        
    }
    
    /** value will always be non-negative. */
    void put(int key, int value) {
        map<int,int>:: iterator itr;
        itr = m.find(key);
        if(itr != m.end()){
            remove(itr->first);
            //cout<<itr->first<<" "<<itr->second;
            m[key] = value;
        }
        else
            m.insert({key,value});
        
    }
    
    /** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
    int get(int key) {
        
        map<int,int>:: iterator itr;
        itr = m.find(key);
        if(itr==m.end()){
            return -1;
        }
        return itr->second;
        
    }
    
    /** Removes the mapping of the specified value key if this map contains a mapping for the key */
    void remove(int key) {
        m.erase(key);
        
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
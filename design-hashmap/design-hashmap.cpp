class MyHashMap {
public:
    map<int,int>mp;
    map<int,bool>check;
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        mp[key]=value;
        check[key]=true;
    }
    
    int get(int key) {
        if(check[key])
            return mp[key];
        return -1;
    }
    
    void remove(int key) {
        // mp.erase(key);
        check[key]=false;
    }
    
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
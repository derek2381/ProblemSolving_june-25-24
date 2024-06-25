// problem link
// https://leetcode.com/problems/design-hashmap/description/


class MyHashMap {
public:
        vector<int> nums;
        vector<bool> contains;

    MyHashMap() {
        nums.resize(1000001, -1);
        contains.resize(1000001, false);

    }

    void put(int key, int value) {
        nums[key] = value;
        contains[key] = true;
    }

    int get(int key) {
        if(contains[key] == false){
            return -1;
        }else{
            return nums[key];
        }
    }

    void remove(int key) {
        contains[key] = false;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */


 

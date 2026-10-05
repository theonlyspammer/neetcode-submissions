class MyHashMap {
public:
    vector<vector<int>> arr;
    MyHashMap() {
        arr = {};
    }
    
    void put(int key, int value) {
        for(int i=0;i<this->arr.size();i++){
            if(this->arr[i][0]==key){
                this->arr[i][1]=value;
                return;
            }
        }
        arr.push_back({key, value});
        return;

    }
    
    int get(int key) {
        for(int i=0;i<this->arr.size();i++){
            if(this->arr[i][0]==key){
                return (this->arr[i][1]);
            }
        }
        return -1;
    }
    
    void remove(int key) {
        for(int i=0;i<this->arr.size();i++){
            if(this->arr[i][0]==key){
                this->arr.erase(arr.begin() + i);
                return;
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
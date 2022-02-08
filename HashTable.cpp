class HashItem{
    int key, val;
public:
    HashItem(int k, int v): key(k), val(v){}
    const int& getKey(){
        return key;
    }
    const int& getVal(){
        return val;
    }
};

class HashTable{
    static const int SIZE = 256;
    HashItem ** table;      // 注意这是二级指针，指向对象HashItem*
public:
    HashTable(){
        table  = new HashItem*[SIZE]();     // 括号初始化
    }
    void set(int key, int val){
        int idx = key%SIZE;
        if(table[idx]) delete table[idx];
        table[idx] = new HashItem(key, val);
    }
    const int get(int key){
        int idx = key%SIZE; //使用取模哈希法
        return table[idx] ? table[idx]->getVal() : -1;      //判断key不存在的情况
    }
    ~HashTable(){
        for(int i=0; i<SIZE; i++)
            if(table[i]) delete table[i];
        delete[] table;                     // table本身销毁
    }
};
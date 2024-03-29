
struct DLinkNode {
    int key, value;
    DLinkNode* prev;
    DLinkNode* next;
    DLinkNode(): key(0),value(0),prev(nullptr),next(nullptr){}
    DLinkNode(int _key, int _value): key(_key), value(_value), prev(nullptr), next(nullptr){}
};

class LRUCache {

private:
    unordered_map<int, DLinkNode*> cache;
    DLinkNode* head;
    DLinkNode* tail;
    int size;
    int capacity;
public:
    LRUCache(int _capacity) :capacity(_capacity), size(0){
        head = new DLinkNode();
        tail = new DLinkNode();
        head->next = tail;
        tail->prev = head;
    }
    
    int get(int key) {
        if(!cache.count(key))
            return -1;
        
        DLinkNode* node = cache[key];
        moveTohead(node);
        return node->value;
    }
    
    void put(int key, int value) {
        if(cache.count(key))
        {
            DLinkNode* node = cache[key];
            node->value = value;
            moveTohead(node);
            return;
        }
        else if(!cache.count(key))
        {
            DLinkNode* node = new DLinkNode(key, value);
            cache[key] = node;
            addToHead(node);
            size++;
            if(size > capacity)
            {
                DLinkNode* removed = removeTail();
                cache.erase(removed->key);
                delete removed;
                --size;
            }
            return;
        }
    }

    void addToHead(DLinkNode* node)
    {
        node->prev = head;
        node->next = head->next;
        head->next->prev = node;
        head->next = node;
    }

    void removeNode(DLinkNode* node)
    {
        node->prev->next = node->next;
        node->next->prev = node->prev;
    }

    void moveTohead(DLinkNode* node)
    {
        removeNode(node);
        addToHead(node);
    }

    DLinkNode* removeTail()
    {
        DLinkNode* node = tail->prev;
        removeNode(node);
        return node;
    }

};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
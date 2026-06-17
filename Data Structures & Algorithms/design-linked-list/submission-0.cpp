class MyLinkedList {
private:
    struct ListNode {
        int val;
        ListNode* next;
        ListNode* prev;
        ListNode(int v = 0) : val(v), next(nullptr), prev(nullptr) {}
};
    ListNode* head;
    ListNode* tail;
    int size;

public:

    MyLinkedList() {
        head = nullptr;
        tail = nullptr;
        size = 0;
    }
    
    int get(int index) {
        if (index < 0 || index >= size) return -1;
        ListNode* curr = head;
        while(index!=0){
            curr = curr->next;
            index--;
        }
        return curr->val;
    }
    
    void addAtHead(int val) {
        ListNode* node = new ListNode(val);
        node->next = head;
        if (head != nullptr) {
            head->prev = node;
        } else {
            tail = node;
        }
        head = node;
        size++;
    }
    
    void addAtTail(int val) {
        ListNode* node = new ListNode(val);
        if (tail != nullptr) {
            node->prev = tail;
            tail->next = node;
            tail = node;
        } else {
            head = tail = node;
        }
        size++;
    }
    
    void addAtIndex(int index, int val) {
        if (index > size) return;
        if (index <= 0) { addAtHead(val); return; }
        if (index == size) { addAtTail(val); return; }
        
        ListNode* curr = head;
        while(index!=0){
            curr = curr->next;
            index--;
        }
        ListNode* newNode = new ListNode(val);
        newNode->next = curr;
        newNode->prev = curr->prev;
        curr->prev->next = newNode;
        curr->prev = newNode;
        size++;
    }
    
    void deleteAtIndex(int index) {
        if (index < 0 || index >= size) return;
        ListNode* curr = head;
        while(index!=0){
            curr = curr->next;
            index--;
        }
        if (curr->prev) curr->prev->next = curr->next;
        else head = curr->next;
        if (curr->next) curr->next->prev = curr->prev;
        else tail = curr->prev;
        delete curr;
        size--;
    }
};
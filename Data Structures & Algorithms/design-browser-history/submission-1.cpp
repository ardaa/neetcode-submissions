class BrowserHistory {
private:
struct ListNode {
    string url;
    ListNode* next;
    ListNode* prev;

    ListNode(string u) : url(u), next(nullptr), prev(nullptr) {}
};

    ListNode* cur;

public:
    BrowserHistory(string homepage) {
        cur = new ListNode(homepage);
    }
    
    void visit(string url) {
        ListNode* newPage = new ListNode(url);
        newPage->next = nullptr;
        newPage->prev = cur;
        cur->next = newPage;
        cur = newPage;
    }
    
    string back(int steps) {
        while(steps!=0 && cur->prev!=nullptr){
            cur = cur->prev;
            cout << cur->url;
            steps--;
        }
        return cur->url;
    }
    
    string forward(int steps) {
        while(steps!=0 && cur->next!=nullptr){
            cur = cur->next;
            steps--;
        }
        return cur->url;
    }
};
// neetcode.com
// google.com
// facebook.com
// youtube.com
/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */
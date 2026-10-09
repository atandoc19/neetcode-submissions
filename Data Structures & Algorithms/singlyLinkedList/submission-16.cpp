struct Node{
    int val;
    Node* next;
};

class LinkedList {
    Node *head;
    Node *tail;
public:
    LinkedList() {
        head = nullptr;
        tail = head;
    }

    int get(int index) {
        if(!head) return -1;
        Node *res = head;
        for(int i = 0; i < index; i++){
            res = res->next;
            if(!res) return -1;
        }
        return res->val;
    }

    void insertHead(int val) {
        Node *fresh = new Node{val, head};
        head = fresh;
        if(!tail) tail = fresh;
    }
    
    void insertTail(int val) {
        Node *fresh = new Node{val, nullptr};
        if(tail) tail->next = fresh;
        tail = fresh;
        if(!head) head = fresh;
    }

    bool remove(int index) {
        if(!head) return false;
        if(index == 0){
            Node *temp = head->next;
            delete head;
            head = temp;
            return true;
        }
        Node *victim = head;
        for(int i = 0; i < index; i++){
            if(!victim->next && i < index){
                return false;
            } 
            victim = victim->next;
            if(!victim) return false;
        }
        Node *temp = head;
        while(temp->next != victim){
            temp = temp->next;
        }
        if(victim == tail) tail = temp;
        temp->next = victim->next;
        delete victim;
        return true;
    }

    vector<int> getValues() {
        vector<int> res;
        Node *curr = head;
        while(curr){
            res.push_back(curr->val);
            curr = curr->next;
        }
        return res;
    }
};

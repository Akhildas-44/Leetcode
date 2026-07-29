class MyLinkedList {
private:
   ListNode* dummy;
   int size;
public:
    MyLinkedList() {
        dummy= new ListNode(0);
        size=0;
        
        
    }
    
    int get(int index) {
        if(index<0 || index>=size)
        {
            return -1;
        }
        ListNode* curr=dummy -> next;
        for(int i=0;i<index;i++)
        {
            curr=curr-> next;
        }
        return curr-> val;

        
    }
    
    void addAtHead(int val) {
        addAtIndex(0,val);
        
    }
    
    void addAtTail(int val) {
        addAtIndex(size,val);
        
    }
    
    void addAtIndex(int index, int val) {
        if(index>size)
        {
            return;
        }
        if(index<0)
        {
            index=0;
        }
        ListNode* curr= dummy;
        for(int i=0;i<index;i++)
        {
            curr=curr->next;
        }
        ListNode* newNode=new ListNode(val);
        newNode->next=curr->next;
        curr->next=newNode;
        size++;

        
    }
    
    void deleteAtIndex(int index) {
        if(index<0 || index>=size)
        {
            return;
        }
        ListNode* curr=dummy;
        for(int i=0;i<index;i++)
        {
            curr=curr->next;
        }
        ListNode* Todelete=curr->next;
        curr->next=curr->next->next;
        delete Todelete;
        size--;
        //~ MyLinkedList()
        //{
           //ListNode* curr=dummy;
            //while(curr!=nullptr)
           // {
           //     ListNode* nextNode=curr->next;
           //     delete curr;
            //    curr=nextNode;
           // }
       // }
        
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
// class ListNode {
//     public:
//       int val;
//       ListNode *next;
// }

class MyLinkedList {
public:
    ListNode *head = NULL;
    ListNode *temp = NULL;
    ListNode *tail = NULL;
    int counter = 0;
    MyLinkedList() {
        ListNode *linkedList = new ListNode();
        linkedList->next = NULL;
        head = linkedList;
        // cout<<"Created"<<head->val<<endl;
        // head->next = NULL;
        // linkedList->next = NULL;
    }
    
    int get(int index) {
        temp = head->next;
        int cnt = 0;
        while(cnt!=index && temp!=NULL){
            temp=temp->next;
            cnt++;
        }
        if(temp==NULL)
            return -1;
        return temp->val;
    }
    
    void addAtHead(int val) {
        ListNode* add = new ListNode();
        add->next = head->next;
        add->val = val;
        head->next=add;
    }
    
    void addAtTail(int val) {
        temp = head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        ListNode* add = new ListNode();
        add->val = val;
        add->next = NULL;
        temp->next=add;
    }
    
    void addAtIndex(int index, int val) {
        temp = head->next;
        ListNode* prev = head;
        int cnt = 0;
        while(cnt!=index && temp!=NULL){
            prev = temp;
            temp=temp->next;
            cnt++;
        }
        if(cnt==index){
             ListNode* add = new ListNode();
        add->val = val;
        add->next = prev->next;
        prev->next = add;
        }
       
    }
    
    void deleteAtIndex(int index) {
        if(index==0)
            head=head->next;
        else{
            temp = head->next;
            ListNode* prev = head;
            int cnt = 0;
            while(cnt!=index && temp!=NULL){
                // cout<<prev->val<<endl;
                prev = temp;
                temp=temp->next;
                cnt++;
            }
            //cout<<prev->val<<" "<<temp->val<<endl;
            if(temp!=NULL)
            prev->next = temp->next;
        }
        
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
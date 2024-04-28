Q.Delete Middle of Linked List
code->class Solution{
    public:
    Node* deleteMid(Node* head)
{
    if(head==NULL || head->next==NULL){
        return NULL;
    }
        Node * temp = head;
        int count=1;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        Node * temp2= head;
        int i;
        if(count%2==0){
            i=2;
        }
        else{
            i=1;
        }
        while(i<count/2){
            temp2=temp2->next;
            i++;
        }
        temp2->next= temp2->next->next;
        return head;
    }
};

Q.Arrange Consonants and Vowels
code->class Solution {
  public:
    // task is to complete this function
    // function should return head to the list after making
    // necessary arrangements
    struct Node* arrangeCV(Node* head) {
        // Code here
        Node * vovel= new Node(NULL);
        Node * volvel1= vovel;
        Node * con= new Node(NULL);
        Node * con1= con;
        Node * temp = head;
        while(temp!=NULL){
            if(temp->data=='a'||temp->data=='e'||temp->data=='i'||temp->data=='o'||temp->data=='u')
          {
                vovel->next = temp;
                vovel=vovel->next;
            }
            else{
                con->next = temp;
                con=con->next;
            }
            temp=temp->next;
        }
        vovel->next=con1->next;
        con->next=NULL;
        return volvel1->next;;
    }
};
Expected Time Complexity :  O(n)
Expected Auxiliary Space :  O(1)

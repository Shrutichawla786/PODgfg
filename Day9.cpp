Q.Remove every kth node
code-> Node* deleteK(Node *head,int K){
      //Your code here
      if(K==1){
          return NULL;
      }
      Node * temp = head;
      int count=1;
      Node * prev=NULL;
      while(temp!=NULL){
          prev= temp;
          temp=temp->next;
          count++;
          if(count==K){
              if(!temp){
                  break;
              }
              prev->next = temp->next;
              prev = prev->next;
              temp=temp->next;
              count=1;
          }
          
      }
      return head;
    }

Node *removeNodes(Node *head, int k) {
    Node *temp=head;
    Node *prev=NULL;
    while(temp!=NULL){
        if(temp==head && temp->data==k){
            head=head->next;
            temp=head;
        }else if(temp->data==k){
            prev->next=temp->next;
            temp=temp->next;
            
        }else{
            prev=temp;
            temp=temp->next;
        }
    }
    return head;
}145

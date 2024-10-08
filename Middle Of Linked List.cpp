Node *findMiddle(Node *head) {
    Node *p1 = head;  
    Node *p2 = head;
    while (p1 != NULL && p1->next != NULL) {
      p1 = p1->next->next;
      p2 = p2->next;
    }

    return p2;
}

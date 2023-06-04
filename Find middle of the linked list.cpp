
Node *findMiddle(Node *head) {
    // Write your code here
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL && fast -> next != NULL){
        fast = fast -> next -> next;
        slow = slow -> next;
    }
    return slow;
}


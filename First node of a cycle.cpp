Node *firstNode(Node *head)
{
    //    Write your code here.
    if(head == NULL) return NULL;
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL && fast -> next != NULL){
        slow = slow -> next;
        fast = fast -> next -> next;
        if(slow == fast){
            fast = head;
            while(slow != fast){
                slow = slow -> next;
                fast = fast -> next;
            }
            return fast;
        }
    }
    return NULL;
}

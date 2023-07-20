
LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
    if(head == NULL || head -> next == NULL) return head;
    LinkedListNode<int> * prev = NULL;
    LinkedListNode<int> * curr = head ;
    LinkedListNode<int> * frwd = NULL;
    while(curr != NULL){
       frwd = curr -> next;
       curr -> next = prev;
       prev = curr;
       curr = frwd;
    }
    return prev;
}

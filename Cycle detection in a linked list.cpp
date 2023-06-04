
bool detectCycle(Node *head)
{
	//	Write your code here
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL && fast -> next != NULL){
        fast = fast -> next -> next;
        slow = slow -> next;
        if(fast == slow){
            return true;
            break;
        }
    }
    return false;
}

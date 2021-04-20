void splitList(Node *head, Node **head1, Node **head2)
{
Node *slow=head, *fast=head;
while(fast->next!=head && fast->next->next!=head)
{
slow=slow->next;
fast=fast->next->next;
}

*head1=head;               //head of 1st list
*head2=slow->next;          //head of 2nd list

slow->next=head;                        //1st list is ready 

Node *curr=(*head2);
while(curr->next!=head)
{
curr=curr->next;
}

curr->next=(*head2);                    //2nd list is ready
}
/********************************
    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

********************************/

Node* sortList(Node *head)
{
    // Write your code here.
    int z0=0,z1=0,z2=0;
    Node *t=head;
    Node *p=head;
    while(t!=NULL)
    {
        if(t->data==0)
            z0++;
        else if(t->data==1)
            z1++;
        else
            z2++;
        
        t=t->next;
    }
    while(z0){
        p->data=0;
        p=p->next;
        z0--;
    }
    while(z1){
        p->data=1;
        p=p->next;
        z1--;
    }
    while(z2){
        p->data=2;
        p=p->next;
        z2--;
    }
return head;
}

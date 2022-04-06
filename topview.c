struct Queue
{
    int data;
    struct node *node1;
    struct Queue *next;
}*queue;

void topView( struct node *root) {
if(root)
{
    struct Queue *help,*new_node=(struct Queue*)malloc(sizeof(struct Queue));
    new_node->data=0;
    new_node->next=NULL;
    new_node->node1=root;
    queue=new_node;
    help=new_node;
    int min_value=0,max_value=0;
    while(root)
    {
        if(root->left)
        {
            new_node->next=(struct Queue*)malloc(sizeof(struct Queue));
            new_node->next->data=help->data+1;
            new_node->next->node1=root->left;
            new_node->next->next=NULL;
            new_node=new_node->next;
             if(help->data+1>max_value)
            {
           max_value=help->data+1;

            }
        }
        if(root->right)
        {
            new_node->next=(struct Queue*)malloc(sizeof(struct Queue));
            new_node->next->data=help->data-1;
            new_node->next->node1=root->right;
            new_node->next->next=NULL;
            new_node=new_node->next;
           if(help->data-1<min_value)
            {
           min_value=help->data-1;

            }
        }
        help=help->next;
        if(help)
        {
            root=help->node1;
        }
        else{
            break;

        }
    }

    while(min_value<=max_value)
    {
        help=queue;
        while(help)
        {
            if(help->data==max_value)
            {
                printf("%d ",help->node1->data);
                break;
            }
            help=help->next;
        }
        max_value--;


    }
}
    else
    {
        printf("\n No data in this tree\n");
    }

}

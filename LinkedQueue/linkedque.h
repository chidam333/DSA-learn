typedef struct node{
    int data;
    struct node* link;
}linkedquenode;
typedef struct q{
    linkedquenode *front;
    linkedquenode *rear;
}queue;

queue enque(queue q,int x);
queue deque(queue q);
void display(queue q);
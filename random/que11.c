#include<stdio.h>
#include<stdlib.H>
#define MAX 4
typedef struct {
    int *ele;
    int rear;
    int count;
}queue;

queue q;

void createque(){
    q.rear=-1;
    q.count=-1;
    q.ele=(int*)malloc(MAX*sizeof(int));
}
void enque(int n){
    if(q.rear==MAX-1){
        printf("the que is full !\n");
    }
    else{
        if(q.count>=0){q.count-=1;}
        q.rear+=1;
        q.ele[q.rear]=n;
        printf("%d %d %d \n ",\4
        
        
        q.rear,q.count);
    }
}
int deque(){
    if(q.rear==-1){
        printf("The que is empty\n"); 
    }
    else{
        q.count+=1;
        printf("The dequed elemenet : %d %d %d %d\n",q.ele[q.count],q.count,q.rear);
        q.rear-=1;
    }
}
int main(){
    createque();
    enque(45);
    enque(44);
    deque();
    deque();
    enque(43);
    enque(48);
    enque(1);
    enque(2);
    enque(3);
    enque(4);
    deque();
    deque();
    deque();
    deque();
}
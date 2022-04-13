

#include<stdio.h>
// #define size 5

int size;
printf("Size of que : ");
scanf("%d",&size);
int a[size],front=0,rear=-1;
void enque(int v){
    if(rear==size-1){
        printf(" \n the array is full \n");
    }
    else{
        rear+=1;
        a[rear]=v;
    }
}
void deque(){
    if(rear==-1){
        printf("\n the thing is empty \n");
    }
    else{
        printf("\n Deleted element : %d",a[0]);
        for(int k=0;k<rear;k++){
            a[k]=a[k+1];
        }
        rear-=1;
    }
}
void display(){
    printf("\n the que:");
    for(int i=0;i<=rear;i++){
        printf("\t %d \t",a[i]);
    }
}
int main(){
    deque();
    enque(6);
    enque(9);
    enque(3);
    enque(4);
    enque(7);
    enque(3);
    enque(3);
    display();
    deque();
    deque();
    deque();

    display();
}
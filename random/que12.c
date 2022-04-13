#include<stdio.h>
#include<stdlib.h>
#define max 10

typedef struct{
	int *a;
	int top;
	int rear;
	int count;
}queue;

queue q;

void createstack(){
	q.top=-1;
	q.rear=-1;
	q.count=0;
	q.a=(int *)malloc(max*sizeof(int));
}
int isfull(){
	if(q.rear<10){
		return 1;
	}
	else{return 0;}
}
int isempty(){
	if(q.rear== -1){
		return 1;
	}
	else{
		return 0;
	}
}
int deque(){
	if(isempty()){
		printf("Can't be dequed as the que is empty'");
	}
	else{
		int x = q.a[q.top+1+q.count];
		q.count+=1;
		q.rear-=1;
		printf("the dequed ele  : %d",x);
	}
}
int enque(int ele){
	if(isfull()){
		printf("The que is full as fuck");
	}
	else{
		q.rear+=1;
		q.a[q.rear]=ele;
	}
}



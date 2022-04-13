#include <stdio.h>
#include "ArrayStack.c"
int main(){
	int op, n;
	Element x;
	printf("\nEnter size of stack: ");
	scanf("%d", &n);
	createStack(n);
	do{
		printf("\n1-Push  2-Pop  3-Peek  4-Exit");
		scanf("%d", &op);
		switch(op){
			case 1: printf("\nEnter the value to be pushed");
			        scanf("%d", &x);
			        push(x);
			        break;
			case 2: x = pop();
			        if (x != 0){
			        	printf("\nThe elemented deleted is %d", x);
					}
					break;
			case 3: x = peek();
			        if (x != 0){
			        	printf("\nThe elemented on top of stack is %d", x);
					}
					break;
		}	
	}
	while (op <= 3);
	return 0;
}
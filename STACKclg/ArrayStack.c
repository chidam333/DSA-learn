#include "stackADT.h"
#include <stdio.h>
#include <stdlib.h>

Stack s;
void createStack(int n){
	s.a = (Element *)calloc(n, sizeof(Element));
	s.length = n;
	s.top = -1;
}
int isEmpty(){
	if (s.top <= -1)
	   return 1;
	else
	   return 0;
}
int isFull(){
	if (s.top >= s.length-1)
	   return 1;
	else
	   return 0;
}
void push(Element x){
	if (isFull()){
		printf("\nStack Overflows. Cannot insert.");
		return;
	}
	s.top = s.top + 1;
	s.a[s.top]=x;
}
Element pop(){
	Element x;
	if (isEmpty()){
		printf("\nStack Underflows. Cannot delete.");
		return 0;
	}
	x = s.a[s.top];
	s.top = s.top - 1;
	return x;
}
Element peek(){
	Element x;
	if (isEmpty()){
		printf("\nStack Underflows. Cannot delete.");
		return 0;
	}
	x = s.a[s.top];
	return x;
}
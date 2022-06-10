typedef struct stack
{
   int top;
   char *a;
   int size;
   char infix[100];
   char post[100];
}sta;
void create();
void push(char x);
char pop();
int isempty();



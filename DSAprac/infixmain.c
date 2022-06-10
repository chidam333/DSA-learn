#include<stdio.h>
#include"infixadt.c"
#include<string.h>
void print()
{
    int i,n;
    n = strlen(s.post);
    printf("\n\n");
    printf("\n the postfix expression is : \n");
for(i=0;i<n;i++)
{
printf("%c",s.post[i]);
}
}
int pre(char x)
{
   
    switch(x)
    {
        case '^':return 3;
                  break;
        case '+':
        case '-': return 2;
                   break;
        case '*':
        case '/':return 1;
        break;
        default: return 0;
                 break;
    }
}
void convert()
{
  
    char x;
    char next;
    int i=0,j=0;
    int n=strlen(s.infix);
    for(i=0;i<n;i++)
    {
         x=s.infix[i];
         switch(x)
         {
             case '(': push(x);
                        break;

            case ')':
            while((next=pop())!='(')
                      {
                          s.post[j]=next;
                          j++;
                      }
                      break;
             case '+':
             case '-':
             case '*':
             case '/':
             case '^': 
                       while(pre(s.a[s.top]) >= pre(x))
                       {
                           s.post[j]=pop();
                           j++;
                       }
                       push(x);
                       break;
            default : s.post[j]=x;
                      j++;
            break;
         }
    }

    while(!isempty())
    {
        s.post[j]=pop();
        j++;
    }
}
int main()
{
    int x;
   printf("\n enter the expression:");
   scanf("%s",s.infix);
   x=strlen(s.infix);
   create();
   convert();
   print();
   return 0;

}
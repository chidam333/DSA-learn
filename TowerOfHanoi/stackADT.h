typedef struct
{
   int N;
   char SN;
   char IN;
   char DN;
   int RA;	
} Element;
typedef struct {
	int length;
	int top;
	Element *a;
}Stack;
int isEmpty();
int isFull();
void createStack(int n);
void push(Element x);
Element pop();
Element peek();

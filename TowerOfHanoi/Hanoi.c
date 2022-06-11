#include <stdio.h>
#include "Arraystack.c"
#include<math.h>
int main()
{
	int n, moves=0;
	FILE *fp;
	fp = fopen("moves.txt","w");
	printf("Enter number of disks: ");
	scanf("%d", &n);
	createStack((int)pow(2,n));
	Element t = {n, 'A', 'B', 'C', 18};
	step2:
		push(t);
		t = peek();
		if (t.N == 0)
			goto stepRA;
		else
		{
			Element x1 = {t.N-1, t.SN, t.DN, t.IN, 9};
			t = x1;
			goto step2;
		}
	step9:
		t = pop();
		t = peek();
		fprintf(fp, "\nMove disc %d from %c to %c", t.N, t.SN, t.DN);
		moves++;
		t=peek();
		Element x2 = {t.N-1, t.IN, t.SN, t.DN, 15};
		t = x2;
		goto step2;
	step15:
		t = pop();
		t = peek();
		goto stepRA;
	stepRA:
		switch(t.RA){
			case 9: goto step9;
			case 15: goto step15;
			case 18: goto step18;
		}
	step18: 
	    printf("\nNo. of moves = %d", moves);
	    fclose(fp);
	    return 0; 
}

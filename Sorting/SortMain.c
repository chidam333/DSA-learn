#include <stdio.h>
#include "Sorting.c"
int main()
{
    int a[100], n, i, opt;
    char filename[20];
    FILE *fp;
    do
    {
       printf("\n1. Insertion Sort\n2. Merge Sort\n3. Exit");
	   printf("\nEnter your option: ");
	   scanf("%d",&opt);
	   
	   if (opt != 3)
	   {
	        int dataIn;
	        n=0;
	        printf("\nEnter the filename: ");
            scanf("%s", filename);
            fp = fopen(filename, "r");
            while (!feof(fp))
            {
                fscanf(fp, "%d", &dataIn);
                if (!feof(fp))
                    a[n++]= dataIn;
            }
	   }
	   switch (opt)
	   {
	   	case 1: InsertionSort(a, n);
	   		    printf("Enter filename to store elements in sorted order: \n");
	   		    scanf("%s", filename);
	   		    fp = fopen(filename, "w");
	   		    for(i = 0 ; i<n; i++)
		 	  	    fprintf(fp, "%d  ", a[i]);
	   		    printf("\n");
	   		    break;
	   	case 2: MergeSort(a, 0, n-1);
	   		    printf("Enter filename to store elements in sorted order: \n");
	   		    scanf("%s", filename);
	   		    fp = fopen(filename, "w");	   		   
	   		    for(i = 0 ; i<n; i++)
		 		   fprintf(fp, "%d  ", a[i]);
	   		    printf("\n");
	   		    break;
		case 3: printf("\nExiting Program ....");
	}
   }
   while (opt < 3);
} 


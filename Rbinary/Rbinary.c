#include<stdio.h>
int rbinarysearch(int a[],int x,int low,int high){
	int mid=(low+high)/2;
	if(low<=high){
		if(a[mid]==x){
			return mid;
		}
		else if(a[mid]>x){
			return rbinarysearch(a,x,low,mid-1);
		}
		else{
			return rbinarysearch(a,x,mid+1,high);
		}
	}
	else{
		return -2;
	}
}
int main(){
	int pos,x,a[20],i=0,n;
	printf("The number of elements in the array are :");
	scanf("%d",&n);
	printf("Enter the elements in sorted fashion :");
	while(i<n){
		scanf("%d",&a[i]);
		i++;
	}
	printf("The element you want to search :");
	scanf("%d",&x);
	pos=rbinarysearch(a,x,0,n-1);
	pos+=1;
	if(pos==-1){printf("There is no element in it !! ");}
	else{
		printf("The element %d is found in the position %d",x,pos);
	}
}
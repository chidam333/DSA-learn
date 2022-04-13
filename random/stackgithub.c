// Get input from user and store it in array

int main(){
    int n,i,j,k,l,m,p,q,r,s,t,u,v,w,x,y,z;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    // Sort the array
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                k=a[i];
                a[i]=a[j];
                a[j]=k;
            }
        }
    }
    // Print the array
    printf("The sorted array is\n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    // Find the number of even and odd elements
    l=0;
    m=0;
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            l+=1;
        }
        else{
            m+=1;
        }
    }
    // Print the even and odd elements
    printf("\nThe even elements are\n");
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            printf("%d ",a[i]);
        }
    }
    printf("\nThe odd elements are\n");
    for(i=0;i<n;i++){
        if(a[i]%2!=0){
            printf("%d ",a[i]);
        }
    }
    // Find the number of prime numbers
    p=0;
    for(i=0;i<n;i++){
        for(j=2;j<a[i];j++){
            if(a[i]

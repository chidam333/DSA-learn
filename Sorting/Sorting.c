void InsertionSort(int a[], int n)
{
   int i, j, key;
   for (i=1; i<n; i++)
   {
       key = a[i];
       j = i-1;
       while (j>=0 && a[j] > key)
       {
          a[j+1] = a[j];
          j--;
       }
       a[j+1] = key;
   }
}
void Merge(int a[], int low, int mid, int high)
{
    int i = low;
    int j = mid+1;
    int k = low;
 
    int temp[100];
 
    while(i<=mid && j<=high)
    {
      if(a[i] <= a[j])
        temp[k++] = a[i++];
      else
        temp[k++] = a[j++];
    }

    while(j<= high)
       temp[k++] = a[j++];
    while(i<= mid)
       temp[k++] = a[i++];
    for (i=low; i<=high; i++)
       a[i] = temp[i];
} 

void MergeSort(int a[], int low,int high)
{
   if(low < high)
   {
        int mid = (low+high) / 2;
        MergeSort(a, low, mid);
        MergeSort(a, mid+1, high);
        Merge(a, low, mid, high);
   }
}


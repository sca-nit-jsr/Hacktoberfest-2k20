 #include<stdio.h>


  int partition(int a[],int l,int u)
  {
    int pivot=a[l];
    int i=l,j=u;
    while(i<j)
    {
      while(a[i]<=pivot)
      {
        i++;
      }
      while(a[j]>pivot)
      {
        j--;
      }
      if(i<j)
       {
         int temp=a[i];
         a[i]=a[j];
         a[j]=temp;
       }
    }
      int temp=pivot;
      a[l]=a[j];
      a[j]=temp;
      return j;
  }

  void quicksort(int a[],int l,int u)
  {
    if(l<u)
    {
      int j=partition(a,l,u);
       quicksort(a,l,j);
       quicksort(a,j+1,u);
    }
  }

 int main()

  {
    int n,a[100],i,j;
      printf("enter number of element::");
       scanf("%d",&n);
      printf("enter %d elmennt::",n);
      for(i=0;i<n;i++)
        scanf("%d",&a[i]);

      printf("number in sorted order::");
       quicksort(a,0,n-1);
     for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
  }


#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    int* ptr;
    int sum =0;
    scanf("%d",&n);

    ptr = (int*)malloc(n*sizeof(int));
    if(ptr==NULL)
    {
        printf("Not Allocated");
    }
    else {
        for(int i=0;i<n;++i)
        {
           scanf("%d",&ptr[i]);
        }
         for (int i = 0; i < n; ++i) { 
           sum+=ptr[i];
        } 
        printf("%d",sum);
    }

}

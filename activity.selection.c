#include<stdio.h>
int main()
{
    int start[10],finish[10],size,i;
    printf ("Enter your elements\n");
    scanf("%d",&size);
    printf("duration\n");
    for(i=0;i<size;i++)
    {
        scanf("%d %d",&start[size],&finish[size]);
    }
    selection(start,finish,size);
    return 0;
}
int selection(int start[],int finish[],int size)
{
    int i,j;
    i=0;
    printf("%d\t",i);
    for (j=1;j<size;j++)
    {
        if(start[j]>=finish[i])
        {
            printf("%d\t",j);
            i=j;
        }
    }
}

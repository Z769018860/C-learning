#include <stdio.h>
#define MXLEN 100
void swap(int *pa, int *pb);
int main()
{
    int a=1,b=2;
    printf("before swap a=%d b=%d\n",a,b);
    swap(&a,&b);
    printf("after swap a=%d b=%d\n",a,b);
    return 0;
}
void swap(int *pa,int *pb)
{
    int temp;
    temp=*pa;
    *pa=*pb;
    *pb=temp;
}

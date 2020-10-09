#include<stdio.h>

main(){
    int a[]={0,1,2,3,4};
    int *p[]={a,a+1,a+2,a+3,a+4,a+5};
    int **ptr;
    ptr=p;
    **ptr++;
    printf("%d %d %d\n",ptr-p,*ptr-a,**ptr);
    *++*ptr;
    printf("%d %d %d\n",ptr-p,*ptr-a,**ptr);
    ++**ptr;
    printf("%d %d %d\n",ptr-p,*ptr-a,**ptr);
}
/*Output:
1 1 1
1 2 2
1 2 3
*/
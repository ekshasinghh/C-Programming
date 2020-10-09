#include<stdio.h>

main(){
    int a[]={10,20,30,40,50,60};
    int *p[]={a,a+1,a+2,a+3,a+4,a+5};
    int **pp=p;
    pp++;
    printf("%d %d %d\n",pp-p,*pp-a,**pp);
    *pp++;
    printf("%d %d %d\n",pp-p,*pp-a,**pp);
    ++*pp;
    printf("%d %d %d\n",pp-p,*pp-a,**pp);
    ++**pp;
    printf("%d %d %d\n",pp-p,*pp-a,**pp);
}
/*Output:
1 1 20
2 2 30
2 3 40
2 3 41
*/
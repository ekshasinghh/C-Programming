#include <stdio.h>

int main()
{
    char s[25]={"KIET Groups"};
    char ch;
    int i=0;
    ch=s[++i];
    printf("%c %d\n",ch,i);
    ch=s[i++];
    printf("%c %d\n",ch,i);
    ch=i++[s];
    printf("%c %d\n",ch,i);
    ch=++i[s];
    printf("%c %d\n",ch,i);
}

/*Output-
I 1
I 2
E 3
U 3
*/

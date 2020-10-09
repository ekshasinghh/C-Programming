#include <stdio.h>

int main()

{
    char s[]="KIET Group of Institutions";
    printf("%c\n",(*(&s[2])));
    printf("%s\n",s+5);
    printf("%s\n",s);
    printf("%c\n",*(s+2));
    printf("%s\n",s);
}

/*Output-
E                                                                                                                                             
Group of Institutions                                                                                                                         
KIET Group of Institutions                                                                                                                    
E                                                                                                                                             
KIET Group of Institutions
*/
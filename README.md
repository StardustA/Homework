#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[]="I love China!",str2[20];
    char *pa,*pb;
    pa=str1;
    pb=str2;

    for(;*pa!='\0';pa++,pb++)
    {
        *pb=*pa;
    }
    *pb='\0';

    printf("原先的str1,str2分别是:\n");
    printf("%s\n%s\n",str1,str2);

    pa=str1;
    pb=str2;
    printf("变化后的pa,pb分别是:\n");
    printf("%s\n%s\n",pa,pb);

    return 0;
}

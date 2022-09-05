#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cumle[100];
    char *p1,*p2;
    int kontrol;

    printf("Lutfen bir cumle giriniz:");
    gets(cumle);

    for(p2=cumle;*p2;p2++);
    p2--;

    kontrol=1;
    for(p1=cumle;kontrol && p1<p2;p1++,p2--)
    {
        if (*p1 != *p2)
        {
            kontrol=0;
        }
    }

    if (kontrol)
        {
            printf("%s bir palendromdur.",cumle);
        }
    else
        {
            printf("%s bir palendrom degildir",cumle);
        }


    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("*** 1. feladat ***\n");
    /**0b01011011*/
    int i=0b10011001;
    if((i&0b01011011)==0b01011011)
    {
        printf("bla");
    }

    printf("\n\n*** 2. feladat ***\n");
    for(i=0; i<101; i++)
    {
        if((i&(1<<4))==(1<<4))
        {
            printf("\t%d", i);
        }
    }

    printf("\n\n*** 3. feladat ***\n");
    for(i=0; i<101; i++)
    {
        if((i&0b100000) == 0)
        {
            printf("%d\t", i);
        }
    }

    printf("\n\n*** 4. feladat ***\n");
    for(i=0; i<101; i++)
    {
        if((i&0b1001010) == 0b1000010)
        {
            printf("%d\t", i);
        }
    }

    printf("\n\n*** 5. feladat ***\n");
    for(i=0; i<101; i++)
    {
        if((i&((1<<6)|(1<<3)|(1<<1)))==(1<<6)|(1<<1))
        {
            printf("bla ");
        }
    }

    printf("\n\n*** 6. feladat ***\n");
    for(i=100; i<1000; i++)
    {
        if((i%100) == 0 && (i%3) == 0)
        {
            printf("%d\t", i);
        }
    }

    printf("\n\n*** 7. feladat ***\n");
    char c=0;
    printf("Irj be egy karakter majd ENTER");
    scanf("%c", &c);
    printf("Karakteresen kiirva: %c", c);
    printf("\nASCII ertek: %d", c);

    printf("\n\n*** 8. feladat ***\n");
    printf("Irj be egy szot majd ENTER");
    char kacsa[20];
    scanf("%s", kacsa);
    printf("String%s", kacsa);


    return 0;
}

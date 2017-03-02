#ifndef _MAIN_
#define _MAIN_

#include <stdio.h>
int main()
{
    int in_data = 0;

    scanf("%i", &in_data);

    switch (in_data)
    {
        case 1 ... 4:
        {
            printf("few\n");
            return 0;
        }
        case 5 ... 9:
        {
            printf("several\n");
            return 0;
        }
        case 10 ... 19:
        {
            printf("pack\n");
            return 0;
        }
        case 20 ... 49:
        {
            printf("lots\n");
            return 0;
        }
        case 50 ... 99:
        {
            printf("horde\n");
            return 0;
        }
        case 100 ... 249:
        {
            printf("throng\n");
            return 0;
        }
        case 250 ... 499:
        {
            printf("swarm\n");
            return 0;
        }
        case 500 ... 999:
        {
            printf("zounds\n");
            return 0;
        }
        case 1000 ... 2000:
        {
            printf("legion\n");
            return 0;
        }
    }
    return 0;
}

#endif /* _MAIN_ */

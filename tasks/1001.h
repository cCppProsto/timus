#ifndef _MAIN_
#define _MAIN_

#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <math.h>

long long array[1024 * 128];
double farray[1024 * 128];

int main()
{
    int i = 0;
    char buffer[22] = { 0 };
    unsigned ib = 0;
    char ch;

    while ((ch = fgetc(stdin)) != EOF)
    {
        if (ch == ' ' || ch == '\n')
        {
            if (ib > 0)
            {
                farray[i++] = sqrt(atoll(&buffer[0]));
                ib = 0;
                memset(&buffer[0], 0, 21);
            }
        }
        else
            buffer[ib++] = ch;
    }

    if (ib > 0)
        farray[i++] = sqrt(atoll(&buffer[0]));

    --i;
    while (i >= 0)
        printf("%.4f\n", farray[i--]);

    return 0;
}

#endif /* _MAIN_ */

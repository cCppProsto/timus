#ifndef _MAIN_
#define _MAIN_

#include <stdio.h>

int  res = 1;
int  tmp = 0;
int  i = 0;

char buffer[14] = { 0 };
char ch;

int main()
{
    setbuf(stdin, buffer);
    getc(stdin);
    do
    {
        ch = buffer[i++];
        if (ch == ' ' || ch == '\n')
        {
            res *= tmp;
            tmp = 0;

            if (ch == '\n')
            {
                printf("%i\n", res << 1);
                return;
            }
        }
        else
        {
            tmp *= 10;
            tmp += ch - '0';
        }
    } while (1);
    return 0;
}

#endif // _MAIN_

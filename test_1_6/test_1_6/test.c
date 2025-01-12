#include <stdio.h>

int main()
{
    char c;
    while ((c = getchar()) != '\n')
    {
        switch (c)
        {
        case 'I': break;
        case 'L': continue;
        default: putchar(c); continue;
        }
    }
    putchar('*');
    return 0;
}


#include <stdio.h>
int main()
{
    int i, j, n = 25; //要输出的行数
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= n; j++)
           putchar( (i & j) == j ? '*' : ' ');
        puts("");
    }
    
    return 0;
}
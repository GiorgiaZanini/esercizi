#include <stdio.h>
#define END -1

int divisoriMinimi(int a, int c);
int main()
{
    int a, b, c, cont = -1;
    scanf("%d",&a);
    if(a != END)
    {
        scanf("%d",&b);
        if(b != END)
        {
            scanf("%d",&c);
            if(c != END)
                cont++;
        }
    }
    while(a != END && b != END && c != END)
    {
        if(divisoriMinimi(a,c) == 1)
            cont++;
        a = b;
        b = c;
        scanf("%d",&c);
    }

    printf("%d",cont);
}

int divisoriMinimi(int a, int c)
{
    int m = a, pda = 1, pdb = 1;
    if(a > c)
        m = c;
    for(int i = 2; i <= m; i++)
    {
        if(a % i == 0 && pda == 1)
            pda = i;
        if(c % i == 0 && pdb == 1)
            pdb = i;
    }
    if(pda == pdb && pda != 1)
        return 1;
    else
        return 0;
}
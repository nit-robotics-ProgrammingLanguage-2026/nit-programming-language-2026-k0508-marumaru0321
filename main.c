#include <stdio.h>

int main(void)
{
    int n,a=0;
    scanf("%d", &n);
    if (n < 0 && n != 0)/* TODO: 課題0508 */
    {
        printf("Error");
    }
    else 
    {
        if (n%3 == 0 && n != 0)
        {
        printf("Up");
                a = a + 1;
        }
        if (n%5 == 0 && n != 0)
        {
        printf("Go");
                a = a + 1;
        }
        if (n%7 == 0 && n != 0)
        {
        printf("!!");
        a = a + 1;
        }
        if (a >0)
    {
        printf("No");
    }
}
    return 0;
}

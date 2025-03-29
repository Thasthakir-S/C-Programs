#include <stdio.h>

int main(void)
{
    int x, y;

    printf("What's x? ");
    scanf("%d", &x);

    printf("What's y? ");
    scanf("%d", &y);

    if (x < y)
    {
        printf("x is less than y\n");
    }
    else if(x > y)
    {
        printf("x is not less than y\n");
    }
    else
    {
        printf("Both are Equal\n");
    }
}

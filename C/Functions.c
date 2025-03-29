#include <stdio.h>

void meow(int n);

int main(void)
{
    int n;
    do
    {
        printf("Number: ");
        scanf("%d", &n);
    }
    while (n < 1);
    meow(n);
    return 0;
}

void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}

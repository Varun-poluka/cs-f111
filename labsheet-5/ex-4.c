#include <stdio.h>

int main()
{
    int n, a=0, b=1, c;
    printf("number of terms: ");
    scanf("%d", &n);

    for (int i=1; i<=n; i++)
    {
        printf("%d ", a);
        c = a+b;
        b = a;
        a = c;
    }
    printf("\n");
}
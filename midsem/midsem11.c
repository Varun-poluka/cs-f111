#include <stdio.h>

int main()
{
    int mealtype,dish;
    scanf("%d", &mealtype);

    switch(mealtype)
    {
        case 1: scanf("%d", &dish);

        switch(dish)
        {
            case 1: printf("slected paneer\n");break;
            case 2: printf("selected dal\n");break;
            default : printf("invalid\n");
        }
        return 0;

        case 2 : scanf("%d", &dish);

        switch(dish)
        {
            case 1: printf("selected chicken\n");break;
            case 2: printf("selected fish\n");break;
            default: printf("invalid\n");
        }
        return 0;

        default : printf("invalid\n");
    }
    return 0;
}
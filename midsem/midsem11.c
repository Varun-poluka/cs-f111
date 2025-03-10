#include <stdio.h>
int main() {
int mealType, dish;
printf("Select meal type (1 for Vegetarian, 2 for Non-Vegetarian): ");
scanf("%d", &mealType);
switch (mealType) {
case 1: // Vegetarian
printf("Select dish (1 for Paneer, 2 for Dal): ");
scanf("%d", &dish);
switch(dish) {
case 1:
printf("You selected Paneer.\n");
break;
case 2:
printf("You selected Dal.\n");
break;
default :
printf("Invalid dish selection for Vegetarian meal.\n");
}
return 0;
case 2: // Non-Vegetarian
printf("Select dish (1 for Chicken, 2 for Fish): ");
scanf("%d", &dish);
switch(dish) {
case 1:
printf("You selected Chicken.\n");
break;
case 2:
printf("You selected Fish.\n");
break;
default :
printf("Invalid dish selection for Non-Vegetarian meal.\n");
}
return 0;
default:
printf("Invalid meal type.\n");
}
return 0;
}
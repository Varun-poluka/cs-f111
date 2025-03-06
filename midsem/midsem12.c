#include <stdio.h>

int main()
{
    float temperature;
    int holiday;
    scanf("%f", &temperature);
    scanf("%d", &holiday);
    float coolness,warmness;
    int sales;
    if(temperature<=20)
    {
        if(temperature<=15)
        {
            coolness=0.1;
        }
        else
        {
            coolness=(20-temperature)/5;
        }
        sales = 75*coolness;
        printf("%d", sales);
        return 0;
    }
    else
    {
        if(temperature>=30)
        {
            warmness = 1;
        }
        else
        {
            warmness = (temperature-20)/10;
        }
        if(holiday==1)
        {
            sales = warmness*200;
        }
        else
        {
            sales = warmness*150;
        }
        printf("%d", sales);
    }
    return 0;
}
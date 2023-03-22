#include <stdio.h>

int main(int argc, char* args[])
{
    
    int lower = 0;
    int upper = 100;
    int step = 20;

    float celsius = 0;
    float fahr = 0;
    
    printf("%3s %6s\n", "C", "F");

    while(celsius <= upper)
    {
        fahr = (celsius*(9/5)) + 32;
        printf("%3.0f %6.2f\n", celsius, fahr);
        celsius = celsius + step;
    }

    return 0;
}
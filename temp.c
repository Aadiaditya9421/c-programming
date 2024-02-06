#include <stdio.h>

int main() 
    {int f,temp;

    printf("Enter the temperature in farenheit: ");
    scanf("%d", &f);

    temp=(f-32)*0.555;

    printf("The temperature in Celcius:%d\n",temp);
    
    return 0;
}

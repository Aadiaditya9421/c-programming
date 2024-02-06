#include <stdio.h>

int main() 
    {int a,b,c,d,e,average,percentage;

printf("Enter marks of ENG: ");
scanf("%d", &a);

printf("Enter marks of EVS: ");
scanf("%d", &b);

printf("Enter marks of BIO: ");
scanf("%d", &c);

printf("Enter marks of ED: ");
scanf("%d", &d);

printf("Enter marks of CP LAB: ");
scanf("%d", &e);

average=(a+b+c+d+e)/5;
percentage=(a+b+c+d+e)*100/1000;

printf("the average of 5 subjects is: %d\n",average);
printf("the percentage is: %d\n",percentage);

return 0;
}

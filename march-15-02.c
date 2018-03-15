#include<stdio.h>
int main()
{
    float number[5];
    int j, positive=0, negative=0;

    printf("Input the first number : ");
    scanf("%f",&number[0]);

    printf("Input the second number : ");
    scanf("%f",&number[1]);

    printf("Input the third number : ");
    scanf("%f",&number[2]);

    printf("Input the fourth number : ");
    scanf("%f",&number[3]);

    printf("Input the fifth number : ");
    scanf("%f",&number[4]);

    for (j = 0; j < 5; j++)
    {
        if(number[j] > 0)
        {
            positive++;
        }
        else if (number[j] < 0)
        {
            negative++;
        }
    }

    printf("Number of positive number : %d\n",positive);
    printf("Number of negative number : %d",negative);

    return 0;
}

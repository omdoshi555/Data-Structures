#include <stdio.h>
int main()
{
    float rainfall[3][4];
    float total = 0.0;
    float avg = 0.0;
    printf("\nInput rainfall data for 3 cities: ");
    for (int c = 0; c < 3; c++)
    {
        printf("\nEnter data for each month for city %d:\n", c + 1);
        for (int m = 0; m < 4; m++)
        {
            printf("  Month %d: ", m + 1);
            scanf("%f", &rainfall[c][m]);
        }
    }
    printf("\nRainfall Tracking\n");
    printf("-------------------------------------------------------------\n");
    printf("Sr No.\tCity\tMonth 1\tMonth 2\tMonth 3\tMonth 4\tAverage Rainfall\n");
    printf("-------------------------------------------------------------\n");
    for (int c = 0; c < 3; c++)
    {
        printf("%d\tCity %d", c + 1, c + 1);
        total = 0.0;
        for (int m = 0; m < 4; m++)
        {
            printf("\t%.2f", rainfall[c][m]);
            total += rainfall[c][m];
        }
        avg = total / 4.0;
        printf("\t%.2f\n", avg);
    }
    return 0;
}
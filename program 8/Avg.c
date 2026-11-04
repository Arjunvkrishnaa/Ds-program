#include <stdio.h>
int main()
{
    int marks[10], i, n, sum = 0;
    float average;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    if (n <= 0 || n > 10)
    {
        printf("Invalid number of elements");
        return 1;
    }
    for (i = 0; i < n; ++i)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &marks[i]);
        sum += marks[i];
    }
    average = (float)sum / n;
    printf("Average = %.2f\n", average);
    return 0;
}

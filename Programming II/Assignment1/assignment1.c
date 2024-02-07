#include <stdio.h>

#define DAY 7
#define TIME 3 //Morning, Noon, Night

void calculate_avg(int temperatures[], int * average);

int main()
{
    int temperatures[DAY][TIME] = { { 7, 9, 7},
                                    { 11, 12, 7 },
                                    { 11, 13, 9 },
                                    { 12, 15, 10 },
                                    { 13, 16, 12 },
                                    { 14, 16, 12 },
                                    { 14, 16, 12}
    };

    int avg = 0;

    for(int i = 0; i < DAY * TIME; i++) {
        avg += *(temperatures[0] + i);
    }
    avg /= (DAY * TIME);



    printf("The average temperature in April is %d\n", avg);

    for(int i = 0; i < DAY; i++) {
        int davg;
        calculate_avg(temperatures[i], &davg);
        printf("The average temperature on the %d. of April is %d\n", (i + 1), davg);
    }

    return 0;
}

void calculate_avg(int temperatures[], int * average) {
    *average = 0;
    
    for(int i = 0; i < TIME; i++) {
        *average += temperatures[i];
    }
    *average /= TIME;
}
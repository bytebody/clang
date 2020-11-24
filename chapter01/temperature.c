/*
 * =====================================================================================
 *
 *       Filename:  temperature.c
 *
 *    Description:  温度转换 
 *
 *        Version:  1.0
 *        Created:  11/24/2020 13:47:45
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  mt@wangdawu.com 
 *   Organization:  bytebody
 *
 * =====================================================================================
 */
#include <stdio.h>

int intf2c(int fahr)
{
    return 5 * (fahr - 32) / 9;
}

float floatf2c(int fahr)
{
    return 5.0 * (fahr - 32.0) / 9.0;
}

void inttable()
{
    printf("\n int table \n");
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper) {
        celsius = intf2c(fahr);
        // printf("%d\t%d\n", fahr, celsius);
        printf("%4d\t%6d\n", fahr, celsius); // 右对齐
        fahr = fahr + step;
    }
}


void floattable()
{
    printf("\n float table \n");
    float fahr, celsius;
    float lower, upper, step;

    lower = 0.0;
    upper = 300.0;
    step = 20.0;

    fahr = lower;
    while (fahr <= upper) {
        celsius = floatf2c(fahr);
        // printf("%f\t%f\n", fahr, celsius);
        printf("%4.0f\t%6.2f\n", fahr, celsius); // 右对齐
        fahr = fahr + step;
    }
}


int main()
{
    inttable();
    floattable();
}


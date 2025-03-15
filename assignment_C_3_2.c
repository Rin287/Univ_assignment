//
// Created by skskdustn on 25. 3. 15.
//

#include "assignment_C_3_2.h"
#include <stdio.h>

float homework1_input() {

    float temp_Celsius;
    printf("섭씨온도를 입력하세요: ");
    scanf("%f",&temp_Celsius);
    printf("\n");
    return temp_Celsius;
}

float homework1_process(float temp_Celsius) {

    float temp_Fahrenheit = (9.0/5.0)*temp_Celsius+ 32.0;
    return temp_Fahrenheit;
}

void homework1_output(float result_Fahrenheit, float result_Celsius) {

    printf("입력한 섭씨 온도: %.6f\n",result_Celsius);
    printf("변환된 화씨 온도: %.6f\n",result_Fahrenheit);
}

float homework2_input(void) {

    float x;
    printf("x 값을 입력하세요: ");
    scanf("%f",&x);
    printf("\n");
    return x;
}

float homework2_process(float x) {

    return (float)(9.0*x*x - 9.0*x - 7);
}

void homework2_output(float x,float result) {

    printf("입력한 x 값: %.6f\n",x);
    printf("다항식 결과 y값: %.6f",result);
}

//
// Created by skskdustn on 25. 3. 19.
//

#include "assignment_C_3_80p_81p.h"
#include <stdio.h>

void homework3_input(double* w, double* h) {
    scanf("%lf %lf", w, h);
}

double homework3_process1(double w, double h) {

    double area = w * h;
    return area;
}

double homework3_process2(double w, double h) {

    double perimeter = 2 * (w + h);
    return perimeter;
}

void homework3_output(double area, double perimeter) {

    printf("사각형의 넓이: %lf\n 사각형의 둘레: %lf\n", area,perimeter);
}
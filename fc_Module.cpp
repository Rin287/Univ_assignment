//
// Created by skskdustn on 25. 3. 15.
//

#include "fc_Module.h"
#include "assignment_C_3_2.h"
#include "assignment_C_3_80p_81p.h"

void homework1() {

    float temp_celsius = homework1_input();
    float temp_Fahrenheit = homework1_process(temp_celsius);
    homework1_output(temp_Fahrenheit, temp_celsius);
}

void homework2() {

    float x = homework2_input();
    float result = homework2_process(x);
    homework2_output(x, result);
}

void homework3() {

    double w, h;
    homework3_input(&w, &h);
    double area = homework3_process1(w, h);
    double perimeter = homework3_process2(w, h);
    homework3_output(area, perimeter);
}
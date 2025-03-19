//
// Created by skskdustn on 25. 3. 25.
//

#include "assignment_C_4_76.h" //C 파일
#include <stdio.h>

void homework4_all() { // 4장 미니프로젝트 과제 소스코드

    double light_speed = 300000; // 빛의 속도
    double distance = 149600000; // 태양과 지구 사이 거리
    double time = 0;

    time = distance / light_speed;
    time = time / 60.0;

    printf("빛의 속도는 %fkm/s \n", light_speed);
    printf("태양과 지구의 거리 %fkm \n", distance);
    printf("도달시간은 %f분\n",time);

    //void 형, 반환 없음
    //이 함수는 다른 파일에서 실행됩니다.
}
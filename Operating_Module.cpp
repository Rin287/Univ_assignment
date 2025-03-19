//
// Created by skskdustn on 25. 3. 15.
//

#include "Operating_Module.h"
#include "fc_Module.h"
#include <iostream>
#include <vector> 

using namespace std;

using func_ptr = void (*)();
vector<func_ptr> Module_Driver = {homework1,homework2,homework3,homework4};

int Operating_Module(int Num, int r) {

    int Mn = Module_Driver.size();

    if (Num > Mn) {
        cout << "잘못된 입력값입니다. 다시 입력해주세요" << endl;
        return Operating_Module_input();
    }
    if (r == Num) {
        Module_Driver[Num - 1]();
    }
    else if (r < Num) {

        r++;
        return Operating_Module(Num,r);
    }
    else if (r > Num){

        cout << "잘못된 입력값입니다. 다시 입력해주세요" << endl;
        return Operating_Module_input();
    }
}

int Operating_Module_input() {

    int Number;
    int r = 1;
    cout << "함수 선택: [1~" << Module_Driver.size() << "]" << endl ;
    cin >> Number;
    cout << endl;

    Operating_Module(Number,r);
    return 0;
}

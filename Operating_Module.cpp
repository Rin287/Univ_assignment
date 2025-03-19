//
// Created by skskdustn on 25. 3. 15.
//

#include "Operating_Module.h"
#include "fc_Module.h"
#include <iostream>
#include <vector> // 추후 벡터 활용

using namespace std;

vector<string> ;

int Operating_Module() {

    int Number;
    cout << "함수 선택: " ;
    cin >> Number;
    cout << endl;

    if (Number == 1) {
        homework1();
    }
    else {
        homework2();
    }
}

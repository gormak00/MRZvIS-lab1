#include "Conveyer.h"

int main() {

    vector<int> one{ 8,9,10,11 };
    vector<int> two{ 9,14,11,13 };

    auto lab1 = new Conveyer;
    lab1->calculate(one, two);
}

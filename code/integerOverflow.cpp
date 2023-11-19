#include <iostream>
#include <climits>
#define ZERO 0

int main() {
    using namespace std;
    short money = SHRT_MAX;
    unsigned short uMoney = money;
    cout << "init money is: " << money << endl;
    cout << "init uMoney is: " << uMoney << endl;
    money += 1;
    uMoney += 1;
    cout << "init money +1 is: " << money << endl;
    cout << "init uMoney +1 is: " << uMoney << endl;
    money = ZERO;
    uMoney = ZERO;
    cout << "init money is: " << money << endl;
    cout << "init uMoney is: " << uMoney << endl;
    money -= 1;
    uMoney -= 1;
    cout << "init money -1 is: " << money << endl;
    cout << "init uMoney -1 is: " << uMoney << endl;

    return 0;
}

/*
init money is: 32767
init uMoney is: 32767
init money +1 is: -32768
init uMoney +1 is: 32768
init money is: 0
init uMoney is: 0
init money -1 is: -1
init uMoney -1 is: 65535
 */
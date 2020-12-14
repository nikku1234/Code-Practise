#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


class Date {
private:
    int D_a, M_a, Y_a; // actual_date
    int D_e, M_e, Y_e; // expected_date
public:
    Date() {cin >> D_a >> M_a >> Y_a >> D_e >> M_e >> Y_e;}
    virtual ~Date() {} // to avoid memory leak
    int CalculateFine() {
        if (Y_a > Y_e)
            return 10000;
        else if (Y_a == Y_e && M_a > M_e)
            return 500 * (M_a - M_e);
        else if (Y_a == Y_e && D_a > D_e)
            return 15 * (D_a - D_e);
        else
            return 0;
    }
};

int main() {
    Date d;
    cout << d.CalculateFine() << endl;
    return 0;
}

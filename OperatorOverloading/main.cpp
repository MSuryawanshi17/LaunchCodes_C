#include <iostream>
using namespace std;

class operatorOverloading {
private:
    int hr;
    int min;

public:
    operatorOverloading(int h, int m) {
        hr = h;
        min = m;
    }

    operatorOverloading add(const operatorOverloading& other) const {
        int totalMinutes = min + other.min;
        int carryHour = totalMinutes / 60;
        int minuteSum = totalMinutes % 60;
        int hourSum = hr + other.hr + carryHour;
        return operatorOverloading(hourSum, minuteSum);
    }

    void print() const {
        std::cout << "Total Time: " << hr << " hours, " << min << " minutes" << std::endl;
    }
};

int main() {

    operatorOverloading time1(1, 30);
    operatorOverloading time2(1, 40);

    operatorOverloading sum = time1.add(time2);

    sum.print();
    return 0;
}

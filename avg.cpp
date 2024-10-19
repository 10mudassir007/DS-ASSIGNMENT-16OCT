#include <iostream>
using namespace std;

class Average {
public:
    void calculateAverage() {
        float num1, num2, num3, avg;

        cout << "Enter three numbers: ";
        cin >> num1 >> num2 >> num3;

        avg = (num1 + num2 + num3) / 3;

        cout << "The average of " << num1 << ", " << num2 << ", " << num3 << " is: " << avg << endl;
    }
};

int main() {
    Average avg; 
    avg.calculateAverage(); 

    return 0;
}

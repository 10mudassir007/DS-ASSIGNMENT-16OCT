#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;
public:
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}
    void display() {
        if (imag >= 0)
            cout << real << " + " << imag << "i";
        else
            cout << real << " - " << -imag << "i";}
    Complex add(const Complex& other) {
        return Complex(real + other.real, imag + other.imag);}
    Complex subtract(const Complex& other) {
        return Complex(real - other.real, imag - other.imag);}
    Complex multiply(const Complex& other) {
        return Complex(
            real * other.real - imag * other.imag,
            real * other.imag + imag * other.real
        );}};
int main() {
    float r1, i1, r2, i2;

    cout << "Enter the real and imaginary parts of the first complex number: ";
    cin >> r1 >> i1;
    Complex c1(r1, i1);
    cout << "Enter the real and imaginary parts of the second complex number: ";
    cin >> r2 >> i2;
    
    Complex c2(r2, i2);
    Complex sum = c1.add(c2);
    Complex difference = c1.subtract(c2);
    
    Complex product = c1.multiply(c2);
    cout << "Sum: ";
    sum.display();
    cout << endl;
    cout << "Difference: ";
    difference.display();
    cout << endl;
    cout << "Product: ";
    product.display();
    cout << endl;
    return 0;
}

#include <iostream>


//struct Fraction {
class Fraction {
    public:
        void setNum(int num) {
            _num = num;
        }

        void setDen(int den) {
            _den = den;
        }

        void add(Fraction other) {
            if (_den == other._den) {
                _num += other._num;
            } else {
                _den *= other._den;
                _num = _num * other._den + other._num * _den;
            }
        }

        void print() {
            std::cout << _num << '/' << _den << std::endl;
        }

    private:
        int _num = 0;
        int _den = 1;
};

int main() {

    Fraction f1;
    f1.setNum(3);
    f1.setDen(6);
    f1.print();

    Fraction f2;
    f2.setNum(-1);
    f2.setDen(6);
    f2.print();

    f1.add(f2);
    f1.print();

    Fraction f3;
    f3.setNum(2);
    f3.print();

    f1.add(f3);
    f1.print();

    return 0;
}

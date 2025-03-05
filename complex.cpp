#include <iostream>

using namespace std;

class Complex
{
private:
    double Re;
    double Im;

public:
    Complex(double Real = 0,double Imaginary = 0){
        Re = Real;
        Im = Imaginary;
    }

    Complex operator+(Complex temp){

        return temp;
    }
    bool operator==(Complex temp){

        return true;
    }
    void operator=(Complex temp){
        
    }
    friend ostream& operator<<(ostream& fout,Complex temp){
        return fout;
    }
    friend istream& operator>>(istream& fin,Complex& temp){
        return fin;
    }
};

int main()
{

    return 0;
}
#include <iostream>

using namespace std;

class Complex
{
private:
    double Re;
    double Im;

public:
    Complex(double Real = 0, double Imaginary = 0)
    {
        Re = Real;
        Im = Imaginary;
    }

    Complex operator+(Complex temp)
    {
        Complex answer;
        answer.Re = this->Re + temp.Re;
        answer.Im = this->Im + temp.Im;
        return answer;
    }
    bool operator==(Complex temp)
    {
        return (this->Re == temp.Re && this->Im == temp.Im);
    }
    void operator=(Complex temp)
    {
        this->Re = temp.Re;
        this->Im = temp.Im;
    }
    friend ostream &operator<<(ostream &fout, Complex temp);
    friend istream &operator>>(istream &fin, Complex &temp);
};
ostream &operator<<(ostream &fout, Complex temp)
{
    fout << "(" << temp.Re << ";" << temp.Im << "i)" << endl;
    return fout;
}
istream &operator>>(istream &fin, Complex &temp)
{
    fin >> temp.Re >> temp.Im;
    return fin;
}

int main()
{
    Complex a, b;
    cout<<"Enter num a: ";
    cin>>a;
    cout<<"Enter num b: ";
    cin>>b;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "a == b : " << (a == b) << endl;
    cout<<"a + b = "<<(a+b)<<endl;
    Complex c = a;
    cout<<"c = "<<c<<endl;

    return 0;
}
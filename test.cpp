#include <iostream>
#include <string>
using namespace std;

class solution {

public:
    int A = {10};
    solution() = default;
    solution(int i) : A(i) {}
    int print(int i) { return Fac(i); }

private:
    int Fac(int);
};

class Television{
    static string type;

public:
    Television() = default;
    explicit Television(int l, int w) : length(l), width(w) {}
    void change(istream &s, int *scale){
        s >> *scale;
        cout << s.rdstate();
        return;
    }
    void changeLength(){
        change(std::cin, lpt);
    }

    void changeWidth(){
        change(std::cin, wpt);
    }
    int getArea(void){
        return length * width;
    }
private:
    int length;
    int width;
    int *lpt = &length, *wpt = &width;
};

class Get{
    public:
    int A;
    void getValue(istream &s){
        s >> A;
    }
    void printValue(ostream &o){
        o << A;
    }
};
string Television::type = "Samsung";
int main(){
    int A = {11};
    cin >> A;
    cout << A;
}

int solution::Fac(int i){
    return !(i - 1) ? i : i * Fac(i - 1);
}
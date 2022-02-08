#include <vector>
#include <algorithm>
#include <iostream>
#include <cassert>
using namespace std;
auto Fac(int) -> int;
int gcd(int, int);
istream Input(istream &);

struct Dataset{
    Dataset() = default;
    Dataset(int &s, int *p): number(s), id(*p) {}
    int number = 0;
    int id = 0;
};

int main(){
    cout << '1' - '0';
}

auto Fac(int integer)->int
    {
        return !(integer - 1) ? integer : integer * Fac(integer - 1);
}

auto gcd(int a, int b) -> int{  //Eculidean Algorithm (Recursive Version)
    return !b ? a : gcd(b, a % b);
}
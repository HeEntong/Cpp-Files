#include <iostream>
#include <cmath>
#define pi 3.141592653589793238462643383279502884
#define e 2.718281828459045
using namespace std;
long long Fac(int);
double Stirling(int);
int fastPow(int, int);

int main(){
    long long sum = {0};
    int n;
    for (int i = 1; i <= n; i++){
        sum += Fac(i);
    }
    cout << sum;
}

long long Fac(int integer){
    return !(integer - 1) ? integer : integer * Fac(integer - 1);
}

double Stirling(int n){
    return sqrt(2 * pi * n) * pow(n / e, n);
}

int fastPow(int expo, int base){
    if (!(expo - 1)){
        return base;
    }
    else{
        return expo % 2 ? base * fastPow(expo - 1, base) : fastPow(expo / 2, base) * fastPow(expo / 2, base);
    }
}
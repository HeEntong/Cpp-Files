#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int get_value();
int Fac(int);
bool Prime(int);

int main(){
    int N;
    cin >> N;
    vector<int> train;
    for (int i = 0; i < N; i++) {
        int j;
        cin >> j;
        train.push_back(j);
    }
    int count = { 0 };
    for (int i = 0; i < (int) train.size(); i++) {
        for (int j = 0; j < (int) train.size() - i - 1; j++) {
            if (train[j] > train[j + 1]) {
                swap(train[j], train[j + 1]);
                count++;
            }
        }
    }
    cout << count;
}

bool Prime(int integer) {
    int count = { 0 };
    for (static int i = 1; i <= integer; i++) {
        if (integer % i == 0) {
            count++;
        }
    }
    return (count == 2 ? true : false);
}

int get_value() {
    int integer;
    cin >> integer;
    return integer;
}

int Fac(int integer) {
    return (!(integer - 1) ? integer : integer * Fac(integer - 1));
}
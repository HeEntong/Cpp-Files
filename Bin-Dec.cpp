#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
#include <vector>
using namespace std;
const int digitMag = 16;
const double e = 2.718281828459045;
void Write(ifstream &i, ofstream &o);

int BinToDec(string);
void DecToBin_(int, vector<int> *);

int BinToDec(string binary){
    int Dec = {0};
    for (string::size_type i = 0; i < binary.size(); i++){
        Dec += binary[i] - '0' ? (int)pow(2, binary.size() - i - 1) : 0;
    }
    return Dec;
}

void DecToBin_VEC(int decimal, vector<int>*output){
    if (decimal){
    int cutoff = (int)(log(decimal) / log(2));
    (*output).push_back(cutoff);
    DecToBin_VEC(decimal - (int)pow(2, cutoff), output);
    }
    else{
        return;
    }
}

string DecToBin(int decimal){
    vector<int> VEC;
    vector<int> *pt = &VEC;
    DecToBin_VEC(decimal, pt);
    string binary(VEC[0] + 1, '0');
    for (vector<int>::size_type s = 0; s < VEC.size(); s++){
        binary[binary.size() - VEC[s] - 1] = '1';
    }
    return binary;
}


int main(){
    ifstream A("Input.txt");
    ofstream B;
    B.open("Output.txt");
    string K;
    while (getline(A, K )){
        B << BinToDec(K) << endl;
    }
    return 0;
}
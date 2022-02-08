#include <fstream>
#include <string>
using namespace std;

auto Read(ifstream &, ofstream &) -> void;
int main(){
    int A = 10;
    
}

auto Read(ifstream &in, ofstream &out) -> void{
    string A;
    while(getline(in, A)){
        out << A << endl;
    };
    return;
}
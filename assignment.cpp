// Requires Debugging :( 
#include <iostream>
#include <string>
#include <vector>
const int wordSize = 4;
using namespace std;
void Permutation(std::string [4], vector<string>*);

int main() {
    vector<string> Vec;
    vector<string>* pt;
    pt = &Vec;
    string word;
    cin >> word;
    char a[] = { word[0] }, b[] = { word[1] }, c[] = { word[2] }, d[] = { word[3] };
    string A = a, B = b, C = c, D = d;
    string List[] = { A, B, C, D };
    for (int i = 0; i < 4; i++) {
        Permutation(List, pt);
    }

}

void Permutation(string List[], vector<string>* pt) {
    if ((*pt).empty()) {
        for (int i = 0; i < 4; i++) {
            (*pt).push_back(List[i]);
        }
        for (auto s: (*pt)){
            cout << s << endl;
        }

    }
    else if ((*pt)[(*pt).size() - 1].length() == wordSize){
        return;
    }
    else {
        for (int i = 0; i < wordSize; i++) {
            for  (auto s: (*pt)){
                s += List[i];
            }
        }
    }
}
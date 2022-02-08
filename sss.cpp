#include <cstdio>
#include <exception>
#include <iostream>
#include <cassert>
#include <string>
#include <initializer_list>
using namespace std;
int Fac(int);
string::size_type findChar(const string &, char , string::size_type &);
void Demo(initializer_list<int>);
void Change(int *);

int main(int argc, char * argv[]){
    for (int i = 0; i < argc; i++)
    {
        cout << argv[i];
    }
        int (*P)(int);
    P = &Fac;
    cout << (*P)(11);
}

int Fac(int integer){
    return (integer == 1 ? integer : integer * Fac(integer - 1));
}

void Change(int *pt){
    *pt = 0;
}

string::size_type findChar(const string &s, char c, string::size_type & occurs){
    string::size_type ret = s.size();
    occurs = 0;
    for (decltype(ret) i = 0; i != s.size(); i++){
        if (s[i] == c){
            if (ret == s.size()){
                ret = i;
                ++occurs;
            }
        }
    }
    return ret;
}
void Demo(initializer_list<int> il){
    for (auto beg = il.begin(); beg != il.end(); beg++){
        cout << *beg << endl;
    }
}



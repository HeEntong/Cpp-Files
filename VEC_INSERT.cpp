#include <vector>
#include<cstdio>
using namespace std;
void VEC_Insert(vector<int>&, int, int);
void VEC_ListInsert(vector<int> &, vector<int> &, int);

void VEC_Insert(vector<int>&VEC, int element, int index)
{ // An inserting operation that requires linear time consumption
    int Mag = (int)VEC.size();
    VEC.push_back(VEC[Mag - 1]);
    for (int s = Mag - 1; s >= index + 1; s--){
        VEC[s] = VEC[s - 1];
    }
    VEC[index] = element;
    return;
}

void VEC_ListInsert(vector<int>&VEC, vector<int>&iVEC, int index){
    int Mag = (int)VEC.size();
    for (int s = 0; s < (int)iVEC.size(); s++){
        VEC.push_back(VEC[Mag - 1]);
    }
    int iMag = (int)iVEC.size();
    for (int s = iMag + Mag - 1; s >= index + iMag; s--){
        VEC[s] = VEC[s - iMag];
    }
    for (int s = index; s <= index + iMag - 1; s++){
        VEC[s] = iVEC[s - index];
    }
    return;
}

int main(){
    vector<int> VEC{1, 5, 1, 4};
    vector<int> iVEC{1, 4};
    VEC_ListInsert(VEC, iVEC, 1);
    for (auto s: VEC){
        printf("%d \n", s);
    }
}
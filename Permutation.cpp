#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
bool find(int, vector<int>);
void Permutation(vector<vector<int>> &, vector<int> );
void print(vector<vector<int>>);

bool find(int target, vector<int> Vec){
    for (auto iter = Vec.begin(); iter != Vec.end(); iter ++){
        if (*iter == target){
            return true;
        }
    }
    return false;
}
void Permutation(vector<vector<int>> & Vec,vector<int> nums){
    if (Vec.empty()){
        for (auto s: nums){
            vector<int> Num = {s};
            Vec.push_back(Num);
        }
        Permutation(Vec, nums);
    }
    else if (Vec[0].size() == nums.size()){
        return;
    }
    else{
        vector<vector<int>> tempVec;
        for (auto a : nums){
            for (auto b : Vec){
                if (!find(a, b)){
                    vector<int> tempA, tempB = b, tempAB, tempBA = b;
                    tempA.push_back(a); tempAB.push_back(a);
                    tempA.insert(tempA.begin(), tempB.begin(), tempB.end());
                    tempB.insert(tempB.begin(), tempAB.begin(), tempAB.end());
                    tempVec.push_back(tempA);
                    tempVec.push_back(tempB);
                }
            }
        }
        Vec = tempVec;
        Permutation(Vec, nums);
    }
}

void print(vector<vector<int>> nums){
    for (auto s : nums){
        for (auto k : s){
            cout << k << ' ';
        }
        cout << endl;
    }
}

int main(){
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    vector<vector<int>> res;
    Permutation(res, nums);
    sort(res.begin(), res.end());
    res.erase(unique(res.begin(), res.end()), res.end());
    print(res);
}
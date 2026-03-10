#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    vector<vector<int>> task;
    task.push_back({1,3});
    task.push_back({2,4});
    task.push_back({10,11});
    task.push_back({10,12});
    task.push_back({8,9});
    sort(task.begin(), task.end(), [](auto &a, auto &b){
        return (b[1]-b[0])<(a[1]-a[0]);
    });
    int curr = 0;
    int res = 0;
    for(int i = 0;i<task.size();i++){
        int act = task[i][0];
        int mini = task[i][1];
        if(curr<mini){
            res+=mini-curr;
            curr = mini;
        }
        curr-=act;
    }
    cout << res;
}
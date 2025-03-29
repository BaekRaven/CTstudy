#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int,string> a,pair<int,string> b)
{
    return a.first < b.first;
}
int main() {  
    int n;
    cin >> n;
    vector<pair<int, string>> v;

    int age;
    string name;

    for(int i=0; i<n; i++){
        cin >> age >> name;
        v.push_back(make_pair(age,name));
    }
    stable_sort(v.begin(), v.end(), compare);
    //동일한 값에 대해 기존 순서가 보장되는 정렬
    for(int i=0; i<n; i++){
        cout << v[i].first << " " << v[i].second <<"\n";
    }
}
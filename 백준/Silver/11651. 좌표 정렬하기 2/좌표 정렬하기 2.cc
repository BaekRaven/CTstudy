#include <iostream>
#include <algorithm>
using namespace std;

bool compare(pair <int,int> a,pair <int,int> b){
    if(a.second < b.second)
        return true;
    else if(a.second == b.second){
        if(a.first < b.first)
            return true;
        else
            return false;
    }
    else
        return false;
}
int main() {  
    int n;
    cin >> n;
    pair <int,int> p[n];
    for(int i=0; i<n; i++){
        cin >> p[i].first >> p[i].second;
    }
    sort(p, p+n, compare);
    for(int i=0; i<n; i++){
        cout << p[i].first << " " << p[i].second  << "\n";
    }
}
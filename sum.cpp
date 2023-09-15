#include <iostream>
#include <string>
#include <sstream>
#include <exception>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main(){
    vector<long long>v;
    int n;
    cin>>n;
    long long val{0};
    for (int i = 0; i < n; i++)
    {
        cin>>val;
        v.push_back(val);
    }
    cout<<"Sum: "<<accumulate(v.begin(),v.end(),0LL);
    
}
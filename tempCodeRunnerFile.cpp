#include <iostream>
#include <string>
#include <sstream>
#include <exception>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>

using namespace std;


int main(){
    int t;
    while (t--)
    {
        long long n;
        int count{0},consec{1};
        cin>>n;
        vector<long long> v1;
        vector <int> res;
        for (int i = 0; i < n/2; i++)
        {
            if(n%i==0){
                v1.push_back(i);
                if(i==v1[v1.size() -2]+1)
                {
                consec++;
                }
                else{
                    res.push_back(consec);
                    consec =1;
                }
            }
        }
        cout<<*max_element(res.begin(),res.end())<<endl;
    }
    
    return EXIT_SUCCESS;
}
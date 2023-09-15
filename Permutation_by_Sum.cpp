#include <iostream>
#include <string>
#include <sstream>
#include <exception>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main(){
    int t;
    cin>>t;
    vector<int> v1;
    int n,l,r,s;
    while(t--){
        cin>>n>>l>>r>>s;
        v1.resize(n);
        for (int i = 1; i < n+1; i++)
        {
            v1[i-1]= i;
        }

        int possible = 0;
        do
        {
            if (accumulate(v1.begin() + l -1,v1.begin()+r,0)==s)
            {
                possible =1;
                break;
            }
        }while (next_permutation(v1.begin(),v1.end()));
        if(possible){
            for (int i = 0; i < n; i++)
            {
                cout<<v1[i]<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    
    }
}
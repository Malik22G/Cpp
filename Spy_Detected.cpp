#include <iostream>
#include <string>
#include <sstream>
#include <exception>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        int size;
        cin>>size;
        vector<int> v;
        for (int j = 0; j < size; j++)
        {
            int val;
            cin>>val;
            v.push_back(val);
        }
        vector <int> j;
        j = v;
    sort(v.begin(),v.end());
    int count1,count2;
    int unique;
    for (int k = 0; k < size; k++)
    {
        if (v[k]==v[k+1])
        {
            count2++;
        }
        else{
            count1++;
            if(v[k]!=v[k+1] && v[k]!=v[k-1])
            unique = v[k];
        }
    }
    std::cout<<(find(j.begin(),j.end(),unique) - j.begin()) + 1<<endl;
    }
    

    
}
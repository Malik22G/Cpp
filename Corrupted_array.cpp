#include <iostream>
#include <string>
#include <sstream>
#include <exception>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;


int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int size_a,possible{0};
        cin>>size_a;
        vector <int> v1;

        for (int j = 0; j < size_a +2; j++)
        {
            int val;
            cin>>val;
            v1.push_back(val);
        }

        vector <long long> v3_sum,v4_sum;
        sort(v1.begin(),v1.end());
        long long sum_an1{0},sum_an2{0};
        
        sum_an1 = accumulate(v1.begin(),v1.end()-1,0LL);
        sum_an2 = accumulate(v1.begin(),v1.end(),0LL) - v1[v1.size()-2];

            for (int i = 0; i < v1.size(); i++)
            {
                if(i!=v1.size()-1){
                v3_sum.push_back(sum_an1 -v1[i]);}
                if(i!=v1.size()-2){
                v4_sum.push_back(sum_an2 - v1[i]);}
            }
            
            for (int l = 0; l < v3_sum.size(); l++)
            {
                if(v3_sum[l] == v1[v1.size() -1]){
                
                    v1.erase(v1.begin() +l);
                    possible =1;
                    break;
                }

                if (v4_sum[l] == v1[v1.size() -2])
                if(!(l ==v4_sum.size()-1)){
                {
                    v1.erase(v1.begin() +l);
                    possible =1;
                    break;
                }}
                else{
                    v1.erase(v1.begin() +l +1);
                    possible =1;
                    break;
                }
            }
            v1.pop_back();
        if(possible){
        for (int i = 0; i < v1.size(); i++)
        {
            cout<<v1[i]<<" ";
        }
        cout<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
        }
        
       
       
       
        // if (sum_an == v1[size_a+1])
        // {
        //     v1.erase(v1.end()-2,v1.end());
        //     for (int l = 0; l < size_a; l++)
        //     {
        //         cout<<v1[l]<<" ";
        //     }
        //     cout<<endl;
        // }
        // else if (sum_an == v1[size_a])
        // {
        //     v1.erase(v1.end()-2,v1.end());
        //     for (int l = 0; l < size_a; l++)
        //     {
        //         cout<<v1[l]<<" ";
        //     }
        //     cout<<endl;
        // }
        // else{
        //     cout<<"-1"<<endl;
        // }
        
    }
    

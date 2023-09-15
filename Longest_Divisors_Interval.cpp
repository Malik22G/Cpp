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
    cin>>t;
    while (t--)
    {
        long long n;
        int i{1};
        cin>>n;

        while(n%i==0){
            i++;
            }
            // if(n%i==0){
            //     v1.push_back(i);
            //     if (v1.size() >1)
            //     {
            //         if(i==v1[v1.size() -2]+1 )
            //     {
            //     consec++;
            //     }
            //     else{
            //         res.push_back(consec);
            //         consec =1;
            //     }
            // }
            //     }
                
                cout<<i-1<<endl;
        }
        
        // for (int i = 0; i < v1.size(); i++)
        // {
        //     cout<<v1[1]<<" ";
        // }
      
    
    return EXIT_SUCCESS;
}
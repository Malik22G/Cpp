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
        int n;
        double count{0};
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            int student;
            cin>>student;
            if(student == i+1){
                count++;
            }
        }
        cout<<ceil(count/2)<<endl<<endl; 
    }
    
    return EXIT_SUCCESS;
}

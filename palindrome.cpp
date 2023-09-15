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
    for (int i = 0; i < t; i++)
    {
        int count_one{0},count_zero{0}, not_possible{0};
        cin>>count_zero>>count_one;
    int len = count_zero + count_one;

        vector<char> pld;
        pld.resize(len);
        string s;
        cin>>s;
        for (int i = 0; i < s.length(); i++)
        {
           pld[i] = s[i];
        }
        
        for (int j = 0 ; j < len; j++)
        {
            if (pld[j]=='1')
            {
                count_one--;
            }
            if (pld[j]=='0')
            {
                count_zero--;
            }
        }


            for(int x=0;x<len;x++)
            {
                if (pld[x]=='?' && pld[len -x-1] !='?')
            {
                 pld[x] = pld[len -x-1];
                    if(pld[len - x-1] =='1'){
                        count_one--;
                    }
                    else{
                        count_zero--;
                    }
            }
            }
            
            
            for (int j = 0; j < len; j++)
            {
                if(pld[j] == '?' && pld[len -j -1] == '?' && count_zero >=2 && j!=len-j-1){
                    pld[j] = '0';
                    pld[len-j-1]='0';
                    count_zero = count_zero -2;
}
            else if(pld[j] == '?' && pld[len -j-1] == '?'&& count_one >=2 &&j!=len-j-1){
                    pld[j] = '1';
                    pld[len-j-1]='1';
                    count_one = count_one -2;
                }
            else if((count_one ==1 || count_zero==1) && (j-(len -j-1)==-1 || j-(len -j-1)==1)){
                not_possible =1;
            }
                if (j==len-j-1)
                {
                    if (count_one==1)
                    {
                        pld[j] = '1';
                    }
                    if(count_zero == 1){
                        pld[j]= '0';
                    }
                    
                }
            
            }
            int printing = 1;
            for (int i = 0; i < len; i++)
            {
                if (pld[i]!=pld[len-i-1] || count_zero<0 || count_one<0)
            {
                not_possible=1;
            }
            }
            
            
            
              for (int i = 0; i < len; i++)
            {
                if (pld[i]!=pld[len-i-1] || not_possible)
                    {
                        not_possible =1;
                        printing = 0;
                        cout<<"-1";
                        break;
                    }
            }
            if(printing){
            for (int i = 0; i < len; i++)
            {
                    cout<<pld[i];
            }
            }
                
                cout<<endl;
            
                

    

}
}
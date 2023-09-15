#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    for (int i = 0; i < t; i++)
    {
        int count_one =0,count_zero=0, not_possible=0;
        scanf("%d %d",&count_zero,&count_one);
    int len = count_zero + count_one;

        char pld[len];
        scanf("%s",&pld);
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
            if(!(count_zero +count_one)){
                not_possible =1;
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
              for (int i = 0; i < len; i++)
            {
                if (pld[i]!=pld[len-i-1] || not_possible)
                    {
                        not_possible =1;
                        cout<<"-1";
                        break;
                    }
                else{
                cout<<pld[i];
                }
            }
                cout<<endl;
            
                

    

}
}
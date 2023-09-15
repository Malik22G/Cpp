#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        int str_x[4];
        int str_y[4];
        int count = 0;
        for (int k = 0; k < n; k++)
        {
            char s[n];
            scanf("%s", &s);
            for (int h = 0; h < n; h++)
            {
                if (s[h] == (char)'*')
                {
                    str_x[count] = k;
                    str_y[count] = h;
                    count++;
                }
            }
        }
        if (str_x[0] == str_x[1])
        {
            str_y[2] = str_y[0];
            str_x[2] = (str_x[0] == n - 1) ? str_x[0] - 1 : str_x[0] + 1;
            str_y[3] = str_y[1];
            str_x[3] = (str_x[0] == n - 1) ? str_x[1] - 1 : str_x[1] + 1;
        }
        else if (str_y[0] == str_y[1])
        {
            str_x[2] = str_x[0];
            str_y[2] = (str_y[0] == n - 1) ? str_y[0] - 1 : str_y[0] + 1;
            str_x[3] = str_x[1];
            str_y[3] = (str_y[0] == n - 1) ? str_y[1] - 1 : str_y[1] + 1;
        }
        else
        {

            str_x[2] = str_x[0];
            str_y[2] = str_y[1];
            str_x[3] = str_x[1];
            str_y[3] = str_y[0];
        }
        for (int z = 0; z < n; z++)
        {
            for (int a = 0; a < n; a++)
            {
                int star = 0;
                for (int c = 0; c < 4; c++)
                    if (str_x[c] == z && str_y[c] == a)
                    {
                        star = 1;
                        break;
                    }
                printf("%s", star ? "*" : ".");
            }
            printf("\n");
        }
    }
    return 0;
}
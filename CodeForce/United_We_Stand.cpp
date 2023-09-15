#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        vector<int> a, b, c;
        int l;
        cin >> l;
        for (int i = 0; i < l; i++)
        {
            int num;
            cin >> num;
            a.push_back(num);
        }
        if (a.size() == 2 && a[0] % a[1] != 0)
        {
            b.push_back(a[0]);
            c.push_back(a[1]);
        }
        else
        {
            for (int j = 0; j < a.size(); j++)
            {
                int doable = 1;
                for (int k = 0; k < a.size(); k++)
                {
                    if (a[k] % a[j] != 0 && j != k)
                    {
                        c.push_back(a[j]);
                        doable = 0;
                        break;
                    }
                }
                if (doable)
                {
                    b.push_back(a[j]);
                }
            }
        }

        if (b.size() != 0 && c.size() != 0)
        {
            cout << b.size() << " " << c.size() << endl;
            for (int i = 0; i < b.size(); i++)
            {
                cout << b[i] << " ";
            }
            cout << endl;
            for (int i = 0; i < c.size(); i++)
            {
                cout << c[i] << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }

    return EXIT_SUCCESS;
}
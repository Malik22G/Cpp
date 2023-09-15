#include <algorithm>
 
#include <iostream>
#include <vector>

using namespace std;

int solution(std::vector<std::string> &R)
{
    int p_x = 0, p_y = 0;
    int row = 0, col = 0;
    int w_r = 1, w_d = 1;
    int w_l = 0, w_u = 0;
    int i = 0, j = 0;
    int count = 0;
    int done = 0;
    vector <pair <int,int>> turn;


    while (1)
    {
        if (w_r)
        {
            for (; j < R[i].length(); j++)
            {
                if (R[i][j] == 'X' || j == R[i].length() -1)
                {
                    w_r = 0;
                    w_d = 1;
                    if(find(turn.begin(),turn.end(),make_pair(j,i))!=turn.end()){
                        done =1;
                        break;
                    }
                    turn.push_back(make_pair(j,i));
                    break;
                }
                else if(j == R[i].length() -1){
                    w_d = 1;
                    w_r=0;
                    if(find(turn.begin(),turn.end(),make_pair(j,i))!=turn.end()){
                        done =1;
                        break;
                    }
                    turn.push_back(make_pair(j,i));
                }
                count++;
            }
        }

        if (w_d)
        {
            for (; i < R[i].size(); i++)
            {
                if (R[i][j] == 'X')
                {
                    w_l = 1;
                    w_d=0;
                    if(find(turn.begin(),turn.end(),make_pair(j,i))!=turn.end()){
                        done =1;
                        break;
                    }
                    turn.push_back(make_pair(j,i));
                    break;
                }
                else if(i == R[i].size() -1){
                    w_l = 1;
                    w_d=0;
                    if(find(turn.begin(),turn.end(),make_pair(j,i))!=turn.end()){
                        done =1;
                        break;
                    }
                    turn.push_back(make_pair(j,i));
                }
                count++;
            }
        }

        if (w_l == 1)
        {
            for (; j >= 0; j--)
            {
                if (R[i][j] == 'X')
                {
                    w_u = 1;if(find(turn.begin(),turn.end(),make_pair(j,i))!=turn.end()){
                        done =1;
                        break;
                    }
                    turn.push_back(make_pair(j,i));
                    break;
                }
                else if(j == 0){
                    w_u = 1;
                    w_l=0;if(find(turn.begin(),turn.end(),make_pair(j,i))!=turn.end()){
                        done =1;
                        break;
                    }
                    turn.push_back(make_pair(j,i));
                }
                count++;
            }
        }

        if (w_u == 1)
        {
            for (; i >= 0; i--)
            {
                if (R[i][j] == 'X')
                {
                    w_r = 1;
                    if(find(turn.begin(),turn.end(),make_pair(j,i))!=turn.end()){
                        done =1;
                        break;
                    }
                    turn.push_back(make_pair(j,i));
                    break;
                }
                else if(i == 0){
                    w_r = 1;
                    w_u=0;
                    if(find(turn.begin(),turn.end(),make_pair(j,i))!=turn.end()){
                        done =1;
                        break;
                    }
                    turn.push_back(make_pair(j,i));
                }
                count++;
            }
        }
        if(done)
        break;
    }

    return count;
}




int main()
{
    // Example usage of the solution function
    std::vector<std::string> grid = {
        "."};

    int result = solution(grid);
    std::cout << "Number of steps needed: " << result << std::endl;

    return 0;
}

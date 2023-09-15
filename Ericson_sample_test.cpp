

#include <iostream>
#include <vector>

using namespace std;

int solution(std::vector<std::string> &R) {
    int p_x = 0, p_y = 0;
    int row = 0, col = 0;
    int w_r = 1, w_d = 1;
    int w_l = 0, w_u = 0;
    int i = 0, j = 0;
    int count = 0;

    while (1) {
        for (; i < R.size(); i++) {
            if (w_r) {
                for (; j < R[i].length(); j++) {
                    if (R[i][j] == 'X') {
                        col = j;
                        w_r = 0;
                        w_d = 1;
                        break;
                    }
                    count++;
                    w_d=1;
                }
            }

            if (R[i][j] == 'X') {
                count++;
                w_l = 1;
            }

            if (w_l == 1) {
                for (; j >= 0; j--) {
                    if (R[i][j] == 'X' || j == 0) {
                        w_u = 1;
                        break;
                    }
                    count++;
                    w_u=1;

                }
            }

            if (w_u == 1) {
                for (; i >= 0; i--) {
                    if (R[i][j] == 'X' || i == 0) {
                        w_r = 1;
                        break;
                    }
                    count++;
                    w_r=1;
                }
            }
        }

        break;
    }

    return count;
}

int main() {
    // Example usage of the solution function
    std::vector<std::string> grid = {
        "....X",
        "..X..",
        ".....",
        ".X...",
        "....."
    };

    int result = solution(grid);
    std::cout << "Number of steps needed: " << result << std::endl;

    return 0;
}

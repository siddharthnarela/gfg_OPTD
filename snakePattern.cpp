#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> snakePattern(vector<vector<int>> matrix) {
        bool check = false;
        vector<int> vec;

        for (int i = 0; i < matrix.size(); ++i) {
            if (check) {
                for (int j = (int)matrix.size() - 1; j >= 0; --j) {
                    vec.push_back(matrix[i][j]);
                }
            } else {
                for (int j = 0; j < (int)matrix.size(); ++j) {
                    vec.push_back(matrix[i][j]);
                }
            }
            check = !check;
        }
        return vec;
    }
};
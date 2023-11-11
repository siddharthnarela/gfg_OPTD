#include<iostream>
#include<vector>
using namespace std;

class Solution
{
    public:
    //Function to return sum of upper and lower triangles of a matrix.
    vector<int> sumTriangles(const vector<vector<int> >& matrix, int n)
    {
        vector<int> vec;
        int sumu=0,suml=0;
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                
                if (i<=j) {
                    sumu+= matrix[i][j];
                }
                if (i>=j) {
                    suml+= matrix[i][j];
                }

            }
        }
        vec.push_back(sumu);
        vec.push_back(suml);
        
        return vec;
    }
};

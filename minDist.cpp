#include<iostream>
#include<vector>
using namespace std;

class Solution
{
  public:
    int minDist(int a[], int n, int x, int y) {
        vector<int> vecx;
        vector<int> vecy;
        vector<int> ans;
        int dis=0, xp=0, yp=0;
        
        
        
        for (int i=0; i<n; i++) {
            if (a[i]==x) {
                
                vecx.push_back(i);
            }
        }
        
        for (int i=0; i<n; i++) {
            if (a[i]==y) {
                
                vecy.push_back(i);
            }
        }
        
        if (vecx.size()==0 || vecy.size()==0 ){
            return -1;
        }
        
        for (int i=0; i<vecx.size(); i++) {
            int a;
            for (int j=0; j<vecy.size(); j++) {
                a = vecx[i] - vecy[j];
                ans.push_back(abs(a));
            }
        }
        
        dis = *min_element(ans.begin(),ans.end());
//        dis = *min_element(vecy.begin(),vecy.end()) - *min_element(vecx.begin(),vecx.end()) ;
//        dis = abs(dis);
        return dis;
    }
};

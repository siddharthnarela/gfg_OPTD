#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    /*Function to count zeros in each column
    * N : Number of rows and columns in array
    M is the matrix that is globally declared
    */
    int columnWithMaxZeros(vector<vector<int>>arr,int N){
        
        // Your code here
        int f,y=0;
        vector<int> vec;
        int coun=0;
        for (int j=0; j<N; j++) {
            coun=0;
            for (int i=0; i<N; i++) {
                if (arr[i][j]==0) {
                    coun++;
                }
            }
            vec.push_back(coun);
        }
        
        f = *max_element(vec.begin(), vec.end());
        
        for (int i=0; i<vec.size(); i++) {
            if (f==vec[i]) {
                y=i;
                break;
            }
        }
        if (f==0) {
            y=-1;
        }
        return y;
    }
};


//{ Driver Code Starts.
int main() {
	
	int testcase;
	
	cin >> testcase;
	
	while(testcase--){
	    int N;
	    cin >> N;
	    vector<vector<int>>arr(N,vector<int>(N));
	    // Taking elements input into the matrix
	    for(int i = 0;i<N;i++){
	        for(int j = 0;j<N;j++){
	            int x;
	            cin >> x; 
	            arr[i][j]=x;
	        }
	    }
	    Solution ob;
	    cout << ob.columnWithMaxZeros(arr,N) << endl;
	}
	
	return 0;
}
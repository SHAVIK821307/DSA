#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
	int is_bleak(int n)
	{
        // int num1=n;
        int cnt=0;
        for(int i=n-log2(n)+1;i<n;i++){

        cnt=0;
	    while(i>0){
            if(i&1 == 1){
                cnt++;
            }
            i=i>>1;
        }
        if(i+cnt == n){
            return 0;
        }
        }
        return 1;
	}
};


//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	Solution ob;
    	int ans = ob.is_bleak(n);
    	cout << ans << "\n";
    }
	return 0;
}
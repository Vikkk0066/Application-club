//Task_2 (Jan 1, 2023)
//Find the smallest and second smallest element in an array


//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<int> minAnd2ndMin(int a[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++) 
            cin >> a[i];

        vector<int> ans = minAnd2ndMin(a, n);
        if (ans[0] == -1)
            cout << -1 << endl;
        else 
            cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}
// } Driver Code Ends


vector<int> minAnd2ndMin(int a[], int n) {
    int i,smallest=INT_MAX,secondsmallest=INT_MAX;
    for(i=0;i<n;i++)
    {
        if(a[i]<smallest)
        {
            secondsmallest=smallest;
            smallest=a[i];
        }
        if(a[i]<secondsmallest && a[i]!=smallest)
        {
            secondsmallest=a[i];
        }
    }

vector<int> v;
if(secondsmallest!=INT_MAX)
{
    v.push_back(smallest);
    v.push_back(secondsmallest);
}
else{
    v.push_back(-1);
}
return v;
}
  
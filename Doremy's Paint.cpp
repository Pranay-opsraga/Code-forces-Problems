#include <bits/stdc++.h>
using namespace std;


int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;
        vector<int>arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        unordered_map<int,int>mpp;

        for(auto it : arr){
            
            mpp[it]++;
        }

        if(mpp.size() > 2){

         cout << "NO" << endl;
         continue;
        }
        if(mpp.size() == 1){
            cout << "YES" << endl;
            continue;
        }

        if(mpp.size() == 2){
             auto it = mpp.begin();
             int c1 = it->second;
             it++;
             int c2 = it->second;

             if(abs(c2-c1) <= 1) cout << "YES" << endl;
             else cout << "NO" << endl;
        }
    }
    return 0;
}

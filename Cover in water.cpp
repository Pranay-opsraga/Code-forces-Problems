#include <iostream>
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

          string s;
          cin >> s;
          int count = 0;
          int sum = 0;
          int maxi = 0;

          for (int i = 0; i < n; i++)
          {
               if (s[i] == '.')
               {
                    count++;
                    maxi = max(count, maxi);
                    sum++;
               }
               else
               {
                    count = 0;
               }
          }

          int ans;
          if (maxi >= 3)
               ans = 2;
          else
               ans = sum;

          cout << ans << '\n';
     }
     return 0;
}

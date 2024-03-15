#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string s;
    while (t > 0)
    {
        int d = t % 10;
       
        s.insert(0, to_string(d));
        t /= 10;
    }
  
        while(s.size()!=4){
            s.insert(0, 1, '0');
        }
       
   
     cout<<s;

    return 0;
}



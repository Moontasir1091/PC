#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    
    string rev = s1;  
    reverse(rev.begin(), rev.end());  

    
    if (rev == s2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    
}

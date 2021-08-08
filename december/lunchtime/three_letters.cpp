//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>
#define int long long int
#define count_1 __builtin_popcountll
#define pii pair<int, int>
#define vpii vector<pair<int, int>>
#define endl "\n"
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"

using namespace std;
void solved_by_satyapsr13()
{
    string s;
    cin >> s; //s.find('^');//! int num = stoll(s);
    int size = s.size();
    int arr[26] = {0};
    for (int i = 0; i < size; ++i)
    {
        arr[s[i] - 'a']++;
    }
    int one = 0;
    int multi = 0;
    for (int i = 0; i < 26; ++i)
    {
        if (arr[i] == 1)
        {
            one++;
            /* code */
        }
        else if(arr[i]!=0)
        {

            multi+=arr[i];
        }
    }
    // multi /=2 ;
    // db(multi);
    // db(size);
    one += multi % 2;

    cout << min(one, multi/2) << endl;
    return;
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int Test_Cases;
    cin >> Test_Cases;
    while (Test_Cases--)
    {
        solved_by_satyapsr13();
    }
    return 0;
}
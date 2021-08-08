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
    int n;
    cin >> n;
    string s;
    cin >> s; //s.find('^');//! int num = stoll(s);
    int sizes = s.size();
    int ss = 0;
    int ssp = 0;

    string p;
    cin >> p; //s.find('^');//! int num = stoll(s);
    int sizep = p.size();
    if (s == p)
    {
        cout << "Yes" << endl;
        return;
        /* code */
    }
    int arr[n] = {0};
    int arr1[n] = {0};
    if (s[sizes - 1] == '1')
    {
        arr[n - 1] = 1;
        /* code */
    }
    if (p[sizes - 1] == '1')
    {
        arr1[n - 1] = 1;
        /* code */
    }
    for (int i = n - 2; i >= 0; --i)
    {
        if (s[i] == '1')
        {
            arr[i] = arr[i + 1] + 1;
            /* code */
        }
        else
        {
            arr[i] = arr[i + 1];
        }
        if (p[i] == '1')
        {
            arr1[i] = arr1[i + 1] + 1;
            /* code */
        }
        else
        {
            arr1[i] = arr1[i + 1];
        }
    }
    if (arr[0]!=arr1[0])
    {cout << "No"<<endl;
    return;
        /* code */
    }
    
    for (int i = n - 1; i >0; --i)
    {
        if (arr1[i] < arr[i])
        {
            cout << "No" << endl;
            return;
            /* code */
        }
    }
     for (auto it:arr)
        {
            cout << it;
        }cout <<"\n" ;
        for (auto it : arr1)
        {
            cout << it;
        }
        cout << "\n";

        cout << "Yes" << endl;
        return;

        /* code */
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
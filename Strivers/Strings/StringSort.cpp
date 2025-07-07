#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> strs={"deaa","dev","devaganesh","deoboss","deol"};
    sort(strs.begin(),strs.end());
    for(auto str:strs)
    {
        cout<<str<<" ";
    }

    return 0;
}
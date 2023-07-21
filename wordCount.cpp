#include <bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
cin.ignore();
string sentence;
getline(cin, sentence);
string word;
stringstream ss(sentence);
map<string, int> mp;
while (ss>>word)
{
    // cout<<word<<endl;
    mp[word]++;
}
// for(auto it= mp.begin(); it!= mp.end(); it++)
// {
//     cout<<it->first<<" ";
//     cout<<it->second<<endl;
// }
cout<<mp["Ratul"]<<endl;

    return 0;
}
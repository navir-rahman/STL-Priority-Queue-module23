#include <bits/stdc++.h>
using namespace std;

int main(){

map<string, int> mp;
mp["sakib0"]=79; //0(logN)
mp["sakidfb0"]=759; //0(logN)
mp["sakisadfb0"]=739; //0(logN)

for(auto it = mp.begin(); it != mp.end(); it++){
    cout<<it->first<<" ";
    cout<<it->second<<endl;
}
cout<<mp["salib0"];
    return 0;
}
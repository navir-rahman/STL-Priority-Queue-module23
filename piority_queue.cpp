#include <bits/stdc++.h>
using namespace std;

int main(){
// priority_queue<int> pq; // max first
priority_queue<int, vector<int>, greater<int>> pq; // min first
while (true)
{
    int c;
    cin>>c;
    if(c==0){
        int x;
        cin>>x;
        pq.push(x); // 0(logN)
    }else if (c== 1)
    {
        pq.pop(); //o(logN)

    }else if (c== 2)
    {
        cout<< pq.top()<<endl;// 0(1)
    }
    else{
        break;
    }
    
}


    return 0;
}
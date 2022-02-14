/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

class comp{
    public:
    bool operator()(const pair<int,int> &a,const pair<int,int> &b)
    {
        if(a.first != b.first)
        return a.first < b.first;
        return a.second < b.second;
    }
};
int main()
{
    /*priority_queue<pair<int,int>,vector<pair<int,int>>,comp> pq;
    pq.push({1,2});
    pq.push({4,5});
    while(!pq.empty())
    {
        cout<<pq.top().first<<" "<<pq.top().second<<endl;
        pq.pop();
    }*/
    set<pair<int,int>,comp> st;
    st.insert({2,3});
    st.insert({4,5});
    cout<<st.begin()->first<<" ";
    return 0;
}

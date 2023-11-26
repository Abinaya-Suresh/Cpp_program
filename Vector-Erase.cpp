#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int size,a,b,c,n,i,j;
    cin>>n;
    vector<int>v;
    for(i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }   
    cin>>a>>b>>c;
    v.erase(v.begin()+(a-1));
    v.erase(v.begin()+b-1,v.begin()+c-1);
    size=v.size();
    cout<<size<<endl;
    for(j=0;j<size;j++)
    {
        cout<<v[j]<<" ";
    }
    
    return 0;
}

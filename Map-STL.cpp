#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    map<string , int>Map;
    int q,no,mark;
    string name;
    cin>>q;
    for (int i=0;i<q;i++){
        cin>>no;
        if (no==1){
            cin>>name>>mark;
            if ( Map.find(name) == Map.end()){
                Map.insert(make_pair(name, mark));
            } else{
                int newmark =0;
                 newmark = mark + Map[name];
                Map[name] = newmark;
            }
        }
        else if (no==2){
            cin>>name;
            Map.erase(name);
            
        }
        else if (no == 3){
            cin >> name;
            if ( Map.find(name) == Map.end()){
                cout << "0" <<endl;
            } else{
                cout << Map[name]<<endl;
            }

        }
    }
    
    
    return 0;
}




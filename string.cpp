#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    string b;
    string d;
    cin>>a;
    cin>>b;
    cout<<a.length()<<" "<<b.length()<<endl;
    string c=a+b;
    cout<<c<<endl;
    d[0]=a[0];
    a[0]=b[0];
    b[0]=d[0];
    cout<<a+" "+b<<endl;
    
  
    return 0;
}


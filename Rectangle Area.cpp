#include <iostream>

using namespace std;

class Rectangle{
protected:
    int a,b;
public:
    void display(){
    cout<<a<<" "<<b<<endl;
}

};
class RectangleArea : public Rectangle{

    
public:
    void read_input(){
        cin>>a>>b;
    }
public:
    void display(){
        int area = a * b;
        cout<<area<<endl;
    }
    
};

int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();
    
    return 0;
}
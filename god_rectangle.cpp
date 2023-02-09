#include<iostream>
using namespace std;
class rectangle
{
    private:
    int length;
    int breadth;
    public:
    void setlength(int l)
    {
        if(l>=0)
        {
          length=l;
        }
        else
        {
            cout<<"Wrong input";
            _Exit(0);
        }
    }
    void setbreadth(int b)
    {
        if(b>=0)
        {
            breadth=b;
        }
        else
        {
            cout<<"Wrong input";
            breadth=0;
        }
    }
    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
};
int main()
{
    rectangle r;
    int x,y;
    cout<<"Enter length :";
    cin>>x;
    r.setlength(x);
    cout<<"Enter breadth :";
    cin>>y;
    r.setbreadth(y);
    cout<<"Area is "<<r.area()<<endl<<"Perimeter is :"<<r.perimeter();
}
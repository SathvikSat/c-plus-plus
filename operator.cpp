#include<iostream>

using namespace std;

class xy
{
        public:
        int x, y;
        xy():x(0), y(0) {}
        xy(int x, int y):x(x), y(y) {}

        xy operator+(xy& o)
        {
          xy e;
          e.x = (*this).x + o.x;
          e.y = (*this).y + o.y;
          return e;
        }

        xy operator++()
        {
            xy temp;
            temp.x = ++x;
            temp.y = ++y;
            return temp;
        }

        xy operator++(int)
        {
            xy temp(x+5, y+6);
            x++;
            y++;
            return temp;
        }

        void disp()
        {
            cout<<x<<" "<<y<<endl;
        }
};


int main()
{
    xy v = {1, 2};
    string msg = "sljdfkjdlfjdf";
    //xy n(1, 2);
    xy t = v++;
    t.disp();
    v.disp();
    msg += "sdfdfd";
}


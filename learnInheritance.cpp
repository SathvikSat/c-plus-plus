#include <iostream>
using namespace std;

class A
{
    private:
        int x, y, z;
    public:
        A():x{0}, y{0}, z{0}{}
        void set_x(int x1)
        {
            x = x1;
        }

        void set_y(int y1)
        {
            y = y1;
        }

        void set_z(int z1)
        {
            z = z1;
        }

        int get_x()
        {
            return x;
        }

        int get_y()
        {
            return y;
        }

        int get_z()
        {
            return z;
        }
};

class B: public A
{
    public:
        B(int l, int b)
        {
            set_x(l);
            set_y(b);
        }

    void area()
    {
        cout << get_x()*get_y() << endl;
    }

};

class C: public B
{
    public:
        C(int l, int b, int h):B(l, b)
        {
            set_z(h);   
        }

    void area()
    {
        cout << 2*(get_x()*get_y() + get_y()*get_z() + get_z()*get_x()) << endl;
    }

    void volume()
    {
        cout << get_x()*get_y()*get_z() << endl;
    }
};

int main()
{
    C c(2, 3, 4);
    c.area();
    c.volume();
}
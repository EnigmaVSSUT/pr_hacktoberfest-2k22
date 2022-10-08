#include<iostream>
using namespace std;
class class2;
class class1
{
    int a;
    public:
    void input(int m)
    {
        a=m;
    }
    void display()
    {
        cout<<"value 1 is"<<a;
    }
    friend void swap(class1 &x, class2 &y);
};
    class class2
    {
        int b;
        public:
        void input(int p)
        {
            b=p;
        }
        void display()
        {
            cout<<"value 2 is"<<b;
        }
        friend void swap(class1 &x, class2 &y);
    };
        void swap (class1 &x, class2 &y)
        {
            int temp = x.a;
            x.a = y.b;
            y.b = temp;
        }
        int main()
        {
            class1 c1;
            class2 c2;
            c1.input(10);
            c2.input(20);
            cout<<"\nbefore swapping\n";
            c1.display();
            c2.display();
            swap(c1,c2);
            cout<<"\nafter swapping\n";
            c1.display();
            c2.display();
            return 0;
        }
    

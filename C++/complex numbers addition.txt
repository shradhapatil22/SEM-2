#include<iostream>
using namespace std;
class complex
{
        float x,y;
    public:
        complex()
        {
            x=0;y=0;
        }
        complex(float real, float img)
        {
            x=real;y=img;
        }
        friend complex sum (complex,complex);
        friend void show (complex);
};
complex sum(complex c1,complex c2)
{
    complex c3;
    c3.x=c1.x+c2.x;
    c3.y=c2.x+c2.y;
    return(c3);
}
void show(complex c)
{
    cout<<c.x<<"+ i"<<c.y<<"\n";
}
int main()
{
    int a,b,c,d;
    cout<<"Enter a complex number"<<endl;
    cin>>a>>b;
    cout<<"Enter another complex number"<<endl;
    cin>>c>>d;
    complex C,A(a,b),B(c,d);
    C=sum(A,B);
    cout<<"A="<<endl;
    show(A);
    cout<<"B="<<endl;
    show(B);
    cout<<"Sum="<<endl;
    show(C);
}
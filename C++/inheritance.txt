#include<iostream>
using namespace std;
class Manager
{
    protected:
        string  name;
        int id;
        float basic;
    public:
        Manager(string n, int i, float b)
        {
            name=n;
            id=i;
            basic=b;

        }
        void disp()
        {
            cout<<"\n Manager details"<<endl;
            cout<<name<<"\t"<<id<<"\t"<<basic<<endl;
        }
};
class HRmanager: public Manager
{
    float gross,da,hra,ded;
    public:
        HRmanager(string n,int i,float b):Manager(n,i,b){}
        float computeGross()
        {
            da=0.7 *basic;
            hra=0.2*basic;
            ded=0.05*basic;
            gross=(basic+da+hra)-ded;
            return gross;
        }
        void disp()
        {
            Manager::disp();
            cout<<"DA="<<da<<endl;
            cout<<"HRA="<<hra<<endl;
            cout<<"Deductions="<<ded<<endl;
            cout<<"Gross salary="<<computeGross()<<endl;

        }

};


int main()
{
    Manager m("Rishab",20,60000);
    m.disp();
    HRmanager x("ZXC",20,60000);
    x.disp();

}
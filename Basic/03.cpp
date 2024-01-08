
// Pre post incre/decre operator

// Post incre/decre operator(i++/i--)


#include<iostream>
using namespace std;
int main()
{
    int i=4;
    int a=i++;
    // baad main incre/decre
    cout<<"i="<<i;
    cout<<"a="<<a;
    cout<<"\n"<<"\n";


    int j=5;
    int b=2;
    int sum=b+(j--);

    cout<<"sum ="<<sum;
    cout<<"j ="<<j;
}



#include<iostream>
int main()
{
    using namespace std;
    double arr[5]{21.4,32.1,23.4,45.2,37.4};
    double *pt=arr;
    ++pt;
    cout<<pt<<endl;
    int x;
    x=*pt++;
    cout<<x<<endl;
    cout<<*pt<<endl;
    int y;
    y=*(pt++);
    cout<<y<<endl;
    cout<<*pt<<endl;
    int z=++(*pt);
    cout<<z<<endl;
    cin.get();
    cin.get();
    return 0;
}
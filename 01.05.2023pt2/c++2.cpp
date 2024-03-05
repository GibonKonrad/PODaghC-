#include<iostream>
int main()
{
    using namespace std;
    double arr[5]{21.2,32.8,23.4,45.2,37.4};
    double *pt=arr;
    ++pt;
    double x=*++pt;
    cout<<x<<endl;
    ++*pt;
    cout<<*pt<<endl;
    (*pt)++;
    cout<<*pt<<endl;
    x=*pt++;
    cout<<x<<"\t"<<*pt;
    cin.get();
    cin.get();
    return 0;
}
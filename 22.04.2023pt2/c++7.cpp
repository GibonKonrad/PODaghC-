#include<iostream>
int main()
{
    using namespace std;
    double wages[3]{10000.0,20000.0,30000.0};
    short stacks[3]{3,2,1};

    double* pw=wages;
    short* ps=&stacks[0];

    cout<<"pw = "<<pw<<", *pw = "<<*pw<<endl;
    pw=pw+1;
    cout<<"dodaj do wskaznika pw: 1\n";
    cout<<"pw = "<<pw<<", *pw"<<*pw<<"\n\n";
    
    cout<<"ps = "<<ps<<", *ps = "<<*ps<<endl;
    ps=ps+1;
    cout<<"dodaj do wskznika ps 1: \n";
    cout<<"ps = "<<ps<<", *ps"<<*ps<<"\n\n";

    cout<<"dostep do dwocj elementow, zapis tablicowy\n";
    cout<<"stacks[0] = "<<stacks[0]
    <<", stacks[1] = "<<stacks[1]<<endl;
    cout<<"dostep do dwoch elementow, zapis wskaznikowqy\n";
    cout<<"*stacks = "<<*stacks
    <<", *(stacks+1)"<<*(stacks+1)<<endl;

    cout<<sizeof(wages)<<"wielkosc tablicy wages";
    cout<<'\n'<<sizeof(pw)<<"wielkosc wskaznika pw\n";
    cin.get();
    cin.get();
    return 0;
}
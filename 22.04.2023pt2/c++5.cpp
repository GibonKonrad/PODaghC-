#include<iostream>
int main()
{
    using namespace std;
        int nights=1001;
        int *pt=new int;
        *pt=1001;

        cout<<"wartosc nights = ";
        cout<<nights<<": polozenie = "<<&nights<<endl;
        cout<<"int";
        cout<<"wartosc = "<<*pt<<": polozenie"<<pt<<endl;

        double *pd=new double;
        *pd=10000001.0;

        cout<<"double: ";
        cout<<"wartosc: "<<*pd<<"polozenie: "<<pd<<endl;
        cout<<"polozenie wskaznika pd: "<<&pd<<endl;
        cout<<"wielkosc pt: "<<sizeof(pt);
        cout<<"wielkosc *pt: "<<sizeof(*pt)<<endl;
        cout<<"wielkosc pd: "<<sizeof(pd);
        cout<<"wielkosc *pd"<<sizeof(*pd)<<endl;
        cin.get();
        cin.get();
    return 0;
}
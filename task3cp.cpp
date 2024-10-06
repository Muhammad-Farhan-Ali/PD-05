#include<iostream>
#include<iomanip>
using namespace std;

double taxCalculator(double price,char code);

int x;

int main()
{
    char type;
    double price,total;
    

    cout<<"Enter the code for vehicle (M, E, S, V, T):";
    cin>>type;
    cout<<"Enter price of vehicle: $";
    cin>>price;

    total=taxCalculator(price ,type);
    if(x==0)
    {
    cout<<"Final price of vehicle of type "<<type<<" after applying tax is: $"<<fixed<<setprecision(2)<<total<<'\n';
    }

    return 0;
}
double taxCalculator(double price,char code)
{
    int tax_rate=0;
    if(code=='M')
    {
        tax_rate=6;
    }
    else if(code=='E')
    {
        tax_rate=8;
    }
    else if(code=='S')
    {
        tax_rate=10;
    }
    else if(code=='V')
    {
        tax_rate=12;
    }
    else if(code=='T')
    {
        tax_rate=15;
    }
    else
    {
        cout<<"Invlaid input!"<<'\n';
        x++;
    }

    return (price+(price*(tax_rate/100.0)));
}
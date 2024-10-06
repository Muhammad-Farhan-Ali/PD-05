#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

void pyramidVolume(double l,double w,double h,string unit);

int main()
{
    double length,width,height;
    string unit;

    cout<<"Enter length of pyramid (in meters):";
    cin>>length;
    cout<<"Enter width of pyramid (in meters):";
    cin>>width;
    cout<<"Enter height of pyramid (in meters):";
    cin>>height;
    cout<<"Enter the unit for desired output (millimeters,centimeters,meters,kilometers):";
    cin>>unit;

    pyramidVolume(length,width,height,unit);

    return 0;
}
void pyramidVolume(double l,double w,double h,string unit)
{
    double volume=((l*w*h)/3.0);
    if(unit=="meters")
    {
        cout<<"The volume of pyramid is: "<<fixed<<setprecision(6)<<(volume)<<" cubic meters";
    }
    else if(unit=="millimeters")
    {
        cout<<"The volume of pyramid is: "<<fixed<<setprecision(3)<<(volume*pow(1000,3))<<" cubic millimeters";
    }
    else if(unit=="centimeters")
    {
        cout<<"The volume of pyramid is: "<<fixed<<setprecision(3)<<(volume*pow(100,3))<<" cubic centimeters";
    }
    else if(unit=="kilometers")
    {
        cout<<"The volume of pyramid is: "<<fixed<<setprecision(3)<<(volume/(pow(1000,3)))<<" cubic kilometers";
    }
    else
    {
        cout<<"Invalid input!"<<'\n';
    }
}
#include<iostream>
#include<string>
using namespace std;

string projectTimeCalculation(int hours,int days,int workers);

int main()
{
    int hours,days,workers;
    string result;

    cout<<"Enter needed hours:";
    cin>>hours;
    cout<<"Enter the days the firm has:";
    cin>>days;
    cout<<"Enter the number of all workers:";
    cin>>workers;

    result=projectTimeCalculation(hours,days,workers);

    cout<<result<<'\n';

    return 0;
}
string projectTimeCalculation(int hours,int days,int workers)
{
    int hoursRemaining=days*(8+2);              //8+2 is used as 2 hours of overtime is necessary
    int training_time=hoursRemaining*0.10;
    
    hoursRemaining-=training_time;

    int total_time_for_project=workers*hoursRemaining;

    if(hours<total_time_for_project)
    {
        return "Yes! "+to_string(total_time_for_project-hours)+" hours left!";
    }
    else if(hours>total_time_for_project)
    {
        return "Not enough time! "+to_string(hours-total_time_for_project)+" hours needed!";
    }
    else
    {
        return "Yes! 0 hours left!";
    }
}
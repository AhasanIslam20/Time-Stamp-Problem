#include "timeStamp.h"
timeStamp::timeStamp()
{
     second = 0;
    minute = 0;
    hour = 0;
}
timeStamp::timeStamp(double s, double m, double h)
{
    second = s;
    minute = m;
    hour = h;
}
bool timeStamp::operator>(timeStamp t)
{
   if(((hour*3600)+(minute*60)+second)>((t.hour*3600)+(t.minute*60)+t.second))
        return true;
    else
        return false;
}
bool timeStamp::operator!=(timeStamp t)
{
   if((second==t.second)&&(minute==t.minute)&&(hour==t.hour))
    {
        return false;
    }
    else
        return true;
}
void timeStamp::print()
{
    cout << "Second: "<<second<<endl<<"Minute: "<<minute<<endl<<"Hour: "<<hour<< endl;
}


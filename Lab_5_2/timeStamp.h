
#include <iostream>
using namespace std;

class timeStamp
{
    public:
        timeStamp();
        timeStamp(double, double, double);
        bool operator > (timeStamp);
        bool operator  != (timeStamp);
        void print();


    protected:

    private:
        double second, minute, hour;

};

// TIMESTAMP_H

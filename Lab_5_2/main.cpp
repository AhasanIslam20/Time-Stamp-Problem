#include <iostream>
#include "timeStamp.h"
#include "sortedtype.cpp"
using namespace std;

int main()
{
    SortedType <timeStamp> st;
    timeStamp t1(15, 34, 23);
    timeStamp t2(13, 13, 02);
    timeStamp t3(43, 45, 12);
    timeStamp t4(25, 36, 17);
    timeStamp t5(52, 02, 20);

    st.InsertItem(t1);
    st.InsertItem(t2);
    st.InsertItem(t3);
    st.InsertItem(t4);
    st.InsertItem(t5);

    cout << "All Inserted Time's List : "<<endl;

    st.ResetList();
    for(int i=0; i<5; i++)
    {
        timeStamp t6;
        st.GetNextItem(t6);
        t6.print();
        cout<<endl;
    }

    timeStamp t7(25,36,17);
    st.DeleteItem(t7);
    st.ResetList();


    cout <<"After Deletinng: "<<endl;

    for(int i=0;i<st.LengthIs();i++)
    {

        timeStamp t6;
        st.GetNextItem(t6);
        t6.print();
        cout<<endl;
    }


}

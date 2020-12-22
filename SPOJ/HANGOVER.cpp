#include<iostream>
using namespace std;

int main()
{
    while(true)
    {
        float test=0, c;
        cin>>c;
        if(c==0.00)
            break;
        for(float i=2;;i++)
        {
            test += 1/(i);
            if(test>=c)
            {
                cout<<int(i-1)<<" card(s)"<<endl;
                break;
            }
        }
    }
    return 0;
}
//  Copyright © 2017 Dougy Ouyang. All rights reserved.

#include <iostream>

using namespace std;

int main()
{
    int n, s, ts, ts2=0;
    int add=1, add2;
    int i, j;
    
    cin >> n >> s;
    ts=s;
    
    for(i=n;i>0;i--)
    {
        add2=add, ts2=ts;
        while(ts2>=10)
            ts2-=9;
        for(j=n;j>i;j--)
            cout << "  ";
        for(j=0;j<i;j++)
        {
            cout << ts2 << " ";
            ts2+=add2;
            while(ts2>=10)
                ts2-=9;
            add2++;
        }
        cout << endl;
        add++, ts+=add;
    }
    
    return 0;
}

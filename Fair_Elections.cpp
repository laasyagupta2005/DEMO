#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int m,n,john_sum=0,jack_sum=0;
        cin>>m>>n;
        int john[1000],jack[1000];
        for (int i = 0; i < m; i++)
        {
            cin>>john[i];
            john_sum+=john[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>jack[i];
            jack_sum+=jack[i];
        }
        if (john_sum>jack_sum)
        {
            cout<<0<<endl;
            continue;
        }
        
        
            sort(john,john+m);
            sort(jack,jack+n);
            int j=n-1;
            int c=0;
            for (int i = 0; i < m; i++)
            {
                john_sum-=john[i];
                jack_sum-=jack[j];
                john_sum+=jack[i];
                jack_sum+=john[j];
                c++;
                j--;
                if (john_sum>jack_sum || j<0)
                {
                    break;
                }
            }
            if (john_sum>jack_sum)
            {
               cout<<c<<endl;
            }
            else
            {
               cout<<-1<<endl; 
            }   
        
    }
    
    return 0;
}
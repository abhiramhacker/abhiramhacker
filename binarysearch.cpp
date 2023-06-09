#include<iostream>
#include<stdlib.h>
using namespace std;
class binary
{
    int low,mid,high;
    int a[40];
    int x,n;
public:
        void init()
        {
            cout<<"enter the search element\n";
            cin>>x;
            cout<<"enter the size of the array\n";
            cin>>n;
            cout<<"enter the elements one by one\n";
            for(int i=0;i<n;i++)
            {
                cin>>a[i];
            }
        }
        void bin()
        {
            for(int i=0;i<n;i++)
            {
                if(a[i+1]<a[i])
                {
                    int t=a[i];
                    a[i]=a[i+1];
                    a[i+1]=t;
                }
            }
            int flag=0;
            low=0;
            high=n-1;
            while(low<=high)
            {
               mid=(low+high)/2;
               if(x<a[mid])
               {
                   high=mid-1;
               }
               else if(x>a[mid])
               {
                   low=mid+1;
               }
            }
               if(a[mid]==x)
                {
                    cout<<"element found";
                    flag=mid;
                }
                if(flag==1)
                {
                    cout<<"element not found\n";
                }
                else
                {
                    cout<<"element found in"<<endl;
                }
            
        }
            
    
};
int main()
{
    binary b;
    b.init();
    b.bin();
    return 0;
}

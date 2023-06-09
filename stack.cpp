#include<iostream>
using namespace std;
class stack1
{
    int arr[20],n,top;
public:
        stack1()
        {
            top=-1;
            for(int i=0;i<n;i++)
            {
                arr[i]=0;
            }
        }
        bool isempty()
        {
            if(top==-1)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        bool isfull()
        {
            if(top==n-1)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        void push(int x)
        {
            if(isfull())
            {
                cout<<"stack is full\n";
            }
            else
            {
                top++;
                arr[top]=x;
            }
        }
        int pop()
        {
            if(isempty())
            {
                cout<<"stack is empty\n";
                return 0;
            }
            else
            {
                int popvar=arr[top];
                arr[top]=0;
                top--;
                return popvar;
            }
        }
        int peak(int pos)
        {
            if(isfull())
            {
                cout<<"stack is full\n";
                return 0;
            }
            else
            {
                return arr[pos];
            }
        }
        int count()
        {
            return (top++);
        }
        void display()
        {
            for(int i=n-1;i>=0;i--)
            {
                cout<<arr[i]<<endl;
            }
        }
};
int main()
{
    stack1 s;
    int x,pos,top,arr[30],n,option;
    do
    {
        cout<<"1.push,2.pop,3.count,4.isempty,5.isfull,6.display,7.peak\n";
        cout<<"choose the option\n";
        cin>>option;
        switch(option)
        {
            case 1:cout<<"enter the element to be inserted\n";
                    cin>>x;
                    s.push(x);
                    break;
            case 2:cout<<"the elemnts the are popped are\n";
                    cout<<s.pop();
                    break;
            case 3:cout<<"the count of the stack is\n";
                    cout<<s.count();
                    break;
            case 4:if(s.isempty())
                    {
                        cout<<"the stack is empty\n";
                    }
                    else
                    {
                        cout<<"the stack is not empty\n";
                    }
                    break;
            case 5:if(s.isfull())
                    {
                        cout<<"the stack is full\n";
                    }
                    else
                    {
                        cout<<"the stack is not full\n";
                    }
                    break;
            case 6:cout<<"the stack array is\n";
                    s.display();
                    break;
            case 7:cout<<"enter the position\n";
                    cin>>pos;
                    cout<<s.peak(pos);
                    break;
            default: break;
        } 
    }
    while(option!=0);
    return 0;
}

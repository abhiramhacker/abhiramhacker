#include<iostream>
using namespace std;
class queue1
{
    int arr[30],front,rear,n;
    public:
            queue1()
            {
               front=rear=-1;
               for(int i=0;i<n;i++)
               {
                   arr[i]=0;
               }
            }
            bool isempty()
            {
                if(front==-1&&rear==-1)
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
                if(rear==n-1)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
            void enqueue(int val)
            {
                if(isfull())
                {
                    cout<<"the queue is full\n";
                }
                else if(isempty())
                {
                    front=rear=0;
                    arr[rear]=val;
                }
                else
                {
                    rear++;
                    arr[rear]=val;
                }
            }
            int dequeue()
            {
                if(isempty())
                {
                    cout<<"queue is empty\n";
                    return 0;
                }
                else if(front==rear)
                {
                    int x=arr[front];
                    arr[front]=0;
                    front=rear=-1;
                    return x;
                }
                else
                {
                    int x=arr[front];
                    arr[front]=0;
                    front++;
                    return x;
                }
            }
            int count()
            {
                return (rear-front+1);
            }
            void display()
            {
                for(int i=0;i<n;i++)
                {
                    cout<<arr[i]<<"\t";
                }
            }
};
int main()
{
    queue1 q;
    int arr[30],n,x,rear,front,option;
    do
    {
        cout<<"1.enqueue,2.dequeue,3.count,4.display,5.isempty,6.isfull\n";
        cout<<"choose the option\n";
        cin>>option;
        switch(option)
        {
            case 1:cout<<"enter the value to be inserted\n";
                    cin>>x;
                    q.enqueue(x);
                    break;
            case 2:cout<<q.dequeue();
                    break;
            case 3:cout<<q.count();
                    break;
            case 4:cout<<"the array is\n";
                    q.display();
                    break;
            case 5:if(q.isempty())
                    {
                        cout<<"the queue is empty\n";
                    }
                    else
                    {
                        cout<<"queue is not empty\n";
                    }
                    break;
            case 6:if(q.isfull())
                    {
                        cout<<"queue is full\n";
                    }
                    else
                    {
                        cout<<"queue is not full\n";
                    }
                    break;
            default:break;
        }
    }
    while(option!=0);
    return 0;
}

#include<iostream>
using namespace std;

const int m=50;

class items
{
    int itemcode[m];
    float itemprice[m];
    int count;
    public:
    void CNT(void){count=0;}
    void getitems(void);
    void displaysum(void);
    void remove(void);
    void displayitems (void);
};
void items::getitems(void)
{
    cout<<"enter item code";
    cin>>itemcode[count];
    cout<<"enter item cost";
    cin>>itemprice[count];
    count++;
}
void items::displaysum(void)
{
    float sum=0;
    for(int i=0;i<count;i++)
    {
        sum=sum+itemprice[i];
    }
    cout<<" total value:"<<sum<<"\n";
}
void items::remove(void)
{
    int a;
    cout<<"enter item code";
    cin>>a;
    for(int i=0;i<count;i++)
    {
        if (itemcode[i]==a)
        {
            itemprice [i]=0;
        }
    }
}
void items::displayitems(void)
{
    cout<<"\n code price\n";
    for(int i=0;i<count;i++){
        cout<<"in"<<itemprice[i];
        cout<<""<<itemprice[i];
    }
    cout<<"\n";
}
int main()
{
    items order;
    order.CNT();
    int x;
    do
{
cout<<"\n you can do the follwing";
cout<<"enter appropriate number\n";
cout<<"\n 1: add an item";
cout<<"\n 2: display total value";
cout<<"\n 3: delete an item";
cout<<"\n 4: display all  item";
cout<<"\n 5: quit";
cout<<"\n\n what is your option?";
cin>>x;
switch (x)

{
case 1:order.getitems();
    break;
case 2:order.displaysum();
    break;
case 3:order.remove();
    break;
case 4:order.displayitems();
    break;
case 5:break;
default:cout<<"error in input";
}
}
while (x!=5);
return 0;

}
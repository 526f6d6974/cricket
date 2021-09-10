#include <iostream>

using namespace std;

int main()
{
    int check,length,breadth,area,perimeter;
    cout<<"enter 1 for square,2 for rectangle";
    cin>>check;
    if(check==1)
    {
        int b;
        cout<<"type 1 to find area of square\n";
        cout<<"type 2 for perimeter of square\n";
        cin>>b;
        if(b==1)
        {
            cout<<"enter the length\n";
            cin>>length;
            cout<<"enter the breadth\n";
            cin>>breadth;
            area=length*breadth;
            cout<<area;
        }
        if(b==2)
        {
            cout<<"enter the lenght\n";
            cin>>length;
            cout<<"enter the breadth\n";
            cin>>breadth;
            perimeter=length+breadth;
            cout<<perimeter;
        }
    }
    if(check==2)
    {
        int c;
        cout<<"type 1 to find area of rectangle\n";
        cout<<"type 2 to find perimeter of rectangle\n";
        cin>>c;
        if(c==1)
        {
            cout<<"enter the length\n";
            cin>>length;
            cout<<"enter the breadth\n";
            cin>>breadth;
            area=length*breadth;
            cout<<area;
        }
        if(c==2)
        {
            cout<<"enter the length\n";
            cin>>length;
            cout<<"enter the breadth\n";
            cin>>breadth;
            perimeter=2*(length+breadth);
        }
    }
    return 0;
}

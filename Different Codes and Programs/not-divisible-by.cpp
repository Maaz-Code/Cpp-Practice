#include <iostream>
using namespace std;

int main() 
{
    int x,y,z;
    cout<<"Select the numbers: ";
    cin>>y>>z;
    for(x=0;x<=y;x++)
    {
        if (x % z == 0)
        {
            continue;
        }
        cout<< x <<" ";
    }
    return 0;
}
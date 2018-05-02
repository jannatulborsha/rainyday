#include<iostream>
#include"checkRain.h"
using namespace std;

int main()
{
    double temp,hum;
    cin>>temp>>hum;
    cout<<temp<<" "<<hum<<"%"<<endl;
    if(checkRain(temp,hum))
        cout << "it's a rainy day"<<endl;
    else
        cout << "it's  not a rainy day"<<endl;

      return 0;
}

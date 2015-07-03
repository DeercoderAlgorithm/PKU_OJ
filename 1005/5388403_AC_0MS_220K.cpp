#include<iostream>
using namespace std;
int main()
{
    double s=100;
    int n;
    double x,y;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        cout<<"Property " << i+1 <<": This property will begin eroding in year ";
      cout<< (int)(3.1415926*(x*x+y*y)/100+1)<<"."<<endl;;
    }
    cout<<"END OF OUTPUT.\n"  ;

}
//大数乘法

//#include <stdio.h>
//
//int main()
//{
//    double a1;
//    int b1;
//    while(scanf("%f %d",&a1,&b1) == 2){
//        printResult(compute(a1,b1));
//    }
//    return 0;
//}
//
//double compute(double a,int b){
//    double sum = 1;
//    for(int i = 1; i <= b; i++){
//        sum *= a;
//    }
// return sum;
//}
//
//void printResult(double sum){
//    if(sum < 1){
//        char a[20];
//        gcvt(a,)
//    }
//
//}

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string ans;

string Solve(string str1,string str2)
{
    int len1=str1.length();
    int len2=str2.length();
    int i,j,a,b;
    string str="";
    int tmp[1000];

    reverse(str1.begin(),str1.end());
    reverse(str2.begin(),str2.end());
    memset(tmp,0,sizeof(tmp));
    for(i=0;i<len1;i++)
    {
        for(j=0;j<len2;j++)
        {
            a=str1[i]-'0';
            b=str2[j]-'0';
            tmp[i+j]+=a*b;
        }
    }
    for(i=0;i<len1+len2-1;i++)
    {
        a=tmp[i]%10;
        b=tmp[i]/10;
        tmp[i]=a;
        tmp[i+1]+=b;
    }
    if(b>0)
        i++;
    for(j=0;j<i;j++)
        str+=tmp[j]+'0';
    reverse(str.begin(),str.end());
    return str;
}

void Cal(string str,int n)
{
    ans="1";
    while(n)
    {
        if(n&1)
            ans=Solve(ans,str);
        str=Solve(str,str);
        n=n>>1;
    }
}

int main()
{
    string str;
    int i,n,pos,step=0;
    while(cin>>str>>n)
    {
        pos=-1;
        for(i=0;i<str.length();i++)
        {
            if(str[i]=='.')
            {
                pos=i;
                break;
            }
        }
        if(pos!=-1)
        {
            step=str.length()-pos-1;
            str.erase(str.begin()+pos);
        }
        for(i=0;i<str.length();i++)
        {
            if(str[i]!='0')
                break;
        }
        if(i==str.length())
        {
            cout<<0<<endl;
            continue;
        }
        Cal(str,n);
        string s="";
        int flag=0;
        int flag1=0;
        reverse(ans.begin(),ans.end());
        for(i=0;i<ans.length();i++)
        {
            if(!flag1)
            {
                if((step&&i==step*n))
                {
                    if(flag)
                        s+='.';
                    flag1=1;
                }
            }
            if(!flag&&!flag1)
            {
                if(ans[i]!='0')
                {
                    s+=ans[i];
                    flag=1;
                }
            }
            else
            {
                s+=ans[i];
            }
        }
        if(!flag1&&i<=step*n)
            s+='.';
        reverse(s.begin(),s.end());
        while(s[0]=='0')
        {
            s.erase(s.begin());
        }
        cout<<s<<endl;
    }
    while(1);
    return 0;
}



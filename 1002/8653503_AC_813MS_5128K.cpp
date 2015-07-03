//POJ1002 1.0
//hash的最简单应用,map的最简单应用
#include<iostream> 
#include<cstdio>  
#include<cstring>  
#include<cstdlib>  
#include<string>  
#include<map>
using namespace std;
const char hash[100]="22233344455566677778889999";  
int n,cnt,len;  
string ret;
char str[100];  
map<string,int> mp;
map<string,int>::iterator itr;
int main(){
    scanf("%d",&n);  
    while(n--){  
        scanf("%s",str);  
        cnt = 0;
        ret = "";  
        len=strlen(str);  
        for(int i=0;i<len;i++){  
            if(str[i]>='0'&&str[i]<='9'){
                ret+=str[i];
                cnt++;
                if(cnt==3)  
                    ret+='-';  
            }
            else if(str[i]>='A'&&str[i]<'Z'&&str[i]!='Q'){  
                ret+=hash[str[i]-'A'];
                cnt++;
                if(cnt==3)  
                    ret+='-';  
            }
            if(cnt==7)
                break;
        }
        mp[ret]++;  
    }
    cnt=0;
    for(itr=mp.begin();itr!=mp.end();itr++){  
        if((*itr).second>1){
            printf("%s %d\n",(*itr).first.c_str(),(*itr).second);  
            cnt++;
        }
    }
    if(!cnt)
        printf("No duplicates.\n"); 
    return 0;  
}
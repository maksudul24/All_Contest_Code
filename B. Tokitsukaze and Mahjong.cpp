#include<bits/stdc++.h>
using namespace std;

char ara[10][10];
int test(int s[],int s_i)
{
    int x=10,y=20;
    if(s_i==2){
            if( s[0]==s[1] || s[0] == s[1]-1 || s[0] == s[1]-2) x=1;
            else x=2;
    }
    else{
            x=s[1]-s[0];
            y=s[2]-s[1];
            if(x<3 || y<3){
                    if(x==y && x<2) x=0;
                    else x=1;
            }
            else x=2;
    }
    return x;

}

int ans()
{
    int s[5],p[5],m[5];
    int s_i=0,p_i=0,m_i=0,i,x;
    for(i=0;i<3;i++){
        s[i]=i+50;
        p[i]=i+50;
        m[i]=i+50;
    }
    for(i=0;i<3;i++){
        if(ara[i][1]=='s') s[s_i++]=ara[i][0]-'0';
        else if(ara[i][1]=='p') p[p_i++]=ara[i][0]-'0';
        else m[m_i++]=ara[i][0]-'0';
    }
    sort(s,s+s_i);
    sort(p,p+p_i);
    sort(m,m+m_i);
    if(s_i==p_i && p_i==m_i){
            x=2;
    }
    else if(s_i>m_i && s_i>p_i){
        x=test(s,s_i);
    }
    else if(p_i>s_i && p_i>m_i){
        x=test(p,p_i);
    }
    else{
        x=test(m,m_i);
    }
    return x;


}

int main()
{
    scanf("%s %s %s",ara[0],ara[1],ara[2]);
    printf("%d\n",ans());
    return 0;
}

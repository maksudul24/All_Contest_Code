#include<bits/stdc++.h>

using namespace std;

const int maxn=1001000;

int tr1[maxn],tr2[maxn],tot;
char str[maxn];

int lowbit(int x)
{
    return x&(-x);
}

void Add(int tr[],int n)
{
    while(n<maxn)
    {
        tr[n]++;
        n+=lowbit(n);
    }
}

int Sum(int tr[],int x)
{
    int sum=0;
    while(x>0)
    {
        sum+=tr[x];
        x-=lowbit(x);
    }
    return sum;
}

struct Interval
{
    int l,r,len,ans,id;
}q[maxn],a[maxn];

bool cmp1(Interval a,Interval b)
{
    if(a.len!=b.len)
    {
        return a.len<b.len;
    }
    else  return a.l<b.l;
}

bool cmpID(Interval a,Interval b)
{
    return a.id<b.id;
}

int st[maxn],pop=-1,m,qt;

int main()
{
    scanf("%s",&str);
    int len=strlen(str);
    for(int i=0;i<len;i++)
    {
        if(str[i]=='(')
        {
            st[++pop]=i+1;
        }
        else
        {
            if(pop>=0)
            {
                a[tot].l=st[pop--];
                a[tot].r=i+1;
                a[tot].len=a[tot].r-a[tot].l+1;
                tot++;
            }
        }
    }

    scanf("%d",&m);
    for(int i=0;i<m;i++)
    {
        int l,r;
        scanf("%d%d",&l,&r);
        q[qt].l=l,q[qt].r=r;
        q[qt].len=r-l+1,q[qt].id=i;
        qt++;
    }
    sort(q,q+qt,cmp1);
    sort(a,a+tot,cmp1);

    int pos=0;
    for(int i=0;i<m;i++)
    {
        while(pos<tot&&a[pos].len<=q[i].len)
        {
            Add(tr1,a[pos].l);Add(tr2,a[pos].r);
            pos++;
        }

        q[i].ans=Sum(tr2,q[i].r)-Sum(tr1,q[i].l-1);
    }

    sort(q,q+qt,cmpID);

    for(int i=0;i<qt;i++)
    {
        printf("%d\n",q[i].ans*2);
    }

    return 0;
}

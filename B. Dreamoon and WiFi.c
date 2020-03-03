#include<stdio.h>
#include<math.h>
#include<string.h>
int p_ara[25],cnt,n_ara[25],n_cnt;
char p_mark[25],n_mark[25];
void binary(int n)
{
    if(n_cnt==0) return;
    n_cnt--;
    binary(n/2);
    if(n%2==1) cnt++;
    else cnt--;
}
int main()
{
    int n,i,temp,cnt1=0,cnt2=0,p_cnt=0;

    double pr=0;
    char s1[15],s2[15];
    scanf("%s %s",s1,s2);
    n=strlen(s1);
    for(i=0;i<n;i++){
        if(s1[i]=='+') cnt1++;
        else cnt1--;
        if(s2[i]=='+') cnt2++;
        else if(s2[i]=='-') cnt2--;
        else p_cnt++;
    }
    if(!p_cnt){
       if(cnt1==cnt2) printf("%lf\n",1.0);
       else printf("%lf\n",pr);
    }
    else{
            temp=p_cnt;
            n=pow(2,p_cnt);
            for(i=0;i<n;i++){
                cnt=0;
                n_cnt=temp;
                binary(i);
                if(cnt>=0){
                    p_ara[cnt]++;
                }
                else{
                    cnt=cnt*-1;
                    n_ara[cnt]++;

                }
            }
            for(i=0;i<15;i++){
              if(p_ara[i]){
                if(cnt1==i+cnt2) pr+=p_ara[i];
           //     printf("%d is %d,",i,p_ara[i]);
              }
              if(n_ara[i]){
                if(cnt1==cnt2-i) pr+=n_ara[i];
             //   printf("-%d is %d,",i,n_ara[i]);
              }
        }
            printf("%.10lf\n",pr/n);
    }
    return 0;

}

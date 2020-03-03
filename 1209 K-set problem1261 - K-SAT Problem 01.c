#include<stdio.h>
int main()
{
    int k,i,n,m,w,ara[2000],x,p_cnt,j,sw,cas=0,t,sw2,num[200][200],cnt;
    char sn[2000],str[1000];
    scanf("%d",&k);
    while(k--){
        sw=1;
        scanf("%d %d %d",&n,&m,&w);
        getchar();
        for(i=1;i<=n*w;i++){
            scanf("%s",str);
            sscanf(str,"%c %d",&sn[i],&ara[i]);
            num[sn[i]][ara[i]]=0;
        }
        scanf("%d",&t);
        for(i=1;i<=t;i++){
            scanf("%d",&x);
            num['+'][x]++;
            num['-'][x]++;
        }
        cnt=0;
        for(i=1;i<=n*w;i++){
            if(sn[i]=='+'){
                if(num[sn[i]][ara[i]]>0) cnt++;
            }
            else{
                if(num[sn[i]][ara[i]]==0) cnt++;
            }
            if(i%w==0){
                if(cnt>0) sw=1;
                else{
                    sw=0;
                    break;
                }
                cnt=0;
            }
        }



        if(sw){
            printf("Case %d: Yes\n",++cas);
        }
        else{
            printf("Case %d: No\n",++cas);
        }

    }
    return 0;
}

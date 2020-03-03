#include<stdio.h>
int main()
{
    int k,i,n,m,w,ara[2000],x,p_cnt,j,sw,cas=0,t,cnt;
    char sn[2000],str[50];
    scanf("%d",&k);
    while(k--){
        sw=1,cnt=0;
        scanf("%d %d %d",&n,&m,&w);
        getchar();
        for(i=1;i<=n*w;i++){
            scanf("%s",str);
            sscanf(str,"%c %d",&sn[i],&ara[i]);
        }
        scanf("%d",&t);
        for(i=1;i<=t;i++){
            scanf("%d",&per[i]);
        }
        m=0;
        for(i=1;i<=n*w;i+w){
            for(j=1;j<=t;j++){
                    if(sn[m+j]=='+' && ara[m+j]==per[j]){
                                        sw=1;
                                        break;
                    }
                    else if(sn[m+j]=='-' && ara[m+j]!=per[j]){
                        sw=1;
                        break;
                    }
            }
            if(sw){
                cnt++;
                sw=0;
            }
        }
        if(cnt==t){
            printf("Case %d: Yes\n",++cas);
        }
        else{
            printf("Case %d: No\n",++cas);
        }

    }
    return 0;
}

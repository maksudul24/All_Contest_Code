#include<cstdio>
#include<string.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
int leap_year(int n)
{
    if(n%4==0){
        if(n%100==0 && n%400!=0) return 0;
        else if(n%100==0 && n%400==0) return 1;
        else return 1;
    }
    else return 0;
}
int main()
{
    int p_day,p_year,day,year,sw,sw2,i,cnt=0,n,j,k,x,n_year;
    char p_month[20],month[30],line[30],line2[30],ch;
    cin>>k;
    for(j=1;j<=k;j++){
        sw=4,sw2=5,cnt=0;
                    //string input
                    gets(line);
                    gets(line2);
                    sscanf(line,"%s %d %c %d",p_month,&p_day,&ch,&p_year);
                    sscanf(line2,"%s %d %c %d",month,&day,&ch,&year);
                    n_year=year;
                    printf("%d %s %d - %d %s %d\n",p_day,p_month,p_year,day,month,year);
                    if((strcmp("January",p_month)==0) || (strcmp("February",p_month)==0)){
                            sw=1;

                    }
                    else {
                        sw=0;
                    }
                    if(strcmp("January",month)==0){
                        sw2=0;
                    }
                    else if(strcmp("February",month)==0){
                        if(day<29){
                            sw2=0;
                        }
                        else{
                            sw2=1;
                        }
                    }
                    memset(line,'\0',sizeof(line));
                    memset(line2,'\0',sizeof(line2));
                    memset(month,'\0',sizeof(month));
                    memset(p_month,'\0',sizeof(p_month));
                    year=year-p_year;
                    if(year<4){
                        n=year;
                        if(n==0){
                            n++;
                        }
                        year=p_year;
                        for(i=0;i<n;i++){
                                x=leap_year(year);

                                if(x){
                                    cnt++;

                                    }
                                    year++;
                        }
                        year=cnt;

                    }
                    else{
                        year=(year/4)-(year/400)-(year/200);
                        if(leap_year(n_year) || leap_year(p_year)){
                                if(sw==1 || sw2==1){
                                    year++;
                                }


                        }

                    }
                    printf("Caes %d: %d\n",j,year);
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
    int p_day,p_year,day,year,sw,sw2,i;
    char p_month[20],month[30],line[30],line2[30],ch;
    scanf("%s",line);
    scanf(" %s",line2);
    sscanf(line,"%s %d %c %d",p_month,&p_day,&ch,&p_year);
    sscanf(line2,"%s %d %c %d",month,&day,&ch,&year);
    printf("%d %s %d - %d %s %d\n",p_day,p_month,p_year,month,day,year);
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
    year=p_year-year;
    year=(year/4)-(year/400)-(year/200);
    if(sw==0){
        year--;
    }
    if(sw2==0){
        year--;
    }
    printf("Caes %d: %d\n",i,year);
    return 0;
}

#include<stdio.h>
int main()
{
    char p_month[20],month[20],line[50],line2[50],ch;
    int p_day,day,p_year,year;
    gets(line);
  //  gets(line2);
    sscanf(line,"%s %d %c %d",p_month,&p_day,&ch,&p_year);
 //   sscanf(line2,"%s %d %c %d",month,&day,&ch,&year);
    printf("%d %s %d - %d %s %d\n",p_day,p_month,p_year,month,day,year);
    return 0;

}

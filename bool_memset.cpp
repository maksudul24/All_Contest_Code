 #include<stdio.h>
 #include<string.h>
 int main()
 {


        int i;
        bool mark[1000];
        memset(mark,false,sizeof(mark));
        mark[10]=true,mark[12]=true,mark[14]=true;
        printf("First Segment\n");
        for(i=0;i<100;i++) if(mark[i]==true) printf("%d ",i);
        printf("\nSecond Segment\n");
        memset(mark,false,sizeof(mark));
        for(i=0;i<100;i++) if(mark[i]==true) printf("%d ",i);
        printf("\nOperation Successful\n");

        return 0;

 }

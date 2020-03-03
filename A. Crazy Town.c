#include<stdio.h>

int sign(int n)
{
    if(n<0){
        n=-1;
    }
    else{
        n=1;
    }
    return n;
}

int main()
{
    int a1,b1,a2,b2,x,y,c,n,i,count=0,big=0,small=0,a1_sign=1,a2_sign=1,b1_sign=1,b2_sign=1,x_sign=1,y_sign=1,c_sign=1,s1_sign=1,s2_sign=1,f_sign=1;
    unsigned long long int sum1,sum2,sum;
    scanf(" %d %d %d %d",&a1,&b1,&a2,&b2);
    if(a1<0) {
        a1=a1*(-1);
        a1_sign=-1;
    }
    if(a2<0){
        a2=a2*(-1);
        a2_sign=-1;
    }
    if(b1<0){
        b1=b1*(-1);
        b1_sign=-1;
    }
    if(b2<0){
        b2=b2*(-1);
        b2_sign=-1;
    }

    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf(" %d %d %d",&x,&y,&c);
        if(x<0){
            x=x*(-1);
            x_sign=-1;
        }
        if(y<0){
            y=y*(-1);
            y_sign=-1;
        }
        if(c<0){
            c_sign=-1;
        }

        sum1=a1*x;
        sum2=b1*y;
        s1_sign=x_sign*a1_sign;
        s2_sign=y_sign*a2_sign;
        if(sum1>sum2){
        	 f_sign=s1_sign;
        	 if(s1_sign==s2_sign) sum=sum1+sum2;
        	 else sum=sum1-sum2;

        }
        else{
        	 f_sign=s2_sign;
        	 if(s1_sign==s2_sign) sum=sum2+sum1;
        	 else sum=sum2-sum1;

       }

        if(c_sign==f_sign){
            if(c_sign==1){
            	if(sum>c) big=1;
            	else small=1;
            }
            else{
            	if(sum>c) small=1;
            	else big=1;
            }
        }
        else{
        	if(c>1) small=1;
        	else big=1;
        }
        sum1=a2*x;
        sum2=b2*y;
        s1_sign=x_sign*a2_sign;
        s2_sign=y_sign*b2_sign;
         if(sum1>sum2){
        	 f_sign=s1_sign;
        	 if(s1_sign==s2_sign) sum=sum1+sum2;
        	 else sum=sum1-sum2;

        }
        else{
        	 f_sign=s2_sign;
        	 if(s1_sign==s2_sign) sum=sum2+sum1;
        	 else sum=sum2-sum1;

       }

        if(c_sign==f_sign){
            if(c_sign==1){
            	if(sum>c) big=1;
            	else small=1;
            }
            else{
            	if(sum>c) small=1;
            	else big=1;
            }
        }
        else{
        	if(c<0) big=1;
        	else small=1;
        }

        if(big==small) count++;
        big=0;
        small=0;

    }
    printf("%d\n",count);
    return 0;
}

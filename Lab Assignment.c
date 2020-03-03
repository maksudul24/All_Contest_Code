#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int x,i,length;
    char line[100];
    FILE *input,*vowel,*consonant;
    input=fopen("input.txt","r");
    vowel=fopen("vowel.txt","w");
    consonant=fopen("consonant.txt","w");
    while(fscanf(input,"%s",line)!=EOF){
        length=strlen(line);
        for(i=0;i<length;i++){
            if(line[i]=='a' || line[i]=='A' || line[i]=='e' || line[i]=='E' || line[i]=='o' || line[i]=='O' || line[i]=='U' || line[i]=='u' || line[i]=='i' || line[i]=='I') fputc(line[i],vowel);
            else if((line[i]>='a' && line[i]<='z') || (line[i]>='A' && line[i]<='Z')) fputc(line[i],consonant);
        }

    }
    fclose(input);
    fclose(vowel);
    fclose(consonant);
    return 0;
}

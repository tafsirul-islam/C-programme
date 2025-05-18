#include<stdio.h>

int main()
{
    char name[200];
    
    printf("Inter your name:");
    fgets(name, sizeof(name), stdin);
    printf("Your sentence is : %s",name);
    
    int sum =0;
    for(int i=0;name[i]!='\0';i++){
    if(name[i]>= 'a' && name[i]<= 'z' || name[i] >= 'A' && name[i] <= 'Z'){
      sum+=1;
     }
    
    }
    printf("Your sentence letter number : %d\n",sum);
    
    int sum2=0;
    for(int index=0;name[index]!='\0';index++){
      if(name[index]>= '0' && name[index] <= '9'){
        sum2+=1;
      }
    }
    printf("Your sentencese number no : %d\n",sum2);
    
   
    int sum3=0;
    for(int index=0;name[index] != '\0';index++){
      if(name[index]>= '0' && name[index] <= '9'){
       sum3+=name[index]-'0';
      }
    }
    printf("Your number sum : %d",sum3);
    
    
    /*
    int sum3=0;
    for(int index =0;name[index]!='\0';index++){
      if(name[index]>= '0' && name[index] <= '9'){
        if(name[index]=='0')
        sum3+=0;
        else if(name[index]=='1')
        sum3+=1;
        else if(name[index]=='2')
        sum3+=2;
        else if(name[index]=='3')
        sum3+=3;
        else if(name[index]=='4')
        sum3+=4;
        else if(name[index]=='5')
        sum3+=5;
        else if(name[index]=='6')
        sum3+=6;
        else if(name[index]=='7')
        sum3+=7;
        else if(name[index]=='8')
        sum3+=8;
        else if(name[index]=='9')
        sum3+=9;
      }
    }
    printf("Your number sum : %d",sum3);
    */
    
    return 0;
}

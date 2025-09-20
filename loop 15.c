#include<stdio.h>
#include<math.h>
int main(){
int num,orignal,digit=0,sum=0,temp,digit;
  printf("enter a number");
  scanf("%d",&num);
   orignal=num;
   temp=num;
while(temp>0){
   temp=temp/10;
   digit++;
}
temp=num;
while(temp>0){
digit=temp%10;
sum+=(int)pow(digit,digits);
temp=temp/10;
}
if(sum==original){
printf("%d is an armsrong number\n",original);
}else{
printf("%d is not an armstrong numer\n",orignal;);
}
return 0;
}
   
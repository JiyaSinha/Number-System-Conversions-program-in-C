#include<stdio.h>
#include<stdio.h>
int main()
{
    int n1,n2;
    printf("enter the binary no. according to the given instructions\n");
    printf("enter the part before decimal and after decimal resp.\n");
    scanf("%d%d",&n1,&n2);
    int dec=0,flag=0;
    int r1,r2;
    float dec_=0;
    while(n1>0)
    {
        r1=n1%10;
        dec+=r1*pow(2,flag);
        flag++;
        n1=n1/10;
    }
    flag=-1;
    int rev=0;
    while(n2>0)
    {
        r2=n2%10;
        rev=(rev*10)+r2;
        n2=n2/10;
    }
    while(rev>0)
    {
        r2=rev%10;
        dec_+=r2*pow(2,flag);
        flag--;
        rev=rev/10;
    }
    dec_+=dec;
    printf("the decimal equivalent=%f",dec_);
    return 0;
}

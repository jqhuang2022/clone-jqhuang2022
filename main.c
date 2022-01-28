#include<stdio.h>
int main()
{
    int data,data1,result1,result2,result3,result;
    freopen("packet1.txt","r",stdin);
    freopen("result1.txt","w",stdout);
    while(scanf("%d",&data)!=EOF)
    {
        data1=change(data);
        result1=ip(data1);
        result2=port(data1);
        result3=pro(data1);
        result=conclue(result1,result2,result3);
        printf("%d",result);
    }
    fclose(stdin);
    fclose(stdout);
    return 0;
}
void change(int data) //将数据IP地址从十进制转化为点分十进制
int ip(int data)//规则和数据IP地址匹配
int port(int data)//端口匹配
int pro(int data) //协议匹配
int conclude(int result1,int result2,int result3)//输出结果

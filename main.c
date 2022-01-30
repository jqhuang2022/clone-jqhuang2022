#include<stdio.h>
#include<string.h>
struct dataset
{
    int datayip;//源ip
    int datayport;//源端口
    int datamip;//目的ip
    int datamport;//目的端口
    int datapro;//协议
};
struct ruleset
{
    char ruleyip[50];//源IP
    char ruleyport[50];//源端口
    char rulemip[50];//目的IP
    char rulemport[50];//目的端口
    int rulepro;//协议
}
int main()
{
    int data,rule1,rule2;
    int result1,result2,result3,result4,result5,result=0;
    int cnt=0;
    freopen("packet1","r",stdin);
    freopen("result1","w",stdout);
    while(result!=1)
    {
        cnt++;
        rule1=change(ruleset.ruleyip);
        rule2=change(ruleset.rulemip);
        result1=ip(dataset.datayip,rule1);
        result2=ip(dataset.datamip,rule2);
        result3=port(dataset.datayport,ruleset.ruleyport);
        result4=port(dataset.datamport,ruleset.rulemport);
        result5=pro(dataset.datapro,ruleset.rulepro);
        result=conclue(result1,result2,result3,result4,result5);
    }
    if(result==1)
    printf("%d",cnt);
    else
    printf("-1");
    fclose(stdin);
    fclose(stdout);
    return 0;
}
void change(int rule) //将规则IP地址从点分十进制转化为十进制
int ip(int data,int rule)//规则和数据IP地址匹配
int port(int data,int rule)//端口匹配
int pro(int data,int rule) //协议匹配
int conclude(int result1,int result2,int result3,int result4,int result5)//输出结果

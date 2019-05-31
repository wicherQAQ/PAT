#include<stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int sum = a+b;
    //用于存储转化后的数值
    char out[10];
    //用于记录和的长度
    int len=0;
    //用于累计对3的取余运算
    int count=0;

    if(sum>=-999&&sum<=999){
        //和在-999~999之间，则直接打印
        printf("%d\n",sum);
    }else{
        if(sum<0){
            //若和小于0，先打印负号
            printf("-");
            sum = -sum;
        }

        //主体循环第sum做除法运算直到为0，循环退出
        //每次循环sum/10，并%10后获得个位的值
        while(sum){
            //对累加变量count做对3的取余判断，除了第一次不做
            if(count!=0&&count%3==0){
                //添加分隔符
                out[len++] = ',';
            }
            //注意：此处加'0'是为了将数字变成字符形式
            //存储的数字为逆序
            out[len++] = sum%10 + '0';
            sum/=10;
            //每做一次除法，count计数器加1
            count++;
        }

        //拼装完后逆序输出
        for(int i =len-1;i>=0;i--){
            printf("%c",out[i]);
        }

    }

    return 0;
}

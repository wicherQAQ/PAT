#include<stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int sum = a+b;
    //���ڴ洢ת�������ֵ
    char out[10];
    //���ڼ�¼�͵ĳ���
    int len=0;
    //�����ۼƶ�3��ȡ������
    int count=0;

    if(sum>=-999&&sum<=999){
        //����-999~999֮�䣬��ֱ�Ӵ�ӡ
        printf("%d\n",sum);
    }else{
        if(sum<0){
            //����С��0���ȴ�ӡ����
            printf("-");
            sum = -sum;
        }

        //����ѭ����sum����������ֱ��Ϊ0��ѭ���˳�
        //ÿ��ѭ��sum/10����%10���ø�λ��ֵ
        while(sum){
            //���ۼӱ���count����3��ȡ���жϣ����˵�һ�β���
            if(count!=0&&count%3==0){
                //��ӷָ���
                out[len++] = ',';
            }
            //ע�⣺�˴���'0'��Ϊ�˽����ֱ���ַ���ʽ
            //�洢������Ϊ����
            out[len++] = sum%10 + '0';
            sum/=10;
            //ÿ��һ�γ�����count��������1
            count++;
        }

        //ƴװ����������
        for(int i =len-1;i>=0;i--){
            printf("%c",out[i]);
        }

    }

    return 0;
}

// fah = 9.0 / 5.0 * cel + 32.0;��һ����  fah = 9 / 5 * cel + 32��һ����ע�⸡���ͺ����ͣ� 




// �ȶϢ�����Ҳ�ƶ��ڸ�Ϣ���������ÿ�°���ȵĽ������Ϣ������ÿ�´�����Ϣ���³�ʣ��������㲢���½��塣
// �¾����� = ����� * (������ * (1 + ������)^��������) / ((1 + ������)^�������� - 1)
//����Ϣ = �������� * �¾����� - �����
//����� = �����ܶ� * ���ҳ���

#include <stdio.h>
#include <math.h>
int main()
{
       float housepaid, square, time, year, profile;
       float zonge, shoufu, daikuan, huankuan, lixi, yuejun;
        
        printf("�����뵥�ۣ�Ԫ/ƽ������");
        scanf("%f", &housepaid);
        
        printf("�����������");
        scanf("%f", &square);
        
        printf("�����밴�ҳ�����");
        scanf("%f", &time);
        
        printf("�����밴��������");
        scanf("%f", &year);
        
        printf("�����뵱ǰ��׼�����ʣ�");
        scanf("%f", &profile);
        
        printf("============������============\n");
        
        
		zonge=square*housepaid;
		shoufu = (1-time*0.1)*zonge;
        daikuan = zonge* time*0.1;
        yuejun = daikuan*(((profile/100/12)*pow((1+profile/100/12),(20*12))) /(pow((1+profile/100/12),(20*12))-1));
        lixi = year*12*yuejun - daikuan;
        huankuan = yuejun*12*20;
        
        
        printf("�����ܶ%.2fԪ\n",zonge);
        printf("���ڸ��%.2fԪ\n",shoufu);       
        printf("�����ܶ%.2fԪ\n", daikuan);
        printf("�����ܶ%.2fԪ\n", huankuan);
        printf("֧����Ϣ��%.2fԪ\n", lixi);
        printf("�¾����%.2fԪ\n", yuejun);
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        return 0;
}

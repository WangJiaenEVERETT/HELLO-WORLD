// fah = 9.0 / 5.0 * cel + 32.0;这一步和  fah = 9 / 5 * cel + 32不一样！注意浮点型和整型！ 




// 等额本息还款法，也称定期付息，即借款人每月按相等的金额偿还贷款本息，其中每月贷款利息按月初剩余贷款本金计算并逐月结清。
// 月均还款 = 贷款本金 * (月利率 * (1 + 月利率)^还款月数) / ((1 + 月利率)^还款月数 - 1)
//总利息 = 还款月数 * 月均还款 - 贷款本金
//贷款本金 = 房款总额 * 按揭成数

#include <stdio.h>
#include <math.h>
int main()
{
       float housepaid, square, time, year, profile;
       float zonge, shoufu, daikuan, huankuan, lixi, yuejun;
        
        printf("请输入单价（元/平方）：");
        scanf("%f", &housepaid);
        
        printf("请输入面积：");
        scanf("%f", &square);
        
        printf("请输入按揭成数：");
        scanf("%f", &time);
        
        printf("请输入按揭年数：");
        scanf("%f", &year);
        
        printf("请输入当前基准年利率：");
        scanf("%f", &profile);
        
        printf("============报告结果============\n");
        
        
		zonge=square*housepaid;
		shoufu = (1-time*0.1)*zonge;
        daikuan = zonge* time*0.1;
        yuejun = daikuan*(((profile/100/12)*pow((1+profile/100/12),(20*12))) /(pow((1+profile/100/12),(20*12))-1));
        lixi = year*12*yuejun - daikuan;
        huankuan = yuejun*12*20;
        
        
        printf("房款总额：%.2f元\n",zonge);
        printf("首期付款：%.2f元\n",shoufu);       
        printf("贷款总额：%.2f元\n", daikuan);
        printf("还款总额：%.2f元\n", huankuan);
        printf("支付利息：%.2f元\n", lixi);
        printf("月均还款：%.2f元\n", yuejun);
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        return 0;
}

#include <stdio.h>

int main() {
    // 声明三个 double 类型的变量，分别用于存储水池的容积、排水速率和进水速率
    double V, v1, v2;

    // 提示用户输入水池的容积，单位为升
    printf("Please enter the volume of the pool (liters): ");
    // 从标准输入读取一个 double 类型的值，并将其存储到变量 V 中
    scanf("%lf", &V);

    // 提示用户输入排水速率，单位为升每分钟
    printf("Please enter the drainage rate (liters/minute): ");
    // 从标准输入读取一个 double 类型的值，并将其存储到变量 v1 中
    scanf("%lf", &v1);

    // 提示用户输入进水速率，单位为升每分钟
    printf("Please enter the inflow rate (liters/minute): ");
    // 从标准输入读取一个 double 类型的值，并将其存储到变量 v2 中
    scanf("%lf", &v2);

    // 开始判断排水速率是否大于进水速率
    if(v1 > v2)
    {
        // 如果排水速率大于进水速率，计算排空水池所需的时间
        // 根据公式：时间 = 容积 / (排水速率 - 进水速率)
        double t = V / (v1 - v2);
        // 输出排空水池所需的时间，结果保留两位小数
        printf("drainage time = %.2f minute\n", t);
    }
    else {
        // 如果排水速率小于等于进水速率，输出无法排空水池的提示信息
        printf("Unable to empty! The inflow rate needs to be less than the drainage rate.");
    }

    // 程序正常结束，返回 0
    return 0;
}

#include <stdio.h>

int main() {
    // �������� double ���͵ı������ֱ����ڴ洢ˮ�ص��ݻ�����ˮ���ʺͽ�ˮ����
    double V, v1, v2;

    // ��ʾ�û�����ˮ�ص��ݻ�����λΪ��
    printf("Please enter the volume of the pool (liters): ");
    // �ӱ�׼�����ȡһ�� double ���͵�ֵ��������洢������ V ��
    scanf("%lf", &V);

    // ��ʾ�û�������ˮ���ʣ���λΪ��ÿ����
    printf("Please enter the drainage rate (liters/minute): ");
    // �ӱ�׼�����ȡһ�� double ���͵�ֵ��������洢������ v1 ��
    scanf("%lf", &v1);

    // ��ʾ�û������ˮ���ʣ���λΪ��ÿ����
    printf("Please enter the inflow rate (liters/minute): ");
    // �ӱ�׼�����ȡһ�� double ���͵�ֵ��������洢������ v2 ��
    scanf("%lf", &v2);

    // ��ʼ�ж���ˮ�����Ƿ���ڽ�ˮ����
    if(v1 > v2)
    {
        // �����ˮ���ʴ��ڽ�ˮ���ʣ������ſ�ˮ�������ʱ��
        // ���ݹ�ʽ��ʱ�� = �ݻ� / (��ˮ���� - ��ˮ����)
        double t = V / (v1 - v2);
        // ����ſ�ˮ�������ʱ�䣬���������λС��
        printf("drainage time = %.2f minute\n", t);
    }
    else {
        // �����ˮ����С�ڵ��ڽ�ˮ���ʣ�����޷��ſ�ˮ�ص���ʾ��Ϣ
        printf("Unable to empty! The inflow rate needs to be less than the drainage rate.");
    }

    // ������������������ 0
    return 0;
}

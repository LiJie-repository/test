#include <iostream> //ˮ�ɻ���
using namespace std;
int main()
{
    int num = 0;
    do
    {
        int a = 0; // ���ֵĸ�λ
        int b = 0; // ���ֵ�ʮλ
        int c = 0; // ���ֵİ�λ

        a = num % 10;
        b = num / 10 % 10;
        c = num / 100;

        if (a * a * a + b * b * b + c * c * c == num)
        {
            cout << num << endl;
        }
        num++;
    } while (num < 1000);
}
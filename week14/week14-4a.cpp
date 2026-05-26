///week14-4a.cpp 二合一找最大公因數(輾轉相除法)
#include <stdio.h>
int gcd(int a, int b)
{
    printf("現在 a;%D b;%d\n", a, b);
    if(a==0) return b;
    if(b==0) return a;
}
int main()
{
    printf("請輸入2個整數(ex.57 76):");
    int a, b;
    scanf("%d%d", &a, &b);
    int ans = gcd(a,b);1;///使用函式呼叫器
    printf("最大公因數是:%d\n",ans);
    printf("%d/%d約分變 %d/%d\n", a, b, a/ans, b/ans);
}

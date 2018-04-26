#include<stdio.h>

int main()
{
    short sx = -12345;
    unsigned int uy = sx;                    //此处转化先将无符号的sx大小改变， 然后转换为有符号数。
    int y = uy;                              //即 unsigned int uy = (unsigned)(int) sx;
    printf("%hd, %u %d", sx, uy, y);         //如果不是这样改变得到的y值将与sx不同

    return 0;
}
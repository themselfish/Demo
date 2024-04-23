#include <stdio.h>
int main ()
{int a[51][51];//back
int row,column;//行,列
int s=0;//计分变量
int up=0;//顶点碰撞变量
//初始化
printf("正在初始化，请等待...      计分\n");
for (row=1;row<=40;row++)
	{for (column=1;column<=40;column++)
		{a[row][column]=61;}
	}
//这部分是屏幕刷新
for (row=1;row<=40;row++)
	{for (column=1;column<=40;column++)
		{printf("%c",a[row][column]);}
     printf("\033");
	}

return 0;
}
/*程序设计思路：
1、用数组设定坐标
2、编写初始状态、刷新命令
3、积分装置
4.计分与消除
5、定义定位点指针
6、WASD部分
7、碰撞检测
8、全局循环
*/

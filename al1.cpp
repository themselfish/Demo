//搜索算法？
//现在我们必须注意：数据结构
//设想中，核心算法是体现在change函数、loc值、 父节点和子节点（可能是预留）的使用
//数据结构问题：强调数据是无序（生成方式和算法一致） 的，索引依赖指针 
//最后父节点和子节点需要收敛一下 
//copyright reserved  
#include <stdio.h>
struct Num
{
	int state;//=0结构体数据为空 =1已经处理完成 =2暂未处理=3 raw 
	int a[3][3];
	int loc;//计划用作位置标识符
	struct Num *p;//父节点：仅存储当前最优 
	struct Num *q;//子节点 
	int zeropoint[2][2]; 
};
struct Num b[100];
//*****************************************************************主结构体 
void start ();//初始化 
void change (int dir,struct Num *p);//0的移动 
void way (struct Num *kp);//寻路
void output (); //输出控制 
struct Num* location();//当前寻址 
void print(struct Num *p); //具体输出 
void control();//用于生成、寻路、寻址的主控函数 
void point(struct Num *p);//寻找零点 
void delsta(struct Num *p);//删除数据 
int same (struct Num *p,struct Num *q);//一致比较器 
void copy (struct Num *p,struct Num *q);//复制 
//***************************************************************函数 
int main ()
{
	int i;
	for(i=0;i<=99;i++)
	{
		b[i].state=0;
	}
	start();
	control ();
	output ();
	printf("程序运行完毕…………\n");
	return 0;
 } 
 //********************************************************主函数实现 
 void start ()
 {
 	int i,j;
 	printf("请依序输入原有矩阵：\n");
 	//规定：初始矩阵存放在b[0];
 	b[0].loc=0;//初始位置标识符确定
 	b[0].state=3;
	 for(i=0;i<=2;i++)
	 {
	 	for (j=0;j<=2;j++)
	 	{
	 		scanf("%d",&b[0].a[i][j]);
	 		printf("%d ",b[0].a[i][j]);
		 }
		 printf("\n");
	  }    
	  point(&b[0]); 
	printf("请输入最后矩阵：\n");
	b[1].loc=-1;
	b[1].state=1;
	for(i=0;i<=2;i++)
	 {
	 	for (j=0;j<=2;j++)
	 	{
	 		scanf("%d",&b[1].a[i][j]);
	 		printf("%d ",b[1].a[i][j]);
		 }
		 printf("\n");
	  }  
 	printf("输入完毕\n");
	 point(&b[1]); 	
 }
 void output ()
 {
 	printf("aaa");
 	int i=0;
 	struct Num *r;
 	print(&b[0]);
 	r=&b[1];	
 	while (same(&b[0],r)!=1)
 	{
 		print(r);
 		r=(*r).p;
	 }
	 //异常简洁，难绷  
 }
 void print(struct Num *p)
 {
 	int i,j;
 	printf("下面是第%d步:\n",(*p).loc);
 	for(i=0;i<=2;i++)
 	{
 		for(j=0;j<=2;j++)
 		{
 			printf("%d ",(*p).a[i][j]);
		 }
		 printf("\n");
	 }
 }
  void point(struct Num *p)
  {
  	int i,j;
  	for(i=0;i<=2;i++)
  	{
  		for(j=0;j<=2;j++)
  		{
  			if((*p).a[i][j]==0)
  			{
  				(*p).zeropoint[1][0]=i;
  				(*p).zeropoint[0][1]=j;
  				break;
			  }
		  }
	  }
  }
  /**************************************************/
  void control()//核心代码 
  {
  	int i,j;
  	struct Num *p;
  	p=b;
  	for (j=0;j<=3;j++)
  	{
  		for(i=0;i<=99;i++)
  		{  				
  		if((*(p+i)).state==3)
 	 	{printf("L130:i=%d;j=%d\n",i,j);
 	 	print((p+i));
  		if((*(p+i)).zeropoint[1][0]==0&&(*(p+i)).zeropoint[0][1]==0)
  		{
  			change(3,(p+i));
  			change(4,(p+i));
		  }
  		if((*(p+i)).zeropoint[1][0]==0&&(*(p+i)).zeropoint[0][1]==2)
  		{
  			change(1,(p+i));
  			change(4,(p+i));
	  	}
  		if((*(p+i)).zeropoint[1][0]==2&&(*(p+i)).zeropoint[0][1]==0)
  		{
	  		change(2,(p+i));
	  		change(3,(p+i));
		  }
	  	if((*(p+i)).zeropoint[1][0]==2&&(*(p+i)).zeropoint[0][1]==2)
	  	{
	  		change(1,(p+i));
	  		change(2,(p+i));
		  }
//******************************************************
  		if((*(p+i)).zeropoint[1][0]==0&&(*(p+i)).zeropoint[0][1]==1)
  		{
	  		change(3,(p+i));
  			change(4,(p+i));
  			change(1,(p+i));
	  	}	  
  		if((*(p+i)).zeropoint[1][0]==1&&(*(p+i)).zeropoint[0][1]==0)
  		{
	  		change(3,(p+i));
	  		change(4,(p+i));
	  		change(2,(p+i));
		  }
	  	if((*(p+i)).zeropoint[1][0]==1&&(*(p+i)).zeropoint[0][1]==2)
	  	{
	  		change(1,(p+i));
	  		change(4,(p+i));
	  		change(2,(p+i));
		  }
		if((*(p+i)).zeropoint[1][0]==2&&(*(p+i)).zeropoint[0][1]==1)
	  	{
	  		change(1,(p+i));
	  		change(3,(p+i));
	  		change(2,(p+i));
		  }
		if((*(p+i)).zeropoint[1][0]==1&&(*(p+i)).zeropoint[0][1]==1)
	  	{
//	  		printf("中\n"); 
	  		change(1,(p+i));
	  		change(4,(p+i));
	  		change(2,(p+i));
	  		change(3,(p+i));
		  }	
		  (*(p+i)).state=2;
	  }
	  }	
	  }  	  	 	
	  //*******************************************这里的b[0]是暂时的 。已经换了 
	  //父节点定义写入change //仅对全体新增计算：原理为，下一层的数据不会让上一层更新 	
  }
  
  void way (struct Num *kp)
  { 
  	//更新父节点、子节点
   	printf("Let's find the way\n");
	  int h;
	  int q=100;
	  struct Num *s;
	  for(h=0;h<=99;h++)
	  {  	
	  	if(same(&b[h],kp)==1&&b[h].loc!=(*kp).loc)
	  	{
	  		printf("自反删除\n");
	  		//这里出现了删掉自己的错误，已经修正，但是依然存在可能多分支的问题 
	  	delsta(kp);
	  	break;
	  	} 
	  	if(same(&b[h],(*kp).p)==1&&b[h].loc!=(*kp).loc)
	  	{
	  		printf("取捷径运算\n");
	  		////////////////////////////////////////////////////////////////////////
	  		if(b[h].loc<=q)
	  		{
	  			(*kp).p=&b[h];//
	  			q=b[h].loc;
	  			(*kp).loc=q++;
	  			s=&b[h];
			  }
		  }
	   }
	  // *s.q=kp;//子节点更新 (不好搞）
	  (*kp).state=3; 
  }
  /******************************************节点处理*/ 
void delsta(struct Num *p)
{
	printf("delete this:\n");
	print(p);
	(*p).state=0;
	
}
int same (struct Num *p,struct Num *q)
{
	printf("same函数\n");
	int i,j;
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			if((*p).a[i][j]!=(*q).a[i][j])
			{
				printf("not same\n");
				return (0);
			}
		}
	}
	return 1;
}
void change (int dir,struct Num *p)
{
	//只需对0和对应方位数字交换
	int d;
	int i;
	printf("L250:change function :\n");
	print(p);
	printf("change num=%d\n",dir);
	struct Num *aim;
	for (i=0;i<=99;i++)
	{
		if(b[i].state==0)
		{
			aim=&b[i];
			b[i].state=2;
			break;
		}
	}
	copy(aim,p);
	//状态：找0赋2 
	int m,n;
	m=(*p).zeropoint[1][0];
	n=(*p).zeropoint[0][1];
	//下面不全面	
	switch (dir)
	{
		case 1:
		{
			d=(*aim).a[m][n];(*aim).a[m][n]=(*aim).a[m][n-1];(*aim).a[m][n-1]=d;
			(*aim).zeropoint[1][0]=m;(*aim).zeropoint[0][1]=n-1;
			break;
		}
		case 2:
		{
			d=(*aim).a[m][n];(*aim).a[m][n]=(*aim).a[m-1][n];(*aim).a[m-1][n]=d;
			(*aim).zeropoint[1][0]=m-1;(*aim).zeropoint[0][1]=n;
			break;
		}
		case 3:
		{
			d=(*aim).a[m][n];(*aim).a[m][n]=(*aim).a[m][n+1];(*aim).a[m][n+1]=d;
			(*aim).zeropoint[1][0]=m;(*aim).zeropoint[0][1]=n+1;
			break;
		}
		case 4:
		{
			d=(*aim).a[m][n];(*aim).a[m][n]=(*aim).a[m+1][n];(*aim).a[m+1][n]=d;
			(*aim).zeropoint[1][0]=m+1;(*aim).zeropoint[0][1]=n;
			break;
		}
	 } 
	(*aim).state=3; 
	(*aim).loc=(*p).loc+1; 
	printf("changed:\n");
	print(aim);
	way ((aim));
	(*aim).p=p;print((*aim).p);
}
void copy (struct Num *p,struct Num *q)
{
	int i,j;
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			(*p).a[i][j]=(*q).a[i][j];
		}
	}
	(*p).zeropoint[1][0]=(*q).zeropoint[1][0];
	(*p).zeropoint[0][1]=(*q).zeropoint[0][1];	
}

//�����㷨��
//�������Ǳ���ע�⣺���ݽṹ
//�����У������㷨��������change������locֵ�� ���ڵ���ӽڵ㣨������Ԥ������ʹ��
//���ݽṹ���⣺ǿ���������������ɷ�ʽ���㷨һ�£� �ģ���������ָ�� 
//��󸸽ڵ���ӽڵ���Ҫ����һ�� 
//copyright reserved  
#include <stdio.h>
struct Num
{
	int state;//=0�ṹ������Ϊ�� =1�Ѿ�������� =2��δ����=3 raw 
	int a[3][3];
	int loc;//�ƻ�����λ�ñ�ʶ��
	struct Num *p;//���ڵ㣺���洢��ǰ���� 
	struct Num *q;//�ӽڵ� 
	int zeropoint[2][2]; 
};
struct Num b[100];
//*****************************************************************���ṹ�� 
void start ();//��ʼ�� 
void change (int dir,struct Num *p);//0���ƶ� 
void way (struct Num *kp);//Ѱ·
void output (); //������� 
struct Num* location();//��ǰѰַ 
void print(struct Num *p); //������� 
void control();//�������ɡ�Ѱ·��Ѱַ�����غ��� 
void point(struct Num *p);//Ѱ����� 
void delsta(struct Num *p);//ɾ������ 
int same (struct Num *p,struct Num *q);//һ�±Ƚ��� 
void copy (struct Num *p,struct Num *q);//���� 
//***************************************************************���� 
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
	printf("����������ϡ�������\n");
	return 0;
 } 
 //********************************************************������ʵ�� 
 void start ()
 {
 	int i,j;
 	printf("����������ԭ�о���\n");
 	//�涨����ʼ��������b[0];
 	b[0].loc=0;//��ʼλ�ñ�ʶ��ȷ��
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
	printf("������������\n");
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
 	printf("�������\n");
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
	 //�쳣��࣬�ѱ�  
 }
 void print(struct Num *p)
 {
 	int i,j;
 	printf("�����ǵ�%d��:\n",(*p).loc);
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
  void control()//���Ĵ��� 
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
//	  		printf("��\n"); 
	  		change(1,(p+i));
	  		change(4,(p+i));
	  		change(2,(p+i));
	  		change(3,(p+i));
		  }	
		  (*(p+i)).state=2;
	  }
	  }	
	  }  	  	 	
	  //*******************************************�����b[0]����ʱ�� ���Ѿ����� 
	  //���ڵ㶨��д��change //����ȫ���������㣺ԭ��Ϊ����һ������ݲ�������һ����� 	
  }
  
  void way (struct Num *kp)
  { 
  	//���¸��ڵ㡢�ӽڵ�
   	printf("Let's find the way\n");
	  int h;
	  int q=100;
	  struct Num *s;
	  for(h=0;h<=99;h++)
	  {  	
	  	if(same(&b[h],kp)==1&&b[h].loc!=(*kp).loc)
	  	{
	  		printf("�Է�ɾ��\n");
	  		//���������ɾ���Լ��Ĵ����Ѿ�������������Ȼ���ڿ��ܶ��֧������ 
	  	delsta(kp);
	  	break;
	  	} 
	  	if(same(&b[h],(*kp).p)==1&&b[h].loc!=(*kp).loc)
	  	{
	  		printf("ȡ�ݾ�����\n");
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
	  // *s.q=kp;//�ӽڵ���� (���ø㣩
	  (*kp).state=3; 
  }
  /******************************************�ڵ㴦��*/ 
void delsta(struct Num *p)
{
	printf("delete this:\n");
	print(p);
	(*p).state=0;
	
}
int same (struct Num *p,struct Num *q)
{
	printf("same����\n");
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
	//ֻ���0�Ͷ�Ӧ��λ���ֽ���
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
	//״̬����0��2 
	int m,n;
	m=(*p).zeropoint[1][0];
	n=(*p).zeropoint[0][1];
	//���治ȫ��	
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

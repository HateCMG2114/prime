/*

at last I changed its aim ,only three man with three subject ;cause I got i and j wrong before ,lazy as me ;
【示例】一个学习小组有5个人，每个人有三门课的考试成绩。求全组分科的平均成绩和各科总平均成绩。
-- 	张 	王 	李 	赵 	周
Math 	80 	61 	59 	85 	76
C 	75 	65 	63 	87 	77
Eng 	92 	71 	70 	90 	85

可设一个二维数组a[5][3]存放五个人三门课的成绩。再设一个一维数组v[3]存放所求得各分科平均成绩，设变量average 为全组各科总平均成绩。编程如下：
*/
#include <stdio.h>
int main()
{
int i,j;
int sum;
float average;
int v[3], a[3][3];
printf ("input the 5 scores of each subject");
for (i=0;i<3;i++)
{
	for (j=0;j<3;j++)
		{
		scanf("%d",&a[j][i]);
		sum +=a[j][i];
		}
	v[i]=sum/3;
	sum=0;
}
average=(v[0]+v[1]+v[2])/3;
printf("the ideal one is %d %d %d\n",v[0],v[1],v[2]);
printf("the average of all subject is %f\n",average);
return 0;		
}

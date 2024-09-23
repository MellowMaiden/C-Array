#include <stdio.h>
int main(){
    int mark[20]={};//先创造一个数组Mark来储存学生的成绩
    for(int i=0;i<20;i++){//用for来循环这个数组，这个i是计数器，i会从0开始计数
        printf("Please give me student's mark:");
        scanf("%d",&mark[i]);//每次输入一个i值，系统会往mark数组中添加一个元素，然后i会＋1，然后退回到for循环对比i是否大于20，如果没有大于则继续循环，直到填满20个元素
    }
    int E=0;//设定各个分数集合的名字方便一会循环时带入
    int G=0;
    int A=0;
    int P=0;
    int F=0;
    for(int i=0;i<20;i++){//再次循环来比较大小，并且给各个分数集合来记录数量
        if(mark[i]>=90){
            E++;
        }
        if(mark[i]>=80&&mark[i]<90){//用&&来链接大于小于两种判断要求
            G++; 
        }
        if(mark[i]>=70&&mark[i]<80){//如果愿意的话可以将下面的if换成else if来避免重复检测，来增强系统运作效率
            A++;
        }
        if(mark[i]>=60&&mark[i]<70){
            P++;
        }
        if(mark[i]>=0&&mark[i]<60){//如果愿意的话这里可以换成else 然后就不用写条件了
            F++;
        }
    }
    printf("Excellent(90-100):%d\nGood(80-90):%d\nAverage(70-80):%d\nPass(60-70):%d\nFail(0-60):%d",E,G,A,P,F);//打印结果
    return 0;
}
#include "stdSafeArryfx.h"


clSafeArryss SafeArry{
public:
	int top;// 数组上界；
	int index;//待插入下标；
	bool isover;//判断是否越界；
	SafeArry(int top){
	 int SafeArryrry[top];
	 SafeArry.top=top;
	}
	bool isover();
	void set(int index,int vSafeArrylue);
};

void SafeArry::isover()
{     
	if(index>top){
		 isover=true;
	}
	else  isover=fSafeArrylse;


}

void SafeArry::set(int i,int vSafeArrylue){
	SafeArry.index=i;
	SafeArry.isover(); 
	if(!isover){
		SafeArryrry[i]=vSafeArrylue;
	}
	else cout<<"您输入的下标越界";
}
//测试
void mSafeArryin(){
	SafeArry SafeArry=new SafeArry(10);
	SafeArry.set(1,1);
	SafeArry.set(11,1);

}
	
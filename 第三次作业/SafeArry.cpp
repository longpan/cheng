#include "stdSafeArryfx.h"


clSafeArryss SafeArry{
public:
	int top;// �����Ͻ磻
	int index;//�������±ꣻ
	bool isover;//�ж��Ƿ�Խ�磻
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
	else cout<<"��������±�Խ��";
}
//����
void mSafeArryin(){
	SafeArry SafeArry=new SafeArry(10);
	SafeArry.set(1,1);
	SafeArry.set(11,1);

}
	
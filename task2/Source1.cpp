#include <iosream>
using namespace std;
int studentcount=0;
int coursecount=0;
//caidan
int main(){
	int action;
	do{
		cout<<"-----------�˵�-----------"<<endl;
		cout<<"1)ѧ���б�"<<endl;
		cout<<"2)�γ��б�"<<endl;
		cout<<"3)���ѧ��"<<endl;
		cout<<"4)��ӿγ�"<<endl;
		cout<<"5)ɾ���γ�"<<endl;
		cout<<"6)ѡ��"<<endl;
		cout<<"7)�˿�"<<endl;
		cout<<"8)ѧ��ѡ���б�"<<endl;

cin>>action:
switch(action){
case 1:
	studentlist();
	break;
case 2:
	courselist();
	break;
case 3:
	addstudent();
	break;
case 4:
	addcourse();
	break;
	case :
    deletestudent();
	break;
	case 6:
	selectcourse();
	break;
	case 7:
	deleteselectcourse();
	break;
default:
	cout<<"�������˴���Ĳ˵�";
}
}
while(1);
��
	//add
	void addstudent(){
       struct Student student;
	   input(student);

	   int i=0;
	   i=find(student.number);
	   if(i==0){
		   students[studentcount]=student;
		   studentcount++;
	   }
	   else  cout<<"��ѧ���Ѿ�����";
}
    void addcourse(){
		struct Course course;
	    input(course);
		int i=0;
		i=find(course.name);
		if(i==0){
			courses[coursecount]=course;
			coursescount++;
		} 
		else cout<<"��ѧ��������";
	
	}
	//delete
	void deletestudent(){
       struct Student student;
	   input(student);

	   int i=0;
	   i=find(student.number);
	   if(i!=0){
		   students[i]=null;
		  studentcount--;
	   }
	   else  cout<<"��ѧ��������";
}
    void deletecourse(){
		struct Course course;
	    input(course);
		int i=0;
		i=find(course.name);
		if(i!=0){
			courses[i]=null;
			coursescount--;
		}
		else cout<<"�ÿγ̲�����";
	
	}
//list
    void courselist(){
		cout<<"-------�γ��б�-------"<<endl;
		cout<<"�γ���\t" <<endl;

		for(int i=0;i<modeCount;i++){
			cout<<courses[i].name<<"\t"
			<<endl;
		}
	}

	void studentlist(){
		cout<<"-------ѧ���б�-------"<<endl;
		cout<<"ѧ��\t" <<"����"<<endl;

		for(int i=0;i<modeCount;i++){
			cout<<students[i].number<<"\t"
			cout<<students[i].name<<endl;
		}
	}
	

	//struct 
	struct Student{
		int number;
		char name;
		struct Course course[10];//ÿ��ѧ������һ���γ�����
		int count;//ѧ��ѡ�Ŀγ���
	}students[100];
	
	struct Course{
		
		char name;
		int grade;
	}courses[10];



	//xuanke   ѡ��
	void selectcourse(){
		struct Student student;
	
		struct Course course
			//input(course,student);
			input(student);
		    input(course);
	int i = find(student.name);
	int j=find(course.name);

	if(j == studentCount){
		cout<<"û�����ѧ����"<<endl;
	}
	


	if(i == courseCount){
		cout<<"û�����ſΣ�"<<endl;
	}else{
		students[i].course[count]=course;
	}
	}
	 //��ѡ
	void deleteselectcourse(){
		struct Student student;
	
		struct Course course
			//input(course,student);
			input(student);
		    input(course);
	int i = find(student.name);
	int j=find(course.name);

	if(j == studentCount){
		cout<<"û�����ѧ����"<<endl;
	}
	


	if(i == courseCount){
		cout<<"û�����ſΣ�"<<endl;
	}else{
		students[i].course[count]=null;   //��ѡ ��bug����û���
	}
	}
	//input
	void input(struct Course &course){
		 cout<<"�γ�����";
	  cin>>course.name;

	  
     }
	void input(struct Student &student){
		cout<<"ѧ��������";
	  cin>>student.name;
	}
    void input(struct Course &course,struct student &student){
		cout<<"ѧ��������";
	  cin>>student.name;

	  cout<<"�γ�����";
	  cin>>course.name;

	  
     }
	//find
	int findcourse(char* name){
	int i;
	for(i=0;i<courseCount;i++){
		if(strcmp(courses[i].name,name) == 0){
			break;
		}
	}
	return i;
}

	int findstudent(int* number){
	int i;
	for(i=0;i<students[].length;i++){
		if(strcmp(students[i].number,number) == 0){
			break;
		}
	}
	return i;
}

	int findstudent(char* name){
	int i;
	for(i=0;i<students[].length;i++){
		if(strcmp(students[i].name,name) == 0){
			break;
		}
	}
	return i;
}
#include <iosream>
using namespace std;
int studentcount=0;
int coursecount=0;
//caidan
int main(){
	int action;
	do{
		cout<<"-----------菜单-----------"<<endl;
		cout<<"1)学生列表"<<endl;
		cout<<"2)课程列表"<<endl;
		cout<<"3)添加学生"<<endl;
		cout<<"4)添加课程"<<endl;
		cout<<"5)删除课程"<<endl;
		cout<<"6)选课"<<endl;
		cout<<"7)退课"<<endl;
		cout<<"8)学生选课列表"<<endl;

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
	cout<<"您输入了错误的菜单";
}
}
while(1);
｝
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
	   else  cout<<"该学生已经存在";
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
		else cout<<"该学生不存在";
	
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
	   else  cout<<"该学生不存在";
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
		else cout<<"该课程不存在";
	
	}
//list
    void courselist(){
		cout<<"-------课程列表-------"<<endl;
		cout<<"课程名\t" <<endl;

		for(int i=0;i<modeCount;i++){
			cout<<courses[i].name<<"\t"
			<<endl;
		}
	}

	void studentlist(){
		cout<<"-------学生列表-------"<<endl;
		cout<<"学号\t" <<"姓名"<<endl;

		for(int i=0;i<modeCount;i++){
			cout<<students[i].number<<"\t"
			cout<<students[i].name<<endl;
		}
	}
	

	//struct 
	struct Student{
		int number;
		char name;
		struct Course course[10];//每个学生都有一个课程数组
		int count;//学生选的课程数
	}students[100];
	
	struct Course{
		
		char name;
		int grade;
	}courses[10];



	//xuanke   选课
	void selectcourse(){
		struct Student student;
	
		struct Course course
			//input(course,student);
			input(student);
		    input(course);
	int i = find(student.name);
	int j=find(course.name);

	if(j == studentCount){
		cout<<"没有这个学生！"<<endl;
	}
	


	if(i == courseCount){
		cout<<"没有这门课！"<<endl;
	}else{
		students[i].course[count]=course;
	}
	}
	 //退选
	void deleteselectcourse(){
		struct Student student;
	
		struct Course course
			//input(course,student);
			input(student);
		    input(course);
	int i = find(student.name);
	int j=find(course.name);

	if(j == studentCount){
		cout<<"没有这个学生！"<<endl;
	}
	


	if(i == courseCount){
		cout<<"没有这门课！"<<endl;
	}else{
		students[i].course[count]=null;   //退选 有bug，还没解决
	}
	}
	//input
	void input(struct Course &course){
		 cout<<"课程名：";
	  cin>>course.name;

	  
     }
	void input(struct Student &student){
		cout<<"学生姓名：";
	  cin>>student.name;
	}
    void input(struct Course &course,struct student &student){
		cout<<"学生姓名：";
	  cin>>student.name;

	  cout<<"课程名：";
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
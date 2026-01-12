#include"504_Student.h"

void Stu::getdata() {			//输入函数定义
	for (int i = 0; i < 5; i++) {
		cout << "请输入第" << i + 1 << "名学生的学号和成绩：";
		cin >> stu[i][0] >> stu[i][1];
	}
}

void Stu::max() {		//求最高分函数定义
	int maxscore = stu[0][1];
	int i = 0 ,n = 0;
	for (i = 0; i < 5; i++) {
		if (stu[i][1] > maxscore) {
			maxscore = stu[i][1];
			n = i;
		}
	}
	cout << "最高分学生的学号为：" << stu[n][0] << endl;
}
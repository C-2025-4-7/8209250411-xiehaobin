#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:             // 数据成员是私有的
	int hour;
	int minute;
	int sec;

public:				 //成员函数是公有的
	void sethour(int h) {
		hour = h;		//设置时钟
	}
	int gethour(){		//得到时钟
		return hour;
	}

	void setminute(int min) {
		minute = min;		//设置分钟
	}
	int getminute(){
		return minute;		//得到分钟
	}

	void setsec(int s) {
		sec = s;			//设置秒钟
	}
	int getsec(){
		return sec;			//得到秒钟
	}

};
int main()
{
	Time t1;           //定义t1为Time类对象
	int h, min, s;
	cout << "请输入时、分、秒：";
	cin >> h >> min >> s;
	t1.sethour(h);  //设置t1的时、分、秒
	t1.setminute(min);
	t1.setsec(s);
	cout << t1.gethour()<< "：" << t1.getminute() << "：" << t1.getsec() << endl;		//输出时间
	return 0;
}

#include"502_student.h"            //不要漏写此行，否则编译通不过
void Student::set_value(int n, const char nam[], char s)  //在类外定义set_value类函数
{
	num = n;
	strcpy_s(name, sizeof(name), nam);       //更安全的字符串复制函数
    sex = s;
}

void Student::display()         //在类外定义display类函数
{
    cout << "num：" << num << endl;
    cout << "name：" << name << endl;
    cout << "sex：" << sex << endl;
}

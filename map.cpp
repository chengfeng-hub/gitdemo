#include <map>  
  
#include <string>  
  
#include <iostream>  
  
using namespace std;  
  
int main()  
  
{  
  
       map<int, string> mapStudent;  
  
       mapStudent.insert(pair<int, string>(1, "student_one"));  
  
       mapStudent.insert(pair<int, string>(2, "student_two"));  
  
       mapStudent.insert(pair<int, string>(3, "student_three"));  
  
        //如果你要演示输出效果，请选择以下的一种，你看到的效果会比较好  
  
       //如果要删除1,用迭代器删除  
  
       map<int, string>::iterator iter;  
  
       iter = mapStudent.find(1);  
  
       mapStudent.erase(iter);  
  
       //如果要删除1，用关键字删除  
  
       int n = mapStudent.erase(1);//如果删除了会返回1，否则返回0  
  
       //用迭代器，成片的删除  
  
       //一下代码把整个map清空  
  
       mapStudent.erase( mapStudent.begin(), mapStudent.end() );  
  
       //成片删除要注意的是，也是STL的特性，删除区间是一个前闭后开的集合  
  
       //自个加上遍历代码，打印输出吧  
       system("pause");
  
}  
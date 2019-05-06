## 977 有序数组的平方
![在这里插入图片描述](https://img-blog.csdnimg.cn/20190506145714914.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L2x1aGFvMTk5ODA5MDk=,size_16,color_FFFFFF,t_70)

## 总结
- python中array.sort()无return值，sorted(array)有return值，都是对array排序;
- C++STL中vector用法！
---
## STL之vector容器用法
> vector实际上是一个动态数组
>它预先指向一段连续的已分配好的内存空间

**1.0 头文件**
```c
#include <vector>
```

**1.1 创建vector**
```c
vector<int> A;     //声明一个int型vector
vector<int> A(10); //初始大小为10
vector<int> A(10, 1); //全部初始化为1

**1.2 基本用法**
```c
A.size();  //vector大小
A.max_size(); //最大容量
A.empty();  //是否为空

A.push_back(); //末尾添加元素
A.pop_back();  //删除末尾元素
A.clear();    //清空vector

```

**1.3 vector遍历**
```c
//法一：iterator迭代
vector<int>::iterator it;
for (it = vec.begin(); it != vec.end(); it++)
    cout << *it << endl;

//法二：下标访问
for (size_t i = 0; i < vec.size(); i++) {
    cout << vec.at(i) << endl;
}
```

参考详细链接：
https://www.cnblogs.com/zhonghuasong/p/5975979.html




## 349 两个数组的交集
![在这里插入图片描述](https://img-blog.csdnimg.cn/20190507025856170.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L2x1aGFvMTk5ODA5MDk=,size_16,color_FFFFFF,t_70)


## 总结
- python中列表转集合:  S = set(array)
- python中集合运算:  &取交集     |取并集      -差集
- python中集合方法:  set.add(x) 添加元素x  set.pop(x) 删除元素x
- C++中STL的set容器用法总结如下：
## STL之set容器用法
- set中每个元素都唯一，就像集合；
- set中每个元素都是排好序的，因为内部采用红黑树实现；
- set区别与vector，它不能通过下标访问；

**1.0 头文件**
```c
#include <set>
```

**1.1 创建set**
```c
set<int> S;     //声明一个int型vector
set<int> S(10); //初始大小为10
```

**1.2 基本用法**
```c
S.size()     //集合大小
S.insert(x)  //插入元素x
S.erase(x)  //删除元素x
S.clear()   //清空集合
S.count(x)  //集合中x元素的
```

**1.3 set容器的遍历**
```c
//采用iterator迭代
set<int>::iterator it;
for (it=S.begin(); it!=S.end(); ++it)
    cout << ' ' << *it;
//使用auto
for (auto s:S)
	cout << s;
```

## 344 反转字符串
![344](https://img-blog.csdnimg.cn/20190506162059218.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L2x1aGFvMTk5ODA5MDk=,size_16,color_FFFFFF,t_70)


## 总结
- python中反转列表： 1. a.reverse();  2. a = a[::-1];
- C++ <iostream>中有swap()函数，额外使用O(1)的空间
- C++更简洁的写法
```cpp
//m、n分别指向列表的首尾
while (m<n) {
	swap(s[m++],s[n--]);
}
```

## 258 各位相加
![在这里插入图片描述](https://img-blog.csdnimg.cn/20190507041204779.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L2x1aGFvMTk5ODA5MDk=,size_16,color_FFFFFF,t_70)


## 总结
- 递归：数位拆分
- 不是递归在O(1)内完成，采用数学规律：
```
假如一个三位数'abc';
其值大小为s1 = 100 * a + 10 * b + 1 * c;
经过一次各位相加后，变为s2 = a + b + c;
减小的差值为(s1 -s2) = 99 * a + 9 * b;
差值可以被9整除，每一个循环都这样，缩小了9的倍数;
当num小于9，即只有一位时，直接返回num;
大于9时，如果能被9整除，则返回9;
如果不能被整除，就返回被9除的余数。
```

## leetcode 371. 两整数之和
- 不使用'+','-'运算符号实现加减法
- 即通过计算机的位运算来实现
---
![在这里插入图片描述](https://img-blog.csdnimg.cn/20190509153344719.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L2x1aGFvMTk5ODA5MDk=,size_16,color_FFFFFF,t_70)
## 总结
- [位运算的概念和应用(见CSDN)](https://blog.csdn.net/luhao19980909/article/details/89925491)
- 二进制加减法一共有4种可能，忽略进位，这正好符合异或^的定义
	
	- a+b = a^b （不考虑进位）
	- 0^1 = 1^0 = 1； 1^1 = 0^0 = 0；
- 进位通过与&运算实现，因为只有1+1才用进位

	- 1&1 = 1
	- 进位左移1位后与a^b相加，因为进的数要加到高一位上去
 - 总体采用递归实现，当不产生进位时即递归结束
 -  Leetcode会对左移报错! 因为左移可能超出int的最大表示范围；这是由于变量类型声明造成的(用long long int即可)，暂时忽略此问题
`runtime error: left shift of negative value -2147483648`

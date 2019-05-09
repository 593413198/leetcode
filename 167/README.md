## leetcode 167. 两数之和 II - 输入有序数组
- 给定**升序数列**，输出两个数的下标，且它们之和等于给定值

---
![在这里插入图片描述](https://img-blog.csdnimg.cn/20190510005403222.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L2x1aGFvMTk5ODA5MDk=,size_16,color_FFFFFF,t_70)
## 总结
- 对于升序数列，采用双指针从两边往中间搜索
	
	- 若两指针的和小于target，则左指针右移
	-  若两指针的和大于target，则右指针左移

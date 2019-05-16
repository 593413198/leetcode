## **leetcode 217. 存在重复元素**

----
![在这里插入图片描述](https://img-blog.csdnimg.cn/20190517014826830.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L2x1aGFvMTk5ODA5MDk=,size_5,color_FFFFFF,t_70)
## 总结
- 使用[C++STL的set](https://blog.csdn.net/luhao19980909/article/details/89913486)或者python中的set方法，即判断转化成set后总大小是否改变
- 另法，先排序，再将每个元素和相邻元素比较即可；复杂度是nlgn




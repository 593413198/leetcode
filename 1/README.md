## leetcode 1. 两数之和
- 给定一个数组和一个数target，找出数组中两个数之和是target，返回其下标
---
![在这里插入图片描述](https://img-blog.csdnimg.cn/20190510004657972.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L2x1aGFvMTk5ODA5MDk=,size_16,color_FFFFFF,t_70)

## 总结
- 最简单的方法：暴力搜索，O(n^2)的时间
- 进阶方法：先给数组排序，然后双指针分别从数组两边向中间搜索；（但问题是，需要return在原数组中的下标）


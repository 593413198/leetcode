## leetcode111. 二叉树的最小深度
- 求二叉搜索树的最小深度
- 注意特殊情况，即root只有一个子节点时，最小深度并不是1。因为根节点并不是叶子节点

![在这里插入图片描述](https://img-blog.csdnimg.cn/20190509010655785.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L2x1aGFvMTk5ODA5MDk=,size_16,color_FFFFFF,t_70)
## 总结
- [数据结构之二叉搜索树](https://blog.csdn.net/luhao19980909/article/details/89931636)
- 难点：对root是否有2个子节点分类讨论

	- root有2个子节点：返回两边深度的较小值+1
	- root只有1个子节点：返回此子节点的深度+1

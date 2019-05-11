## leetcode 938. 二叉搜索树的范围和
- 给定L和R，返回二叉树中大于L且小于R的所有节点之和
![在这里插入图片描述](https://img-blog.csdnimg.cn/20190512021523784.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L2x1aGFvMTk5ODA5MDk=,size_16,color_FFFFFF,t_70)

## 总结
- [数据结构：二叉搜索树](https://blog.csdn.net/luhao19980909/article/details/89931636)
- 简单版本：遍历二叉树的所有节点，根节点返回0，介于L和R之间的则将值加上
- 优化版本：若当前节点值<L，那么去它的右子树搜索；如果>R，那么去左子树搜索；这样可以有效的减少搜索量

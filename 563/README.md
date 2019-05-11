## leetcode 563. 二叉树的坡度
- 一个节点的坡度是左右子树的所有节点和的差的绝对值
- 一个树的坡度就是所有节点的坡度之和
![在这里插入图片描述](https://img-blog.csdnimg.cn/20190512031213470.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L2x1aGFvMTk5ODA5MDk=,size_16,color_FFFFFF,t_70)

## 总结
- [数据结构：二叉搜索树](https://blog.csdn.net/luhao19980909/article/details/89931636)
- 初始版本：遍历整个树，求出每个节点的左右子树的节点和，将此差值的绝对值加到ans上，最后返回结果
- 优化版本：自底向上计算子树的节点和时，可以顺便求出左右子树的差值，这样避免了重复计算

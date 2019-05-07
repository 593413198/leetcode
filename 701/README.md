## 701. 二叉搜索树中的插入操作
![在这里插入图片描述](https://img-blog.csdnimg.cn/20190508040948411.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L2x1aGFvMTk5ODA5MDk=,size_16,color_FFFFFF,t_70)
## 总结
- [数据结构之二叉搜索树BST （见CSDN）](https://blog.csdn.net/luhao19980909/article/details/89931636)

**二叉树的插入**

- insert(x):插入新节点，同时维持二叉树的性质
  
  - 1、若树空，直接插入root
  - 2、若树不空，通过不断和左右孩子比较，往下移动直到找出合适的位置
![在这里插入图片描述](https://img-blog.csdnimg.cn/20190507225047515.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L2x1aGFvMTk5ODA5MDk=,size_16,color_FFFFFF,t_70)


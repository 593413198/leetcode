## leetcode 110. 平衡二叉树
- 判断一个二叉树是否满足：所有节点的左右子树高度差最多为1
- 注意是所有子树，而不是主要根节点的左右两边高度满足即可
![在这里插入图片描述](https://img-blog.csdnimg.cn/20190512022212470.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L2x1aGFvMTk5ODA5MDk=,size_16,color_FFFFFF,t_70)

## 总结
- [数据结构：二叉搜索树](https://blog.csdn.net/luhao19980909/article/details/89931636)
- 递归实现：分别计算左右子树的高度，判断是否差的绝对值<=1
- 重点：因为需要所有子树都满足，因此返回所有递归的‘与&&’
`return isBalanced(root->left) && isBalanced(root->right); `

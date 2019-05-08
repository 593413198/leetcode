## leetcde965. 单值二叉树
 - 即检测一个二叉树所有节点的value是否相等
![在这里插入图片描述](https://img-blog.csdnimg.cn/20190509004918341.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L2x1aGFvMTk5ODA5MDk=,size_16,color_FFFFFF,t_70)

## 总结
- 先把根节点的值存起来，当做参照标准
- 递归比较，一旦不等返回false
- 难点：访问到叶子节点后就返回true？肯定不行，因为要满足所有叶子节点都访问完才可以返回true。所有通过一个&&来限制递归
```c
return isUnivalTree(z->left) && isUnivalTree(z->right);
```

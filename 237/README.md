## 237 删除链表中的节点
![在这里插入图片描述](https://img-blog.csdnimg.cn/20190506143800161.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L2x1aGFvMTk5ODA5MDk=,size_16,color_FFFFFF,t_70)

## 总结
- 删除链表某一节点，未必要找到前后节点，只需要将next的val赋给待删除节点，并将其next指向next->next即可

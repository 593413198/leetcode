## 728 自除数
![在这里插入图片描述](https://img-blog.csdnimg.cn/2019050616041587.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L2x1aGFvMTk5ODA5MDk=,size_16,color_FFFFFF,t_70)


## 总结
- 将整数number每个数位拆分:
```python
# python2.7
ans = []
while number:
	ans.insert(0,number%10) #表示数组头部插入
	number /= 10
```

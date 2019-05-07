## 832 翻转图像
![在这里插入图片描述](https://img-blog.csdnimg.cn/20190507170245354.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L2x1aGFvMTk5ODA5MDk=,size_16,color_FFFFFF,t_70)
## 总结
- C++位运算 ^亦或  &与 |或
- python之简洁地构造列表
`[[j ^ 1 for j in i[::-1]] for i in A]` 

## 位运算总结
**~ 补码**
`正数的补码：按位取反，末位加1`

**& 与**
`只有当相应位上的数都是1时，该位才取1，否则该为为0`

**| 或**
`只要相应位上存在1，那么该位就取1，均不为1，即为0`

**^ 异或**
`只有当相应位上的数字不相同时，该为才取1，若相同，即为0。`
```
//不使用额外O(1)空间来交换a,b的值
a = a ^ b;
b = b ^ a;
a = a ^ b;
```
**<< 左移**
`用来将一个数各二进制位全部向左移动若干位`
`左移n位，即表示乘以以2^n`

**>> 右移**
`用来将一个数各二进制位全部向右移动若干位`
`右移n位，即表示除以2^n`
<br/>
## 应用技巧
**1.1  将0变成1，1变成0，采用异或运算效率更高**
```c
a = 1 - a; //法一
a ^= 1;    //法二
```
<br/>

**1.2 任意数异或自身都为0，用来消除出现2n次的数**
```python
leetcode 136 只出现一次的数字
给定一个非空整数数组，除了某个元素只出现一次以外，其余每个元素均出现两次。找出那个只出现了一次的元素。
# @python2.7
class Solution(object):
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        ans = 0
        for i in nums:
	        ans ^= i
        return ans
```

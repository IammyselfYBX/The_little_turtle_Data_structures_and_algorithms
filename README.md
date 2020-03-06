# 小甲鱼数据结构与算法
[在线视频](https://www.bilibili.com/video/av82873471)

## 一、谈谈算法
### 1.算法的基本特征
输入、输出、有穷性、确定性和可行性

### 2、时间复杂度和空间复杂度
#### 1)O()
算法时间复杂度的定义：在进行算法分析时，语句总的执行次数T(n)是关于问题规模n的函数，进而分析T(n)随n的变化情况并确定T(n)的数量级。算法的时间复杂度，也就是算法的时间量度，记作：T(n)= O(f(n))。它表示随问题规模n的增大，算法执行时间的增长率和f(n)的增长率相同，称作算法的渐近时间复杂度，简称为时间复杂度。其中f(n)是问题规模n的某个函数。

**关键需要知道执行次数==时间**
一般情况下，随着输入规模n的增大，T(n)增长最慢的算法为最优算法。

## 二、线性表
### 1.基础概念
#### 1)线性表（List）
线性表（List）：由零个或多个数据元素组成的有限序列。

#### 2)头结点
头结点的数据域不存放任何信息。

### 2.顺序表
[定义结点](008第八讲线性表3顺序表——读取元素、插入操作/list.h)<br>[读取元素](008第八讲线性表3顺序表——读取元素、插入操作/getElem.c) &emsp;[插入元素](008第八讲线性表3顺序表——读取元素、插入操作/ListInsert.c) &emsp; [删除元素](009第九讲线性表4顺序表——删除操作/ListDelete.c)

### 3.单链表
[定义结点](010第十讲线性表5单链表——读取元素/node.h)<br>[读取元素](010第十讲线性表5单链表——读取元素/getElem.c) &emsp; [删除元素](011第十一讲线性表6单链表——插入、删除/ListDelete.c) &emsp; [插入元素](011第十一讲线性表6单链表——插入、删除/ListInsert.c) &emsp; [头插法](012第十二讲线性表7单链表/head_insert.c) &emsp; [尾插法](012第十二讲线性表7单链表/tail_insert.c) &emsp; [清空链表](013第十三讲线性表8单链表/ClearList.c)

### 4.静态链表——用数组描述链表
用数组描述的链表叫做静态链表，这种描述方法叫做游标实现法。

游标|5<br>(备用链表的第一个结点的下标)|2|3|4|0<br>(指向第一个链表)|6|7|...|1<br>(第一个有数值的元素的下标)
:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:
数据| |A|C|D|E| | |...| 
下标|0|1|2|3|4|5|6|...|999

[定义结点](014第十四讲线性表9静态链表/node.h)<br>[寻找备用链表头](015第十五讲线性表10静态链表/getmalloc.c) &emsp; [静态链表长度](015第十五讲线性表10静态链表/getLength.c)<br>[初始化](014第十四讲线性表9静态链表/InitList.c) &emsp; [插入元素](015第十五讲线性表10静态链表/ListInsert.c) &emsp; [删除元素](016第十六讲线性表11单链表小结/ListDelete.c)

- 我们对数组的第一个和最后一个元素做特殊处理，他们的data不存放数据。
- 我们通常把未使用的数组元素称为备用链表。
- 数组的第一个元素，即下标为0的那个元素的cur(游标)就存放备用链表的第一个结点的下标。
- 数组的最后一个元素，即下标为MAXSIZE-1的cur则存放第一个有数值的元素的下标，相当于单链表中的头结点作用。

静态链表不是一定挨着的，中间可能有空

游标|2|5|6|4|0|3|7|...|1
:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:
数据| |A| |D|E|B| |...| 
下标|0|1|2|3|4|5|6|...|999

---
##### 腾讯题目：快速找到未知长度单链表的中间节点。

遍历一遍找结果 &emsp;[快慢指针](016第十六讲线性表11单链表小结/腾讯面试题/快慢指针/GetMidNode.c)

[小结](016第十六讲线性表11单链表小结/腾讯面试题/课后作业/getMidNode.c)

![课后作业.png](016第十六讲线性表11单链表小结/腾讯面试题/课后作业/课后作业.png)

### 5.循环链表
将单链表中终端结点的指针端由空指针改为指向头结点。

[定义结点](017第十七讲线性表12循环链表/node.h)<br>[初始化部分](017第十七讲线性表12循环链表/ds_init.c) &emsp; [插入部分](017第十七讲线性表12循环链表/ds_init.c) &emsp; [删除部分](017第十七讲线性表12循环链表/ds_delete.c) &emsp; [返回结点所在位置](017第十七讲线性表12循环链表/ds_search.c) &emsp; [遍历](017第十七讲线性表12循环链表/ds_traverse.c)<br>[主函数](017第十七讲线性表12循环链表/CirLL.c)

![循环链表.pn](017第十七讲线性表12循环链表/循环链表.png)

---
#### 循环链表应用
##### [约瑟夫问题](018第十八讲线性表13循环链表应用——约瑟夫问题/Josephus.c)
据说著名犹太历史学家 Josephus有过以下的故事：在罗马人占领乔塔帕特后，39个犹太人与Josephus及他的朋友躲到一个洞中，39个犹太人决定宁愿死也不要被敌人抓到，于是决定了一个自杀方式，41个人排成一个圆圈，由第1个人开始报数，每报数到第3人该人就必须自杀，然后再由下一个重新报数，直到所有人都自杀身亡为止。

然而Josephus和他的朋友并不想遵从，Josephus要他的朋友先假装遵从，他将朋友与自己安排在第16个与第31个位置，于是逃过了这场死亡游戏。

##### [连接两个链表](019第十九讲线性表14循环链表/1.连接两个链表/cennect.c)
实现将两个线性表（a1，a2，…，an）和（b1，b2，…，bm）连接成一个线性表（a1，…，an，b1，…bm）的运算。

###### 分析：
若在单链表或头指针表示的单循环表上做这种链接操作，都需要遍历第一个链表，找到结点an，然后将结点b1链到an的后面，其执行时间是O(n)。
若在尾指针表示的单循环链表上实现，则只需修改指针，无须遍历，其执行时间是O(1)。

##### [判断单链表是否有环](019第十九讲线性表14循环链表/2.判断环/loop.c)
方法一：使用p、q两个指针，p总是向前走，但q每次都从头开始走，对于每个节点，看p走的步数是否和q一样。如图，当p从6走到3时，用了6步，此时若q从head出发，则只需两步就到3，因而步数不等，出现矛盾，存在环。

方法二：使用p、q两个指针，p每次向前走一步，q每次向前走两步，若在某个时候p == q，则存在环。

![判断环.png](019第十九讲线性表14循环链表/2.判断环/判断环.png)

##### [魔术师发牌问题](020第二十讲线性表15循环链表应用——魔术师拉丁方针/1.魔术师发牌问题/Magician.c)
问题描述：魔术师利用一副牌中的13张黑牌，预先将他们排好后叠放在一起，牌面朝下。对观众说：“我不看牌，只数数就可以猜到每张牌是什么，我大声数数，你们听，不信？现场演示。”魔术师将最上面的那张牌数为1，把他翻过来正好是黑桃A，将黑桃A放在桌子上，第二次数1,2，将第一张牌放在这些牌的下面，将第二张牌翻过来，正好是黑桃2，也将它放在桌子上这样依次进行将13张牌全部翻出，准确无误。

问题：牌的开始顺序是如何安排的？

##### [拉丁方阵问题](020第二十讲线性表15循环链表应用——魔术师拉丁方针/2.拉丁方阵问题/latin.c)
拉丁方阵是一种n×n的方阵，方阵中恰有n种不同的元素，每种元素恰有n个，并且每种元素在一行和一列中 恰好出现一次。著名数学家和物理学家欧拉使用拉丁字母来作为拉丁方阵里元素的符号，拉丁方阵因此而得名。

例如下图是一个3×3的拉丁方阵：

1|2|3
:-:|:-:|:-:
2|3|1
3|1|2

### 6.双向链表
[定义结点](021第二十一讲线性表16双向链表/node.h)<br>[插入](021第二十一讲线性表16双向链表/Insert.c) &emsp; [删除](021第二十一讲线性表16双向链表/ListDelete.c)

---
#### 双向链表应用
##### [链表逆序输出](021第二十一讲线性表16双向链表/1.链表逆序输出/test.c)

### 7.双向循环链表
---
#### 双向循环链表应用
##### [凯撒加密](022第二十二讲线性表17双向循环链表/1.给定起始位置输出/main.c)
要求实现用户输入一个数使得26个字母的排列发生变化，例如用户输入3，输出结果：```DEFGHIJKLMNOPQRSTUVWXYZABC```

同时需要支持负数，例如用户输入-3，输出结果：```XYZABCDEFGHIJKLMNOPQRSTUVW```


##### [Vigenere（维吉尼亚）加密](022第二十二讲线性表17双向循环链表/2.Vigenere/main.c)
凯撒加密的弊端就是利用**概率论**的方法破解。人们在单一恺撒密码的基础上扩展出多表密码，称为“维吉尼亚”密码。维吉尼亚密码引入了 **“密钥”**的概念，即根据密钥来决定用哪一行的密表来进行替换，以此来对抗字频统计。

当输入明文，自动生成随机密匙匹配明文中每个字母并移位加密。

> 为了掩盖字母使用中暴露的频率特征，解决的办法就是用多套符号代替原来的文字。

明文|I|L|O|V|E|F|I|S|H|C
:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:
随机密匙|3|15|23|2|52|1|33|49|13|19
密文|L|	A|L|X|E|G|P|P|U|V

- 建议：当然你的随机密匙生成后不能丢掉，丢掉了就很难把明文还原来了，建议把随机密匙和密文加密存储在一起。

![Vigenere.png](022第二十二讲线性表17双向循环链表/2.Vigenere/Vigenere.png)

### 8.栈
栈（Stack）是一个后进先出（Last in first out,LIFO）的线性表，它要求只在表尾进行删除和插入操作。
#### 1)栈的顺序存储结构
[定义结点](023第二十三讲栈和队列顺序栈/sqnode.h)<br>[初始化](023第二十三讲栈和队列顺序栈/Init.c) &emsp; [入栈](023第二十三讲栈和队列顺序栈/push.c) &emsp; [出栈](023第二十三讲栈和队列顺序栈/pop.c) &emsp; [清空](024第二十四讲栈和队列2顺序栈/clear.c) &emsp; [销毁](024第二十四讲栈和队列2顺序栈/DestoryStack.c) &emsp; [求长度](024第二十四讲栈和队列2顺序栈/stacklen.c)

---
#### 顺序栈应用
##### [二进制转十进制](025第二十五讲栈和队列3应用进制转换/1.二进制转十进制/main.c)  &emsp; [二进制转八进制](025第二十五讲栈和队列3应用进制转换/2.二进制转八进制/bin2oct.c) &emsp; [二进制转十六进制](025第二十五讲栈和队列3应用进制转换/3.二进制转十六进制/bin2Hexc.)
利用栈的数据结构特点，将二进制转换为十进制数。

![bin2Dec.png](025第二十五讲栈和队列3应用进制转换/1.二进制转十进制/bin2Dec.png)

##### [括号匹配](025第二十五讲栈和队列3应用进制转换/4.括号匹配/main.c)
假设数学表达式中允许包含两种括号:圆括号“()”和方括号“[]”，嵌套顺序任意。

#### 2)栈的链式存储结构
[定义结点](026第二十六讲栈和队列4链栈/stackNode.h) &emsp; [定义链表结构](026第二十六讲栈和队列4链栈/LinkStack.h)<br>
![stack.png](026第二十六讲栈和队列4链栈/stack.png)

[判断是否为空](026第二十六讲栈和队列4链栈/stackempty.c) &emsp; [压栈](026第二十六讲栈和队列4链栈/push.c) &emsp; [出栈](026第二十六讲栈和队列4链栈/pop.c)

---
#### 链栈应用
##### [逆波兰表达式, RPN](027第二十七讲栈和队列5/RPN.c)
对于```(1-2)*(4+5)```，如果用逆波兰表示法，应该是这样：```1 2 – 4 5 + * ```

![result.png](027第二十七讲栈和队列5/result.png)

##### [中缀表达式转换为后缀表达式](028第二十八讲栈和队列6表达式/M2L.c)

### 9.队列
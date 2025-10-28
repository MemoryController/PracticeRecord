### 排序

排序应当使用sort函数进行排序

sort 函数 ：sort(首位内存指针，首位内存指针+offset)

### 结构体排序

```c++
struct Edge     // 存储边
{
    int a, b, w;//w为边的权重
    bool operator< (const Edge &W)const
    {
        return w < W.w;
    }
}edges[M];
```

以w为key来进行排序

还可以多级排序

```c++
struct node {
    int data;    // 核心数据字段
    int count;   // 附加信息字段

    // 自定义比较运算符 `<`
    bool operator < (const node &t) const {
        return data < t.data || (data == t.data && count < t.count);
    }
};
```

### 位运算

```cpp
x>>=1; // 向右位移 相当于除以2并向下取整
x<<=1; // 向左位移 乘以2
```


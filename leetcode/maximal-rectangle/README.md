
# ����һ��O(n^4), Time Limit Exceed

��ֱ�ӱ����Ľⷨ��ö�پ��ε����϶˵�����¶˵㣬��֤�Ƿ�ȫ��Ϊ 1�������֤ͨ�������´𰸡�

ö�ٲ��ֵĸ��Ӷ�Ϊ O(n^4)����֤���ֿ������� O(1): 

Ԥ���� sum[i][j] ��ʾ�� (0, 0) Ϊ���϶˵㣬(i, j) Ϊ���¶˵�ľ����� 1 ����������������϶˵�Ϊ (i1, j1) ���¶˵�Ϊ (i2, j2) �ľ�����˵����� `sum[i2][j2] - sum[i1-1][j2] - sum[i2][j1-1] + sum[i1-1][sum[j1-1] == (i2-i1+1)*(j2-j1+1)`������֤ͨ����


# ��������O(n^3) 

��Ȼ����һ��ʱ�ˣ���ô��ν�һ�����͸��Ӷ���? ��Ȼ�����˵㶼����ö�ٸ��Ӷ�̫�ߣ��Ƿ���Խ�ö��һ���˵��أ� 

���뵽�ķ�����: ����ÿһ�еĵ� j �У������ۻ���������� 1 ����Ŀ����ô������ (i, j) Ϊ���¶˵�ľ������������ͨ��ö�ٸ߶Ȼ�ã����ڻ�ø߶ȵ�ͬʱ������˵�Ҳ��ȷ���ˣ��ʸ��Ӷ� O(n^3)

�������£�ԭ���� matrix��

```
11011
01110
11111
```
�ۻ�������� 1 ������� L��

```
12012
01230
12345
```

ÿ�� `matrix[i][j] == 1` ʱ��L[i][j] ��ʼ������߶�Ϊ 1...i ʱ����������Ĵ�С��
�� (2, 3) ����

- ��߶�Ϊ 1 ʱ��`width = 4`�����Ϊ `4 * 1 = 4`
- ��߶�Ϊ 2 ʱ��`width = min(4, 3) = 3`�����Ϊ `3 * 2 = 6`
- ��߶�Ϊ 3 ʱ��`width = min(4, 3, 1) = 1`�����Ϊ `1 * 3 = 3`


# ��������O(n^2)

��ǰ���෽���У��ҵ�˼ά�������Լ����������֮��: **ö�ٶ˵�**

����ö�ٶ˵���뷨��ת��ѡ��ö�پ��εײ����ڵ��У������������ľ��εײ������ڵ� i �У���ô i �� j �У�i-1 �� j �У�... , 0 �� j �е����� 1 ����Ŀ�ͻṹ��һ���߶�Ϊ h (ȡ���ڴ� matrxi[i][j] ��ʼ�������� 1 ����Ŀ) �����ӣ����Ե� i ��Ϊ���εײ������γɵ����������⣬��ת������ [Largest Rectangle in Histogram](https://leetcode.com/problems/largest-rectangle-in-histogram/description/)���� Largest Rectangle in Histogram ���� O(n) �⣬����������ĸ��Ӷȱ�Ϊ O(n^2)
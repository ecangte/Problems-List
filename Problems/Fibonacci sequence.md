## **費波那契數列** ***Fibonacci sequence*** 

`time limit` 2s
`memory limit` 256MB

### ***Statement***

費波那契數列（Fibonacci numbers）是指在一串數字中，每一項是前兩項的和。數學上的定義為：

$$
\begin{cases}
F_0 = 0 \\
F_1 = 1 \\
F_n = F_{n-1} + F_{n-2} (n\ge2)
\end{cases}
$$

由此可以求出費波那契數列的首幾項為：

$$
1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, \dots
$$

請你寫一個程式求出費波那契數列的第 $n$ 項 $mod \ 10^9 + 7$ 的值。

### ***Input***

$n$

### ***Output***

$F_n \ (mod \ 10^9+7)$

### ***Sample Input 1***

```
6
```

### ***Sample Output 1***

```
8
```

### ***Sample Input 2***

```
100000
```

### ***Sample Output 2***

```
911435502
```

### ***Note***

* $1 \le n \le 10^7$
* 所有輸入數值皆為整數

### ***Subtask***

- ***subtask1***: $5\\%$ $n \le 15$
- ***subtask2***: $15\\%$ $n \le 25$
- ***subtask4***: $80\\%$ ***As statement***



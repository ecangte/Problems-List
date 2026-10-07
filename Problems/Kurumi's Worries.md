## **久留美的煩惱** ***Kurumi's Worries*** 

`time limit` 1s
`memory limit` 256MB

### ***Statement***

**久留美**是一名 20 歲的女大學生，在她國中時母親曾因投資時，正好面臨失利雷曼兄弟倒閉、次級房貸風暴等同時爆發的金融海嘯，而損失 2000 萬日圓。

![image1](imgs/Kurumi's%20Worries/image1.jpg)
![image2](imgs/Kurumi's%20Worries/image2.jpg)

久留美為了替母親復仇，決定踏入 FX 的戰場，並用自己的聰明才智奪回 2000 萬。 （FX 為 Foreign eXchange 的縮寫，即外匯保證金交易，透過在平台存入的保證金在一定額度內買賣外匯造成損益，小額投資者也可利用較小的資金獲得較大的交易額度（槓桿），是一種高風險高報酬的投資行為。）

![image3](imgs/Kurumi's%20Worries/image3.jpg)

久留美為了這場戰役，讀了許多投資理財的書，並拿出現有的 30 萬日圓，充滿自信地踏入 FX 的戰場。但因為面對上漲時不願意賣出，結果錯過停利點，下跌時又不願意停損，又加上本次買入開了 100 倍槓桿，導致損失超過 10 萬日圓。

![image4](imgs/Kurumi's%20Worries/image4.jpg)
![image5](imgs/Kurumi's%20Worries/image5.jpg)
![image6](imgs/Kurumi's%20Worries/image6.jpg)
![image7](imgs/Kurumi's%20Worries/image7.jpg)
圖片來源：FX 戰士久留美

本次失利使久留美鬱鬱寡歡了許多天，等到回過神來才想起自己許多作業還沒交，為了順利拿到學分，久留美要以耗費最少精力的方式完成作業。

已知教授出了 $N$ 項作業，每項作業 $i$ 都有一個 $d_i$ 代表難度，和一個 $t_i$ 代表完成這項作業所需的時間。時間以 $T=0$ 開始，完成第 $i$ 作業，$T$ 就會增加 $t_i$ ，並且耗費的**精力值**為 **完成時間 $\times$ 難度**，也就是  $T\times d_i$ 。請你找出一種順序，使得耗費的精力值總和最小，並輸出耗費的精力值總合。

換句話說，每個作業為 $h_i$，設 $h = \{1, 2, \dots , N\}$，取 $h$ 的一個排列為 $(h_1, h_2, \dots , h_N)$ 使得 $E(h)$ 的值最小，$E(h)$ 的定義如下：

$$
E(h) = \sum_{i=1}^{N} \left( d_{h_i} \times \sum_{j=0}^{i} t_{h_i} \right)
$$
    
並輸出答案 $E(h)$。


### ***Input***

$N$
$t_1$ $d_1$ 
$t_2$ $d_2$ 
$\dots$
$t_{N-1}$ $d_{N-1}$ 
$t_N$ $d_N$ 

### ***Output***

輸出**最小精力值總和** $E(h)$。

### ***Sample Input***

```
4
1 1
4 3
5 4
6 7
```

### ***Sample Output***

```
145
```

### ***Note***

* $1 \le N \le 10^5$
* $1 \le t_i, d_i \le 1000$
* 所有輸入數值皆為整數

### ***Subtask***

- ***subtask1***: $10\%$ $n \le 10$
- ***subtask2***: $90\%$ ***As statement***



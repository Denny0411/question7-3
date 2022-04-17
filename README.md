# question7-3
>撰寫一程式，輸入x和n，然後以遞迴的方式計算 x^n(x^n = x * x * x * ... * x，共有n個x相乘)。

## 舉例
x = 5; n = 3,

5^3 = 5 * 5^2 = 5 * 5 * 5 = 125
## 想法
### 如何利用遞回函式計算x的冪(n)次方?
設 x = 5; n = 3,

5, n = 3

25, n = 2

125, n = 1

return 125

## v1
1. 程式不是用遞迴做的
2. 很多變數感覺都可以宣布為 extern variable
3. 有報錯:
   >control reaches end of non-void function [-Wreturn-type] gcc [Ln 23, Col 1]
### 這板爛爆了

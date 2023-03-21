# Homework_2
## ITSA 07
### 問題描述:
在做傅立葉轉換時，常會用到複數，但每次都要分開來計算實部與虛部，非常的麻煩，現在透過operator overloading的方式來簡化程式設計師的負擔。須做加減乘。
### 輸入說明:
第一列輸入一個正整數n。其後有n列，每一列代表一個想要做運算的虛數，每一列之資料依序為運算元、虛數1、虛數2。虛數的格式為a b。

輸出說明 ：
### 輸出說明:
每一列表一個運算結果。虛數的格式為a b。
### 範例:
![](https://i.imgur.com/YPNaJEs.png)
公式:
    a+c b+d
    a-c b-d
    ac-bd ad+bc
```cpp
if (key == '+'){
            cout << a+c <<' ' << b+d <<endl;
        }
        else if (key == '-'){
            cout << a-c <<' '<< b-d <<endl;
        }
        else if (key == '*'){
            cout << a*c-b*d <<' ' << a*d+b*c <<endl;
        }
```
    
## **ITSA_08**
### 問題描述:
試撰寫一個程式，由輸入一個整數，然後判別此數是否為質數。質數是指除了 1 和它本身之外，沒有其它的數可以整除它的數，例如， 2, 3, 5, 7 與 11 等皆為質數。
### 輸入說明:
輸入一個正整數。
### 輸出說明:
質數顯示 YES ；非質數顯示 NO 。
### 範例:
![](https://i.imgur.com/G8WRjzC.png)

設輸入為n，設i為2，設ans為0，透過while迴圈來讓除數+1。
透過ans來判斷n除i來判斷是否為質數，質數ans=1 不是質數ans=0。
並透過if判斷ans的數值若等於1顯示yes，否則顯示no。
```cpp
int main()
{   
    int n;   
    int i;   
    int ans;   
   
    cin >> n;   
    ans = 1;   
 
    i = 2;   
    while( i < n )   
    {   
        if( n%i == 0 )   
        {   
            ans = 0;   
        }   
        i = i+1;   
    }   
 
    if( ans == 1 )   
    {   
        cout << "YES" << endl;   
    }   
    else   
    {   
        cout << "NO" << endl;   
    }   
     
   
    return 0;   
}  
```


## **ITSA_09**
### 問題描述:
試寫一個程式，輸入一正整數N，可計算出1到N之間可被3整除的數值之總和。
### 輸入說明:
輸入一正整數。
### 輸出說明:
輸出總和。
### 範例:
![](https://i.imgur.com/dyKoc7C.png)

設輸入為a 設i等於0(計算可被3整除的數值總和) 設j來記錄1到a之間可被3整除的數字
透過for迴圈來紀錄1到a之間可被3整除的數值，並回傳加到i。
```cpp
int main() {    
    int a,i,j;     
    i=0;                 
    cin >> a;      
    for (j=1 ; j<=a; j++)    
    {  
        if (j%3==0)       
        {  
            i+=j;         
        }  
    }  
    cout << i <<endl;     
  
    return 0;     
}  
```


## **ITSA_10**
### 問題描述:
給定二個正整數，利用輾轉相除法求其最大公因數。
### 輸入說明:
給定二個正整數
### 輸出說明:
輸出最大公因數
### 範例:
假設輸入為 300 與 250, 則輸出為 50

輸入兩數a,b
先透過while來判斷a,b是否為0，不是則進行輾轉相除法透過if比較a,b的大小再讓兩數相除得出商，並將商數回傳較大值，直到某一方數值為0跳出while迴圈，再進行比大小輸出較大的數值。
```cpp 
int main()  
{  
    int a, b;  
    while( cin >> a >> b )  
    {  
        while( a!=0 and b!=0 )  
        {  
            if( a >= b )  
            {  
                a = a%b;  
            }  
            else if( b > a )  
            {  
                b = b%a;  
            }  
        }  
  
        if( a >= b )  
        {  
            cout << a << endl;  
        }  
        else  
        {  
            cout << b << endl;  
        }  
    }  
  
    return 0;  
}  
```


## ITSA 11
### 問題描述:
請設計一程式，輸入一個陣列並且反轉後再輸出。
### 輸入說明:
第一行先輸入矩陣的行、列，之後再輸入陣列元素。
### 輸出說明:
反轉後的矩陣。
### 範例:
![](https://i.imgur.com/eP5RwrF.png)

設num存放數字
```cpp
int num[50][50]
```
x、y分別為矩陣的長、寬
讀入資料存進num
```cpp
for (i=0;i<x;i++){
        for (j=0;j<y;j++){
            cin >> num[i][j];
        }
    }
```
將長寬反轉列印
```cpp
for (i=0;i<y;i++){
        for (j=0;j<x;j++){
            cout << num[j][i];
            if (j == x-1)
                cout << endl;
            else
                cout << ' ';
        }
    }
```
## **ITSA_12**
### 問題描述:
給定下列遞迴函式:
![](https://i.imgur.com/4VWP9ky.png)
請計算出 f (k) 。
### 輸入說明:
輸入值為一個大於 1 的整數。
### 輸出說明:
f(k) 的計算結果。
### 範例:
![](https://i.imgur.com/ZUwqRMZ.png)
宣告一個函式名為f，參數為n，依據題目給的遞回函式，當n=0 and 1的時候，回傳n+1，當n>1的時候，回傳f(n-1) + f(n/2)，設一變數值為a，輸出f(a)。

```cpp
#include<iostream>  
using namespace std;  
  
    int f(int n)  
    {  
        if (n == 0 || n == 1)  
        {  
            return n+1;  
        }  
        if ( n > 1 )  
        {  
            return f(n-1) + f(n/2);  
        }  
    }  
  
    int main()  
    {  
        int a;  
        cin >> a;  
        cout << f(a) << endl;  
      
          
      
  
  
    return 0;  
}
```


## ITSA 13
### 問題描述:
撲克牌的遊戲有很多種，像是大老二、撿紅點等。然而，現在您要參與的是比大小遊戲，每張牌各有其花色和數字，大小比較主要以花色為主，黑桃 > 紅心 > 方塊 > 梅花；倘若花色相同時，則比較數字。
### 輸入說明:
第一列的整數，代表撲克牌的疊數，其後有若干列，每列即為一疊牌的內容，每張牌分別以英文、數字作表示，其中 S 代表黑桃、 H 代表紅心、 D 代表方塊、 C 代表梅花。每筆資料分別以空白隔開。
### 輸出說明:
印出排列過後的撲克牌。一行是一 疊 牌， 每張牌以空白隔開。
### 範例:
![](https://i.imgur.com/RLpDzNI.png)

本題我使用Python解
首先建立一個字典，將52張牌加入並賦予其權重
讀入資料s
用迴圈找到s[i]的value並存到陣列ans中
將ans排序
把字典的key和value互換
讓迴圈跑ans將字典內對應的值印出

```python
for _ in range(int(input())):
    ans=[]
    s=input().split()
    for i in range(0,len(s),1):
        ans.append(pooker.get(s[i]))
    ans.sort(reverse=True)
    new_pooker = {v:k for k,v in pooker.items()}
    for i in ans:
        print(new_pooker[i],end=' ')
    print()
```


## **ITSA_14**
### 問題描述:
迴文是指從前面讀和從後面讀都相同的一個數字或一段文字。例如下列每一五位數的整數都是迴文： 123321 ， 55555 ， 45554 ， 11611 。請撰寫一個程式，判斷它是否迴文。
### 輸入說明:
輸入一個正整數。
### 輸出說明:
迴文印出 ” 是 ” ；非回文印出 ” 否 ” 。
### 範例:
![](https://i.imgur.com/ttgxa7S.png)
設一字串為a，輸入a字串，
透過rbegin指向a的最後一個位置和rend指向a的最前面的位置，來對字串進行判斷是否為迴文。
```cpp
#include <iostream>    
#include <string>  
using namespace std;    
    
int main()    
{  
    string a;  
    cin >> a;  
    if (a == string(a.rbegin(),a.rend()))  
    {  
        cout << "YES" << endl;  
    }  
    else  
    {  
        cout << "NO" << endl;  
    }  
      
      
      
      
      
      
      
      
      
    return 0;  
}  
```

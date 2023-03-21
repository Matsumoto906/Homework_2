pooker = {"C3":0,"C4":1,"C5":2,"C6":3,"C7":4,
          "C8":5,"C9":6,"C10":7,"C11":8,"C12":9,
          "C13":10,
          "D3":11,"D4":12,"D5":13,"D6":14,"D7":15,
          "D8":16,"D9":17,"D10":18,"D11":19,"D12":20,
          "D13":21,
          "H3":22,"H4":23,"H5":24,"H6":25,"H7":26,
          "H8":27,"H9":28,"H10":29,"H11":30,"H12":31,
          "H13":32,
          "S3":33,"S4":34,"S5":35,"S6":36,"S7":37,
          "S8":38,"S9":39,"S10":40,"S11":41,"S12":42,
          "S13":43
          ,"C1":44,"D1":45,"H1":46,"S1":47
          ,"C2":48,"D2":49,"H2":50,"S2":51}


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
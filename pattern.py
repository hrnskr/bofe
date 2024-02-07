#!/usr/bin/python
payload=''
lc={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','r','s','t','y','z','x','w','q'}
num={0,1,2,3,4,5,6,7,8,9}
for i in lc:
    for j in lc:
        for k in num:
            payload +=(i.upper() + j + str(k))
    
print payload[0:2000]

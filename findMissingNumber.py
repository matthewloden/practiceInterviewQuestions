arr = [1,2,3,4,5,7,8,9,10]
N = 10
arrsum = 0
for i in arr:
    arrsum += i

# print(arrsum)
realarrsum = 0
j = 0
for j in range(N+1):
    realarrsum += j

# print(realarrsum)
print("From the list: ",arr)
print("The Missing Number is: ",realarrsum-arrsum)
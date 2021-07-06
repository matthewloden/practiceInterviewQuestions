arr = [5,6,2,8,9,0,99,25,40,77,25,19,32,5,45,16,1]
N = len(arr)

print("The array given is: ",arr)

arr.sort()
print("The Numbers that appear twice are: ")
for i in range(1,N):
    if(arr[i] == arr[i-1]):
        print(arr[i])

##
##
##
#Only Works for arrays that contain two maximum repeating values
##
##
##
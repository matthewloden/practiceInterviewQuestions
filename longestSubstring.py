s = "abcabcabc"
size = len(s)

leftBound = rightBound = 0
result = 0
cursor = [0]*128
while rightBound < size:
    rightcharacter = s[rightBound]
    cursor[ord(rightcharacter)] += 1
    while cursor[ord(rightcharacter)] > 1:
        leftcharacter = s[leftBound]
        # print("leftcharacter = ",leftcharacter)
        cursor[ord(leftcharacter)] -= 1
        leftBound += 1

    result = max(result,rightBound - leftBound + 1)

    rightBound += 1

print(result)


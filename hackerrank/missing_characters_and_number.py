def missing_numbers_characters(s):
    result = ""

    l = [False]*123

    for i in range(len(s)):
        l[ord(s[i])] = True


    for i in range(48,58):
        if(l[i] == False):
            result += chr(i)

    for i in range(97,123):
        if(l[i] == False):
            result += chr(i)

    return result 

s = "abcdefghigklmnopqrstuvwxy"
print(missing_numbers_characters(s))
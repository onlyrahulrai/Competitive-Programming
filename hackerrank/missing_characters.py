def missing_characters(s):
    MAX_CHAR = 26

    x = [False for i in range(MAX_CHAR)]

    for i in range(len(s)):
        if (s[i] >= "a" and s[i] <= "z"):
            x[ord(s[i]) - ord("a")] = True

    result = ""

    for i in range(MAX_CHAR):
        if (x[i] == False):
            result += chr(i + ord("a"))

    return result

s = "abcdefghigklmnopqrstuvwxy"

print(missing_characters(s))
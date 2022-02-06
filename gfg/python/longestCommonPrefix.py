# def longestCommonPrefix( a):
     
#     size = len(a)
 
#     # if size is 0, return empty string
#     if (size == 0):
#         return ""
 
#     if (size == 1):
#         return a[0]
 
#     # sort the array of strings
#     a.sort()
     
#     # find the minimum length from
#     # first and last string
#     end = min(len(a[0]), len(a[size - 1]))
 
#     # find the common prefix between
#     # the first and last string
#     i = 0
#     while (i < end and
#            a[0][i] == a[size - 1][i]):
#         i += 1
 
#     pre = a[0][0: i]
#     return pre
 
# # Driver Code
# if __name__ == "__main__":
 
#     input = ["geeksforgeeks", "geeks",
#                      "geek", "geezer"]
#     print("The longest Common Prefix is :" ,
#                  longestCommonPrefix(input))

def longestCommonPrefix(input):
    size = len(input)

    if(size == 0):
        return ""
    
    if(size == 1):
        return input[0]

    input.sort()

    end = min(len(input[0]),len(input[size-1]))

    i = 0

    print(input)
    while i < end and input[0][i] == input[size - 1][i]:
        i += 1

    return input[0][0:i]




input = ["geeksforgeeks", "geeks","gek", "geezer"]
print("The longest Common Prefix is :" ,longestCommonPrefix(input))
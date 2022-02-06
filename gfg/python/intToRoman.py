# def intToRoman(number):
#     nums = [1,4,5,9,10,40,50,90,100,400,500,900,1000]
#     romans = ["I","IV","V","IX","X","XC","C","XL","L","CD","D","CM","M"]

#     ans = ""

#     i = 12

#     while number != 0:
#         for _ in range(number // nums[i]):
#             ans += romans[i]

#             number -= nums[i]
#         i -= 1

#     return ans
            



# print(intToRoman(50))

def peakElement(arr, n):
    for a,i in enumerate(arr):
        print(a)

peakElement([1,2,3],2)


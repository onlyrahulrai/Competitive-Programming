n = 5

class Solution:
    def getPrimeNumber(self,n):
        flag = False
        if n <= 1:
            flag = False 
        elif (n == 1 or n == 2):
            flag = True
        else:
            for i in range(4,n):
                print(n%i)
                if (n % i) != 0:
                    flag = True
                    break
        return flag

    def primeProduct(self,l,r):
        total = 1
        for i in range(l,r):
            print(self.getPrimeNumber(i))
            if self.getPrimeNumber(i):
                total *= i
        return total

c = Solution()
print(c.primeProduct(1,10))



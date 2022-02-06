class Solution:
    def to_lower(ob,S):
        return S.lower()

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        S = input()

        ob = Solution()
        print(ob.to_lower(S))
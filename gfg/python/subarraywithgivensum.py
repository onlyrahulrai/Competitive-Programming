def subArraySum(arr,n,sum_):
    for i  in range(n):
        curr_sum = arr[i]

        j = i + 1

        while j <= n:
            if curr_sum == sum_:
                print("Sum found between")
                print(f"indexes {i} and {j-1} ")
                return 1

            if curr_sum > sum_ or j == n:
                break

            curr_sum = curr_sum + arr[j]

            j += 1
        
    print("No subarray found")
    return 0

arr = [1, 2, 4, 7, 9, 5, 10, 23]
n = len(arr)
sum_  = 7

subArraySum(arr, n, sum_)
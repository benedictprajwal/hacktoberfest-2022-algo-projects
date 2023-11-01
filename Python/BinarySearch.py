
def binary_search(arr, x, low, high):
    if high < low:
        return -1
    mid = (high + low) // 2
    if arr[mid] == x:
        return mid
    elif arr[mid] > x:
        return binary_search(arr, x, low, mid - 1)
    else:
        return binary_search(arr, x, mid + 1, high)


arr = [2, 3, 4, 6, 10, 18]
x = 10
# O/P = 4

print(binary_search(arr, x, 0, len(arr) - 1))

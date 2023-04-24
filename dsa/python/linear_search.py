def linear_search(l,n):
    for i in l:
        if i==n:
            return True
    return False
a=linear_search([1,2,3,4,5,6,7,8,9],9)
print(a)

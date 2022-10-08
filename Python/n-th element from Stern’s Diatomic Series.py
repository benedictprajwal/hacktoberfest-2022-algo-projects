# Program to find the nth element
# of Stern's Diatomic Series

# function to find nth stern'
# diatomic series
def findSDSFunc(n):

	# Initializing the DP array
	DP = [0] * (n+1)

	# SET the Base case
	DP[0] = 0
	DP[1] = 1

	# Traversing the array from
	# 2nd Element to nth Element
	for i in range(2, n+1):
		
		# Case 1: for even n
		if (int(i % 2) == 0):
			DP[i] = DP[int(i / 2)]
		
		# Case 2: for odd n
		else:
			DP[i] = (DP[int((i - 1) / 2)]
				+ DP[int((i + 1) / 2)])
	
	return DP[n]


# Driver program
n = 15

print(findSDSFunc(n))

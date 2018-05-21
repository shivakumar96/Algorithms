import math

#list of first n prime numbers....... 

n = int(input("Enter the n vale to find nth prime number  :  "))




primelist = [2,3,5,7,11,13]

if(n < 6) :
	print primelist[n-1]
	exit()

k = 6

while k <= n and len(primelist) < n:


	lower = k*math.log(k) + k*(math.log(math.log(k-1))) + k*(math.log(math.log(k-2))/math.log(k))
	lower = int(math.floor(lower))

	upper = (k+1)*math.log(k+1) + (k+1)*(math.log(math.log(k))) + (k+1)*(math.log(math.log(k-1))/math.log(k+1))
	upper = int(math.ceil(upper))

	i = lower 
	while i <= upper :
		isprime = True
		for j in range (2, int(math.ceil(math.sqrt(i)))+1,1) :
			if i%j == 0 :
				isprime = False
				break
		if isprime :
			if i not in primelist :
				primelist.append(i)
		i+=1
	k+=1

#print primelist

print n,"th prime is : ",primelist[n-1]


#Count even length
#Given a number n, find count of all binary sequences of length 2n such that sum of first n bits is same as sum of last n bits.
#The anwer can be very large. So, you have to return answer modulo 109+7.


import math
mod=1000000007
class Solution:
	def compute_value(self, n):
		a=math.factorial(2*n);
		b=math.factorial(n);
		b=b*b;
		return (a//b)%mod;



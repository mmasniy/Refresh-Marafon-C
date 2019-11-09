int mx_factorial_iter(int n) {
	long long fact;
	if(n < 0)
		return 0;
	for (fact = 1; n > 0;fact *= n--) {
		if (fact > 2147483647)
			return 0;
	}
	return fact;
}

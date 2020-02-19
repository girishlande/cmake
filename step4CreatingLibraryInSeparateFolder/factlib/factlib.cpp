int recurseFact(int n) {
	if (n==1)
		return 1;
	return n*recurseFact(n-1);
}
int main()
{
	volatile char a = 0;
	volatile char b = 0;
	int i;

	for (i = 0; i < 10; i++) {
	  a = a + (a + 1);
	}
	b = a;
	__asm__ volatile("syscall");

	return 0;
}


int main()
{
	DDRB |= (1<<PB2);
	PORTB |= (1<<PB2);

	while(1)
	{
		PORTB ^= (1<<PB2);
		
		int x=0;
		x++;

	}
	return 0;

}
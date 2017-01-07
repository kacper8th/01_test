

int main()
{
	DDRB |= (1<<PB1);
	PORTB |= (1<<PB1);

	while(1)
	{
		PORTB ^= (1<<PB1);
		
		int x=0;
		x++;

	}
	return 0;

}
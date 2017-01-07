

int main()
{
	DDRB |= (1<<PB1);
	PORTB |= (1<<PB1);

	while(1)
	{
		PORTB ^= (1<<PB1);

	}
	return 0;

}
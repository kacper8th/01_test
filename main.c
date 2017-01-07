

int main()
{
	DDRB |= (1<<PB2);
	PORTB |= (1<<PB2);

	while(1)
	{
		PORTB ^= (1<<PB2);
		
		int x=0;
		x++;
		
		int y = 0 ;
		y++;
		
		y = 10;

	}
	return 0;

}
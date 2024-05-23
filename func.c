#include<inttypes.h>
#include "lab.h"

float sum(float a, float b)
{
	if (a <= b)
		return sum(a + b, b);
	else
		return a;
}
void process4(char line[])
{
	int j = 0;
	for (int i = 0; line[i] != '\0'; i++)
	{

		if (!('0' <= line[i] && '9' >= line[i]))
		{
			j++;
		}
		line[j] = line[i + 1];


	}
}
uint8_t reverse_bits(uint8_t byte) {
	byte = (byte & 0xF0) >> 4 | (byte & 0x0F) << 4;
	byte = (byte & 0xCC) >> 2 | (byte & 0x33) << 2;
	byte = (byte & 0xAA) >> 1 | (byte & 0x55) << 1;
	return byte;
}

// Функция для переворота битов в каждом байте длинного целого числа
void reverse_bits_in_long(long long *num) {
	uint8_t *bytes = (uint8_t *)num;
	for (size_t i = 0; i < sizeof(long long); ++i) {
		bytes[i] = reverse_bits(bytes[i]);
	}
}
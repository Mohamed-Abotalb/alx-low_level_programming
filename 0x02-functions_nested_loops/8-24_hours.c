#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
*/

void jack_bauer(void)
{
int hour, minute;

for (hour = 0; hour < 24; hour++)
{
for (minute = 0; minute < 60; minute++)
{
if (hour < 10)
{
_putchar(48);
}
_putchar(hour + 48);

_putchar(':');

if (minute < 10)
{
_putchar(48);
}
_putchar(minute + 48);
_putchar('\n');
}
}
}

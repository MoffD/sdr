/*
    Simple Dice Roller
    Copyright (C) 2016  Daniel L

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int dice,sides,total,roll;
	char line_in[100];
	srand(time(NULL));
	while
	(
		scanf("%s",line_in)&&
		(sscanf(line_in,"%dd%d",&dice,&sides)>0)
	)
	{
		total=0;
		printf("\nRolling %dd%d:\n",dice,sides);
		for(int i=0;i<dice;i++)
		{
			roll=1+rand()%sides;
			total+=roll;
			printf("%d,",roll);
		}
		printf(" total: %d\n",total);
	}
	return 0;
}

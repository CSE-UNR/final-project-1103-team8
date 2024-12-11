//Perry Guerrero
//
//madlib.c word Replacer

/* IN MAIN

wordReplace()


*/



void wordReplace(int row, int rowIndex, originalString[][columnindex], ANV_string[rowIndex])
{
	for (int row = 0; row <= rowIndex; row++)
	{
		int a = 0;
		for(int i = 0; i <= columnIndex; i++)
		{
		//Length of string @current row index == 2 && ends with a '\n'
			if (originalString[row][1] == '\n')
			{
			originalString[i][0] = ANV_string[a];
			a++;
			}
		}
	}
}




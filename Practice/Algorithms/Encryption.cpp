void remove_spaces(string &s)
{
	string s1 = "";
	for(char x: s)
	{
		if(x != ' ')
		{
			s1 += x;
		}
	}
	s = s1;
}

string encryption(string s) 
{
	string cypher = "";

	remove_spaces(s);

	int n = s.size();

	int r = floor(sqrt(n));
	int c = ceil(sqrt(n));

	for(int i=0; i<c; i++)
	{
		for(int j=i; j<n; j += c)
		{
			cypher += s[j];
		}
		cypher += " ";
	}

	return cypher;
}
#include <bits/stdc++.h>
#define LL long long
#define N 1000005
using namespace std;
string st;
void work(int level,int half_level,int val)
{
	if(level==1)
	{
		if(half_level)
			cout<<"[Esc "<<val<<']';
		else cout<<val;
	}
	else if(level==0)
	{
		if(half_level)
		{
			cout<<"[Esc ";
			switch(val)
			{
				case 1:cout<<'Q';break;
				case 2:cout<<'W';break;
				case 3:cout<<'E';break;
				case 4:cout<<'R';break;
				case 5:cout<<'T';break;
				case 6:cout<<'Y';break;
				case 7:cout<<'U';break;
			}
			cout<<']';
		}
		else
			switch(val)
				{
					case 1:cout<<'Q';break;
					case 2:cout<<'W';break;
					case 3:cout<<'E';break;
					case 4:cout<<'R';break;
					case 5:cout<<'T';break;
					case 6:cout<<'Y';break;
					case 7:cout<<'U';break;
				}	
	}
	else
	{
		if(half_level)
		{
			cout<<"[Esc ";
			switch (val)
			{
				case 1:cout<<'A';break;
				case 2:cout<<'S';break;
				case 3:cout<<'D';break;
				case 4:cout<<'F';break;
				case 5:cout<<'G';break;
				case 6:cout<<'H';break;
				case 7:cout<<'J';break;
			}
			cout<<']';
		}
		else
		{
			switch (val)
			{
				case 1:cout<<'A';break;
				case 2:cout<<'S';break;
				case 3:cout<<'D';break;
				case 4:cout<<'F';break;
				case 5:cout<<'G';break;
				case 6:cout<<'H';break;
				case 7:cout<<'J';break;
			}
		}
	}
}
int main()
{
	freopen("input.in", "r", stdin);
	freopen("ouput.out", "w", stdout);  
	while(cin>>st)
	{
		while(st.length())
		{
			if(st[0]=='[')
			{
				if(st[1]=='#')
				{
					work(1,1,st[2]-48);
					st.erase(0,4);
				}
				else
				{
					work(1,0,st[1]-48);
					st.erase(0,3);
				}
			}
			else if(st[0]=='(')
			{
				if(st[1]=='#')
				{
					work(-1,1,st[2]-48);
					st.erase(0,4);
				}
				else
				{
					work(-1,0,st[1]-48);
					st.erase(0,3);
				}
			}
			else if(st[0]=='#')
			{
				work(0,1,st[1]-48);
				st.erase(0,2);
			}
			else
			{
				work(0,0,st[0]-48);
				st.erase(0,1);
			}
		}
		cout<<endl;
	}
	fclose(stdin);
 	fclose(stdout);
	return 0;
}
    

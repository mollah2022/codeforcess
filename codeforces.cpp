#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string s1;
	getline(cin,s1);
   int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0,w=0,x=0,y=0,z=0;
	for(int i=0; i<s1.size(); i++)
	{
		if(s1[i]=='a')
		{
              a++;
              if(a>1)
              {
              	a=1;
              }
		}
		else if(s1[i]=='b')
		{
             b++;
             if(b>1)
              {
              	b=1;
              }
		}
		else if(s1[i]=='c')
		{
            c++;
            if(c>1)
              {
              	c=1;
              }
		}
		else if(s1[i]=='d')
		{
              d++;
              if(d>1)
              {
              	d=1;
              }
		}
		else if(s1[i]=='e')
		{
           e++;
           if(e>1)
              {
              	e=1;
              }
		}
		else if(s1[i]=='f')
		{
            f++;
            if(f>1)
              {
              	f=1;
              }
		}
		else if(s1[i]=='g')
		{
           g++;
           if(g>1)
              {
              	g=1;
              }
		}
		else if(s1[i]=='h')
		{
              h++;
              if(h>1)
              {
              	h=1;
              }
		}
		else if(s1[i]=='i')
		{
             i++;
             if(i>1)
              {
              	i=1;
              }
		}
		else if(s1[i]=='j')
		{
            j++;
            if(j>1)
              {
              	j=1;
              }
		}
		else if(s1[i]=='k')
		{
             k++;
             if(k>1)
              {
              	k=1;
              }
		}
		else if(s1[i]=='l')
		{
                 l++;
                 if(l>1)
              {
              	l=1;
              }
		}
		else if(s1[i]=='m')
		{
              m++;
              if(m>1)
              {
              	m=1;
              }
		}

		else if(s1[i]=='n')
		{ 
                 n++;
                 if(n>1)
              {
              	n=1;
              }
		}
		else if(s1[i]=='o')
		{
           o++;
           if(o>1)
              {
              	o=1;
              }
		}else if(s1[i]=='p')
		{
          p++;
          if(p>1)
              {
              	p=1;
              }
		}
		else if(s1[i]=='q')
		{
              q++;
              if(q>1)
              {
              	q=1;
              }
		}
		else if(s1[i]=='r')
		{
            r++;
            if(r>1)
              {
              	r=1;
              }
		} 
		else if(s1[i]=='s')
		{
            s++;
            if(s>1)
              {
              	s=1;
              }
		}
		else if(s1[i]=='t')
		{
              t++;
              if(t>1)
              {
              	t=1;
              }
		}
		else if(s1[i]=='u')
		{
            u++;
            if(u>1)
              {
              	u=1;
              }
		}
		else if(s1[i]=='v')
		{
          v++;
          if(v>1)
              {
              	v=1;
              }
		}
		else if(s1[i]=='w')
		{
               w++;
               if(w>1)
              {
              	w=1;
              }
		}
		else if(s1[i]=='x')
		{
                x++;
                if(x>1)
              {
              	x=1;
              }
		}
		else if(s1[i]=='y')
		{
             y++;
             if(y>1)
              {
              	y=1;
              }
		}
		else if(s1[i]=='z')
		{
             z++;
             if(z>1)
              {
              	z=1;
              }
		}
	}
	int sum = (a+b+c+d+e+f+g+h+i+j+k+l+m+n+o+p+q+r+s+t+u+v+w+x+y+z);
	cout << sum << endl;
	return 0;
}
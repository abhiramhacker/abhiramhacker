# include <iostream>
# define inf 1000
# define max 50
using namespace std;
int d[max][max],pi[max][max],w[max][max],nv,ne;
void print();
void init()
{
	int i,j;
	for(i=1;i<=nv;i++)
		for (j=1;j<=nv;j++)
			{
				d[i][j]=w[i][j];
				if (w[i][j] == inf || i==j)  
					pi[i][j]=-1;
				else
					pi[i][j]=i;
			}
}
void printpath(int i, int j)
{
	if (i==j)
	{
		cout<<i<<"..";
		return;
	}	
	else 
	{
		if (pi[i][j]==-1)
			cout<<"No path from "<<i<<" to "<<j<<endl;
		else
		{
			printpath(i,pi[i][j]);
			cout<<j<<"..";
		}
	}
			
	
}
void floyd()
{
	int i,j,k;
	for (k=1;k<=nv;k++)
	{
		for(i=1;i<=nv;i++)
			for (j=1;j<=nv;j++)
				if (d[i][j] > d[i][k] + d[k][j])
				{
					d[i][j] = d[i][k] + d[k][j];
					pi[i][j] = pi[k][j];
				}
	}
}
void print()
{
	int i,j;
	cout<<"Distance Matrix ..\n";
	for (i=1;i<=nv;i++)
	{
		for (j=1;j<=nv;j++)
			cout<<d[i][j]<<"\t";
		cout<<endl;
	}	
	cout<<"Path matrix ..\n";
	for (i=1;i<=nv;i++)
	{
		for (j=1;j<=nv;j++)
			cout<<pi[i][j]<<"\t";
		cout<<endl;
	}	
}
int main()
{
	int i,f,t,wt,j;
	cout<<"Floyd Warshall's Algorithm\n";
	cout<<"No. of vertices and edges \n";
	cin>>nv>>ne;
	for (i=1;i<=nv;i++)
		for (j=1;j<=nv;j++)
			if (i==j)
				w[i][j]=0;
			else
				w[i][j]=inf;
	
	for (i=1;i<=ne;i++)
	{
		cout<<"Edge "<<i<<endl;
		cout<<"From and To"<<endl;
		cin>>f>>t;
		cout<<"Weight \n";
		cin>>wt;
		w[f][t]=wt;
	}	
	init();
	floyd();
	print();
	cout<<"Input : Shortest path from .. to .. "<<endl;
	cin>>f>>t;
	printpath(f,t);
	return 0;
}

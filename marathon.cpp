#include<cstdio>
#include<vector>
#include<queue>
#include<climits>
using namespace std;
struct xy{int p,d,t;}temp;
int r=2e9,n,m,k,t,tt,p,d,p1,raka[100001],ton[100001],mem[100001],timee[100001];
bool v,ch[100001];
vector<xy> a[100002];
queue<xy> Q;
main()
{
	scanf("%d %d %d %d",&n,&m,&k,&t);
	for(int i=1;i<=m;i++)
	{
		scanf("%d %d %d %d",&p1,&p,&d,&tt);
		temp.p=p,temp.d=d,temp.t=tt;
		a[p1].push_back(temp);
		temp.p=p1;
		a[p].push_back(temp);
	}
	for(int i=0;i<k;i++)
		scanf("%d %d",&raka[i],&ton[i]);
	for(int i=2;i<=n;i++) mem[i]=INT_MAX;
	temp.p=1,temp.d=0,temp.t=0;
	Q.push(temp),ch[1]=true;
	while(!Q.empty())
	{
		temp=Q.front();
		int x=temp.p;
		//printf("%d   <-\n",x);
		Q.pop();
		for(int i=0;i<a[x].size();++i)
		{
			p=a[x][i].p,d=a[x][i].d,tt=a[x][i].t;
			int g=mem[x]>d ? mem[x]:d;
			if((!ch[p]||mem[p]>=g)&&timee[x]+tt<=t)
			{
				if(mem[p]>g)
				{
					ch[p]=true;
					mem[p]=g;
					timee[p]=timee[x]+tt;
					temp.d=d,temp.p=p,temp.t=tt;
					Q.push(temp);
				}
				else if(mem[p]==g)
				{
					if(timee[p]>timee[x]+tt)
					{
						ch[p]=true;
						timee[p]=timee[x]+tt;
						temp.d=d,temp.p=p,temp.t=tt;
						Q.push(temp);
					}
				}
			}
		}
	}
	//for(int i=1;i<=n;i++) printf("%d    %d    %d\n",i,mem[i],timee[i]);
	if(mem[n]==INT_MAX)
	{
		printf("-1");
		return 0;
	}
	for(int i=0;i<k;i++)
	{
		if(ton[i]>=mem[n]&&raka[i]<r)
		{
			r=raka[i];
			v=true;
		}
	}
	if(v) printf("%d",r);
	else printf("-1");
}

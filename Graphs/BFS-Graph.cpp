class bfs{
	public:
		vector<int>bfsGraph(int V,vector<int>g[]){
			vector<int>v;
			queue<int>q;
			q.push(0);
			vector<int>vis(V,0);
			vis[0]=1;
			
			while(q.empty()){
				int td = q.front();
				q.pop();
				v.push_back(td);
				for(auto x: g[td]){
					if(!vis[x]){
						vis[x]=1;
						q.push(x);
					}
				}
			}
			return v;
		}
};

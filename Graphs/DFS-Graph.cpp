class dfs{
	public:
		vector<int>v;
		void solve(int td,vector<int>&vis,vector<int>g[]){
			vis[td]=1;
			v.push_back(td);
			for(auto x:g[td]){
				if(!vis[x]){
					solve(x,vis,g);
				}
			}
		}
		vector<int>dfsGraph(int V,vector<int>adj[]){
			vector<int>vis(V,0);
			solve(0,vis,adj);
			return v;
		}
};

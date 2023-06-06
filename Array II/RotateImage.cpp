void rotate(vector<vector<int>>& matrix) {
        queue<int> q;
        int n=matrix[0].size();
        int m=matrix.size();
        for(int i=0;i<m;i++){
            for(int j=n-1;j>=0;j--){
                q.push(matrix[j][i]);
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                matrix[i][j]=q.front();
                q.pop();
            }
        }

        
    }
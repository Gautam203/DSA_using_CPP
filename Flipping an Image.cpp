class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int row=image.size();
        for(int i=0; i<row; i++){
            reverse(image[i].begin(), image[i].end());
        }
        for(int i=0; i<row; i++){
            for(int j=0; j<row; j++){
                if(image[i][j]==0){
                    image[i][j]=1;
                }
                else if(image[i][j]==1){
                    image[i][j]=0;
                }
            }
        }
        return image;
    }
};

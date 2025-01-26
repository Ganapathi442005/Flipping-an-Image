class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<int>a;
        for(int i=0;i<image.size();i++){
            for(int j=0;j<image.size();j++){
                  a.push_back(image[i][j]);
            }

            reverse(a.begin(),a.end());
             
            
        int k=0;
        for(int j=0;j<image.size();j++)
            {
                if(a[k]==0)
                {
                    image[i][j] = 1;
                }
                else if(a[k]==1)
                {
                    image[i][j] = 0;
                }
                k++;
            }
            a.clear();
        }
        return image;
    }
    
};

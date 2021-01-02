vector<vector<int> > Solution::generateMatrix(int A) {
    vector<vector <int>> vec( A , vector<int> (A,0));
    long long int left=0,right=A-1,top=0,bottom=A-1,dir=1,counter=1;
    while(left<=right&&top<=bottom)
    {
        if(dir==1){
            for(long long int i=left;i<=right;i++)
            {
                vec[top][i] = counter;
                counter+=1;
            }
            top+=1;
            dir=2;
        }
        else if(dir==2){
            for(long long int i=top;i<=bottom;i++)
            {
                vec[i][right] = counter;
                counter+=1;
            }
            right-=1;
            dir=3;
        }
        else if(dir==3){
            for(long long int i=right;i>=left;i--)
            {
                vec[bottom][i] = counter;
                counter+=1;
            }
            bottom-=1;
            dir=4;
        }
        else if(dir==4){
            for(long long int i=bottom;i>=top;i--)
            {
                vec[i][left] = counter;
                counter+=1;
            }
            left+=1;
            dir=1;
        }
    }
    return vec;
}
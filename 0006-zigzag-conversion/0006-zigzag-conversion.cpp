class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || numRows >= s.length())
            return s;

       // vector<string> rows(numRows);
       string str = "";
       
        for(int i=0; i<numRows; i++){
           int idx = i;
           int niche = (numRows-i-1)*2;
           int ooper = 2 * i;
           bool flag = true;

           while(idx < s.length()){
              str.push_back(s[idx]);

              if(i==0){
                idx += niche;
              }else if(i==numRows-1){
                idx += ooper;
              }else{
                  if(flag == true){
                    idx += niche;
                  }else{
                    idx += ooper;
                  }

                  flag = !flag;
              }
           }
        }

         return str;  
    }
};
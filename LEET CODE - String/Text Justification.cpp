//for explaination : https://www.youtube.com/watch?v=MPzgnmH3tOg

class Solution {
public:
    
    string line(vector<string>& words,int start,int end, int Linelen,int max)
    {
        string a;
        int p=1,q=0;
        if(end!=start)
        {
            p=(max-Linelen)/(end-start);
            q=(max-Linelen)%(end-start);
        }
        
        for(int i=start;i<=end;i++)
        {
            a.append(words[i]);
            if(i!=end)
            {
                if(end==words.size()-1){
                    a.append(" ");
                }
                else {
                    for(int j=1;j<=p;j++) a.append(" ");
                    // extra spaces 
                    if(q-->=1) a.append(" ");
                }
            }
        }
        // spaces in the last line
        while(a.size()<max) a.append(" ");
        return a;
    }
    
    
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string> result;
        int word=0;
        while(word<words.size())
        {
            int j=word-1;
            int characters=0;
//             Max words that can be adjusted in one line, that is :
//             cuurent length (words[j+1].length()) + total characters seen so far for this line (characters) + the spaces between each pair of words (j+1-word)
            while(j+1<words.size() && characters+words[j+1].size() + j+1-word<=maxWidth)
            {
                j++;
                characters+=words[j].size();
            }
            // Adding each line
            string a = line(words,word,j,characters,maxWidth);
            result.push_back(a);
            word=j+1;
        }
        return result;
    }
    
};

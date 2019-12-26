#include <bits/stdc++.h>
#include<sstream>
using namespace std;
int counter[100];
int main()
{
//    string word,line;
//    while(getline(cin,line))
//    {
//        istringstream iS(line);
//        while(iS>>word)
//        {
//            cout<<word<<endl;
//        }
//        cout<<line<<endl;
//
//    }
    string in,word;
    vector<string>input;
    while(getline(cin,in))
    {
        int index=0;
        string sample;
        istringstream is(in);
        while(is>>word)
        {
            if(word.size()>counter[index])
                counter[index]=word.size();
            index++;
            sample+=word;
            sample+=" ";
        }
        sample.resize(sample.size()-1);
        //cout<<sample<<endl;
        input.push_back(sample);
    }
//    for(int i=0;counter[i];i++)
//        cout<<counter[i];
    for(int i=0;i<input.size();i++)
    {
        string sample;
        int index=0;
        istringstream is(input[i]);
        while(is>>word)
        {
            sample+=word;
            int space=counter[index++]-word.size();
            for(int j=0;j<=space;j++)
                sample+=" ";
        }
        while(sample[sample.size()-1]==' ')
            sample.resize(sample.size()-1);
        cout<<sample<<endl;
    }
	return 0;
}

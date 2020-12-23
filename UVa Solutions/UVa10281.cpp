#include <bits/stdc++.h>

using namespace std;

int main()
{
    string line;
    int prev = 0, curr = 0, sp = 0;
    double distance = 0.0;
    while(1) {
        getline(cin, line);
        if(line.size() == 0) {
            break;
        }
        if(line.size() > 8) {
            stringstream SS(line);
            string str, speed ;
            SS >> str >> speed;
            //cout << str << endl;
            //cout << speed << endl;

            int hh = ((str[0] - '0') * 10) + (str[1] - '0');
            int mm = ((str[3] - '0') * 10) + (str[4] - '0');
            int ss = ((str[6] - '0') * 10) + (str[7] - '0');

            int t = (hh * 3600) + (mm * 60) + ss;
            curr = t;
            double hour = (curr - prev) / (double)3600;
            distance += hour * sp;
            sp = 0;
            stringstream stoi(speed);
            stoi >> sp;
        }
        else {
            stringstream SS(line);
            string str;
            SS >> str;
            //cout << str << endl;
            int hh = ((str[0] - '0') * 10) + (str[1] - '0');
            int mm = ((str[3] - '0') * 10) + (str[4] - '0');
            int ss = ((str[6] - '0') * 10) + (str[7] - '0');

            int t = (hh * 3600) + (mm * 60) + ss;
            curr = t;
            double hour = (curr - prev) / (double)3600;
            //cout << hour << endl;
            distance += hour * sp;
            cout << str << " ";
            printf("%.2lf km\n", distance);
        }
        prev = curr;
    }
    return 0;
}


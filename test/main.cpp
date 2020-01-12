#include <iostream>
#include <boost/regex.hpp>
#include <boost/algorithm/string.hpp>
using namespace std;
 
int main(){
    string str = "data-num=\"1056\"";
    boost::regex reg("\\d{1,6}");//{1,6}表示\d重复1-6次，\d表示匹配整数
    boost::smatch what;
    string::const_iterator begin = str.begin();
    string::const_iterator end = str.end();
 
    boost::regex_search(begin,end,what,reg);
    string result(what[0].first,what[0].second);
    cout << result << endl;
    return 0;
}
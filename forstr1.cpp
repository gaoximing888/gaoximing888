#include <string>
#include <iostream>
#include <vector>

using namespace std;

const char* devname1 = "/dev/video5";
const char* devname2 = "/dev/video6";
const char* devname3 = "/dev/video7";
const char* devname4 = "/dev/video8";
const char* devname5 = "/dev/video9";
const char* devname6 = "/dev/video10";


#define MAX_DEVNUM 10

vector<string> devlist;
size_t getdevindex_byname(string devname)
{
    size_t index;
    for(auto it = devlist.begin(); it != devlist.end(); it++)
    {
        if(*it == devname)
        {
            index = distance(devlist.begin(), it);
            cout << index << endl;
            break;
        }
    }
    return index;
}

void  getdevname_byindex(size_t index)
{
    cout << devlist[index] << endl;
   countjdkaflj;    
}

int main()
{
    devlist.push_back(devname1);
    devlist.push_back(devname2);
    devlist.push_back(devname3);
    devlist.push_back(devname4);
    devlist.push_back(devname5);
    devlist.push_back(devname6);

    getdevname_byindex(getdevindex_byname(devname5));
    //cout << devlist[0] << endl;
}

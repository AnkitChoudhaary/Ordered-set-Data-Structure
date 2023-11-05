#include <iostream>
#include <vector>
using namespace std;
class SET
{
public:
    vector<int> data;
    int length = 0;
    bool z = false;

public:
    SET()
    {
        length = 0;
    }
    void clear()
    {
        data.clear();
        length = 0;
        cout << 0 << "\n";
    }
    int Find(int num)
    {
        int p = 0;
        int q = length - 1;
        while (true)
        {
            if ((data[(p + q) >> 1]) == num)
            {
                z = true;
                return ((p + q) >> 1);
            }
            else
            {
                if (p >= q)
                {
                    z = false;
                    if (data[p] > num)
                    {
                        return (p);
                    }
                    else
                    {
                        return (p + 1);
                    }
                }
                else if (((data[(p + q) >> 1]) < num))
                {
                    p = ((p + q) >> 1) + 1;
                }
                else
                {
                    q = ((p + q) >> 1) - 1;
                }
            }
        }
    }
    void insert(int a)
    {
        if (length == 0 || (a > data[length - 1]))
        {
            data.push_back(a);
            length += 1;
            cout << length << "\n";
        }
        else
        {
            int q = Find(a);
            if (z)
            {
                cout << length << "\n";
            }
            else
            {
                data.insert(data.begin() + q, a);
                length += 1;
                cout << length << "\n";
            }
        }
    }
    void del(int a)
    {
        if (length == 0)
        {
            cout << 0 << "\n";
        }
        else
        {
            int r = Find(a);
            if (z)
            {
                data.erase(data.begin() + r);
                length += -1;
                cout << length << "\n";
            }
            else
            {
                cout << length << "\n";
            }
        }
    }
    void Union(SET p)
    {
        int r = 0;
        int s = 0;
        vector<int> a;
        while (r < length && s < p.length)
        {
            if (data[r] > p.data[s])
            {
                a.push_back(p.data[s]);
                s += 1;
            }
            else if (data[r] == p.data[s])
            {
                a.push_back(p.data[s]);
                s += 1;
                r += 1;
            }
            else
            {
                a.push_back(data[r]);
                r += 1;
            }
        }
        for (int i = s; i < p.length; i++)
        {
            a.push_back(p.data[i]);
        }
        for (int i = r; i < length; i++)
        {
            a.push_back(data[i]);
        }
        data = a;
        length = a.size();
        cout << length << "\n";
    }
    void Intersection(SET p)
    {
        int r = 0;
        int s = 0;
        vector<int> a;
        while (r < length && s < p.length)
        {
            if (data[r] > p.data[s])
            {
                s += 1;
            }
            else if (data[r] == p.data[s])
            {
                a.push_back(p.data[s]);
                s += 1;
                r += 1;
            }
            else if (data[r] < p.data[s])
            {
                r += 1;
            }
        }
        data = a;
        length = a.size();
        cout << length << "\n";
    }
    void Diff(SET p)
    {
        int r = 0;
        int s = 0;
        while (r < length && s < p.length)
        {
            if (data[r] > p.data[s])
            {
                s += 1;
            }
            else if (data[r] == p.data[s])
            {
                data.erase(data.begin() + r);
                s += 1;
                length += -1;
            }
            else
            {
                r += 1;
            }
        }
        cout << length << "\n";
    }
    void S_diff(SET p)
    {
        int r = 0;
        int s = 0;
        vector<int> a;
        while (r < length && s < p.length)
        {
            if (data[r] > p.data[s])
            {
                a.push_back(p.data[s]);
                s += 1;
            }
            else if (data[r] == p.data[s])
            {
                s += 1;
                r += 1;
            }
            else
            {
                a.push_back(data[r]);
                r += 1;
            }
        }
        for (int i = s; i < p.length; i++)
        {
            a.push_back(p.data[i]);
        }
        for (int i = r; i < length; i++)
        {
            a.push_back(data[i]);
        }
        data = a;
        length = a.size();
        cout << length << "\n";
    }
    void print()
    {
        if (length)
        {
            for (int i = 0; i < length - 1; i++)
            {
                cout << data[i] << ",";
            }
            cout << data[length - 1];
        }
        cout << "\n";
    }
};
int main()
{
    vector<SET> s;
    while (true)
    {
        int a;
        int b;
        int c;
        cin >> a;
        switch (a)
        {
        case 1:
            cin >> b;
            if (b >= s.size())
            {
                s.push_back(SET());
            }
            cin >> c;
            s[b].insert(c);
            break;
        case 2:
            cin >> b;
            if (b >= s.size())
            {
                cin >> c;
                cout << -1 << "\n";
            }
            else
            {
                cin >> c;
                s[b].del(c);
            }
            break;
        case 3:
            cin >> b;
            if (b >= s.size())
            {
                cin >> c;
                cout << -1 << "\n";
            }
            else if (s[b].length == 0)
            {
                cin >> c;
                cout << 0 << "\n";
            }
            else
            {
                cin >> c;
                s[b].Find(c);
                cout << s[b].z << "\n";
            }
            break;
        case 4:
            cin >> b >> c;
            if (b >= s.size() && c >= s.size() && b != c)
            {
                s.push_back(SET());
                s.push_back(SET());
                cout << s[b].length << "\n";
                break;
            }
            if (b >= s.size())
            {
                s.push_back(SET());
                s[b] = s[c];
                cout << s[b].length << "\n";
                break;
            }
            if (c >= s.size())
            {
                s.push_back(SET());
                cout << s[b].length << "\n";
                break;
            }
            if (b == c)
            {
                cout << s[b].length << "\n";
                break;
            }
            s[b].Union(s[c]);
            break;
        case 5:
            cin >> b >> c;
            if (b >= s.size() && c >= s.size() && b != c)
            {
                s.push_back(SET());
                s.push_back(SET());
                cout << s[b].length << "\n";
                break;
            }
            if (b >= s.size())
            {
                s.push_back(SET());
                cout << s[b].length << "\n";
                break;
            }
            if (c > s.size())
            {
                s.push_back(SET());
                s[b] = s[c];
                cout << s[b].length << "\n";
                break;
            }
            if (b == c)
            {
                cout << s[b].length << "\n";
                break;
            }
            s[b].Intersection(s[c]);
            break;
        case 6:
            cin >> b;
            if (b >= s.size())
            {
                s.push_back(SET());
                cout << s[b].length << "\n";
                break;
            }
            cout << s[b].length << "\n";
            break;
        case 7:
            cin >> b >> c;
            if (b >= s.size() && c >= s.size() && b != c)
            {
                s.push_back(SET());
                s.push_back(SET());
                cout << s[b].length << "\n";
                break;
            }
            if (b >= s.size())
            {
                s.push_back(SET());
                cout << s[b].length << "\n";
                break;
            }
            if (c >= s.size())
            {
                s.push_back(SET());
                s[b];
                cout << s[b].length;
                break;
            }
            if (b == c)
            {
                s[b].clear();
                break;
            }
            s[b].Diff(s[c]);
            break;
        case 8:
            cin >> b >> c;
            if (b >= s.size() && c >= s.size() && b != c)
            {
                s.push_back(SET());
                s.push_back(SET());
                cout << s[b].length << "\n";
                break;
            }
            if (b >= s.size())
            {
                s.push_back(SET());
                s[b] = s[c];
                cout << s[b].length << "\n";
                break;
            }
            if (c >= s.size())
            {
                s.push_back(SET());
                cout << s[b].length << "\n";
                break;
            }
            if (b == c)
            {
                s[b].clear();
                break;
            }
            s[b].S_diff(s[c]);
            break;
        case 9:
            cin >> b;
            if (b >= s.size())
            {
                cout << "\n";
            }
            else
            {
                s[b].print();
            }
            break;
        default:
            return 0;
        }

        if (!cin)
        {
            return 0;
        }
        a = 10;
    }
    return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;

int cost[10][10], visited[10];
int n, ans = 99999;

void assignment(int person, int total)
{
    if (person == n)
    {
        ans = min(ans, total);
        return;
    }

    if (total >= ans)
        return;

    for (int job = 0; job < n; job++)
    {
        if (visited[job] == 0)
        {
            visited[job] = 1;

            assignment(person + 1, total + cost[person][job]);

            visited[job] = 0;
        }
    }
}

int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> cost[i][j];
        }
    }

    assignment(0, 0);

    cout << "Minimum Cost = " << ans;

    return 0;
}
#include <iostream>
#include <map>
#include <queue>
#include <vector>
#include <cstdio>
using namespace std;
queue<int> team;
map<int, int> teamsit;//记录队列是否包括
vector<queue<int>> mate(10);
//声明一个数组 队列

void ENQUEUE(string tes) {
    int teamnum;//表示队伍名称
    teamnum = tes[0] -'0';
    //printf("EN=%d\n", teamnum);
    if(!teamsit.count(teamnum) || teamsit[teamnum] == 0) {
        //队伍没有登记 or 此时队伍没有人, 需要重新建队
        teamsit[teamnum] = 1;
        team.push(teamnum);
        queue<int> temp;

    }
    int res = stoi(tes);
    mate[teamnum].push(res);
}

void DEQUEUE() {//输入出队编码
    //printf("2\n");
    int teamnum = team.front();//读取队列的开头名称
    //这里有一个问题，就是假设队列非空
    //printf("DE=%d\n", teamnum);
    int ans = mate[teamnum].front();
    mate[teamnum].pop();//将这个排除
    if (mate[teamnum].empty()) {
        //此时队列为空
        team.pop();//将记录队伍名称的队列pop队首
        teamsit[teamnum] = 0;
    }
    printf("%d\n", ans);
}

int main() {
    string tes;
    while (cin >> tes) {
        if (tes[0] == 'E') {
            cin >> tes;
            ENQUEUE(tes);
        } else if (tes[0] == 'D') {
            DEQUEUE();
        } else if (tes[0] == 'S') {
            break;
        } else {//全部是数字
            //printf("3");
            ENQUEUE(tes);
        }
    }
    return 0;
}
//我的代码成功运行
//************************************************
//书上代码
/*
const int maxt = 1000 + 10;
int main() {
    int t, kase = 0;
    while(scanf("%d", &t) == 1 && t) {
        printf("Scenario #%d\n", ++kase);

        //记录所有人的团队编号
        map<int, int> team;
        for (int i = 0; i < t; i++) {
            int n, x;
            scanf("%d", &n);
            while(n--) {
                scanf("%d", &x);
                team[x] = i;
            }
        }
        queue<int> q, q2[maxt];
        for(;;) {
            int x;
            char cmd[10];
            scanf("%s", cmd);
            if (cmd[0] == 'S') break;
            else if (cmd[0] == 'D') {
                int t = q.front();
                printf("%d\n",q2[t].front());
                q2[t].pop();
                if(q2[t].empty())
                    q.pop();
            }
            else if (cmd[0] == 'E') {
                scanf("%d", &x);
                int t = team[x];
                if (q2[t].empty()) q.push(t);//团队t进入队列
                q2[t].push(x);
            }
        }
        printf("\n");
    }
    return 0;
}*/
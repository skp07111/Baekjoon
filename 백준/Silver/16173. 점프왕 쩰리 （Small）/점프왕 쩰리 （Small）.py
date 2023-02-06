def dfs(x,y) :
    #정해진 영역을 벗어나거나 이미 방문을 했다면 return
    if x<=-1 or x>=N or y<=-1 or y>=N or visit[x][y]==1:
        return
    
    #방문한 곳의 이동 칸 수가 -1이라면 방문을 표시해주고 return
    if graph[x][y] == -1 :
        visit[x][y] = 1
        return

    #방문 표시
    visit[x][y]=1

    #오른쪽 이동
    dfs(x+graph[x][y],y)
    #아래쪽 이동
    dfs(x,y+graph[x][y])



#게임 구역의 크기 N
N=int(input())

#그래프 입력
graph=[list(map(int,input().split())) for _ in range(N)]

#방문 유무 저장 리스트
visit=[[0]*N for _ in range(N)]

#출발 지점
dfs(0,0)

#결과
if visit[-1][-1] == 1 :
    print('HaruHaru')
else :
    print('Hing')
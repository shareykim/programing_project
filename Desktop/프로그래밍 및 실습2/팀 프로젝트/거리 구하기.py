import requests

def get_distance_and_time(start_lat, start_lon, goal_lat, goal_lon, client_id, client_secret):
    """
    Naver Directions API를 사용하여 두 지점 사이의 거리와 시간을 계산하는 함수
    :param start_lat: 출발지의 위도
    :param start_lon: 출발지의 경도
    :param goal_lat: 도착지의 위도
    :param goal_lon: 도착지의 경도
    :param client_id: Naver Developers에서 발급받은 클라이언트 ID
    :param client_secret: Naver Developers에서 발급받은 클라이언트 시크릿
    :return: 거리(m)와 시간(s) 또는 None
    """
    url = "https://naveropenapi.apigw.ntruss.com/map-direction/v1/driving"
    headers = {
        "X-NCP-APIGW-API-KEY-ID": client_id,
        "X-NCP-APIGW-API-KEY": client_secret
    }
    params = {
        "start": f"{start_lon},{start_lat}",
        "goal": f"{goal_lon},{goal_lat}",
        "option": "fast"  # 가장 빠른 경로 옵션
    }

    response = requests.get(url, headers=headers, params=params)

    if response.status_code == 200:
        data = response.json()
        if "route" in data and "traoptimal" in data["route"]:
            distance = data["route"]["traoptimal"][0]["summary"]["distance"]  # 거리 (미터)
            duration = data["route"]["traoptimal"][0]["summary"]["duration"]  # 시간 (밀리초)
            return distance, duration / 1000  # 시간을 초 단위로 변환
        else:
            print("경로를 찾을 수 없습니다.")
            return None
    else:
        print("API 요청 실패:", response.status_code)
        return None

# 예시 사용
client_id = "l10kq6x6md"  # 실제 발급받은 클라이언트 ID 입력
client_secret = "B42VmUxX7qTtnmwcukOKBm9qKwu158D14VygAIUy"  # 실제 발급받은 클라이언트 시크릿 입력

# 사용자가 입력한 주소의 좌표 모으기
start_lat, start_lon = 37.7955573, 128.8965419  # 출발지 좌표
goal_lat, goal_lon = 37.7645305, 128.8996633 # 도착지 좌표

# 대충 파일 가지고 오는 함수 사용 좌표를 start_lat, start_lon / goal_lat, goal_lon에 각각 저장

result = get_distance_and_time(start_lat, start_lon, goal_lat, goal_lon, client_id, client_secret)
if result:
    print(f"거리: {result[0]} m, 예상 시간: {result[1]} 초")
else:
    print("거리와 시간을 계산할 수 없습니다.")





'''
출발지 좌표 위도, 경도
도착지 좌표 위도, 경도

반복문 돌리기 -> for 사용자가 다 노드를 다 저장할 때까지 -> 노드 선택하면 get_distance_and_time 
(노드의 좌표를 가지고 와서 함수에 넣고 실행) 함수 사용 -> 거리랑 예상 시간 나오면 파일에 다 저장 (번호 부여)
-> 1번 인덱스에 대해 다른 모든 좌표까지의 거리 구한 다음에 2차원 리스트에서 1차원 리스트에 저장 -> 모든 노드에 대해 구함

좌표 가지고 올 때 1 2 3 4 5 6 (이때 노드 수 6개)에 저장. 그리고 6, 6 배열을 만든다. 
0번 행은 1
1번 행은 2
2번 행은 3
3번 행은 4
4번 행은 5
5번 행은 6

그리고 각 행에 대해 
'''
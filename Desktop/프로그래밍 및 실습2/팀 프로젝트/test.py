import requests

# Overpass API URL
url = "https://overpass-api.de/api/interpreter"

# 쿼리 정의 (서울의 모든 공원 데이터 가져오기)
query = """
[out:json];
node["leisure"="park"](37.55,126.97,37.58,127.02);
out body;
"""

# GET 요청 보내기
response = requests.get(url, params={'data': query})

# JSON 데이터 출력
print(response.json())
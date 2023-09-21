# SFML 라이브러리 설치

## 웹사이트
https://www.sfml-dev.org/download/sfml/2.6.0/

## 다운로드
- c++ 17 : 2022 / 32비트

## 폴더 구조

```
- SimpleGame - External - include 
						- lib
			 - SimpleGame 
			 - SimpleGame.sln
```			

- SFML > include 전체 파일/폴더 => SimpleGame > Erternal > include
- SFML > lib 전체 파일 => SimpleGame > External > lib
- SFML > bin 전체 파일 => SimpleGame > SimpleGame

# VS 2022 환경 설정

- solution Explorer > Drop Down Menu > Properties
- 상단 공통 영역 
	- Configuration > All Configuration
	- Platform > win32
- C/C++ > General > Additional include Directories
	- SFML에서 복사해온 파일/폴더가 있는 위치(폴더)를 선택
	- $(SolutionDir) : 현재 프로젝트 폴더
	
- LInker > General > Additional Library Directories
	- SFML에서 복사해온 파일/폴더가 있는 위치(폴더)를 선택
	
- LInker > Input > additional Dependancies
	- Configuration > Release
```
sfml-system.lib
sfml-graphics.lib
sfml-window.lib
sfml-audio.lib
sfml-network.lib
```

- Linker > Input > additional Dependancies
	- Configuration > Debug
```
sfml-system-d.lib
sfml-graphics-d.lib
sfml-window-d.lib
sfml-audio-d.lib
sfml-network-d.lib
```

# Event

## Event 종류
- 사건, 상황의 변화
- Interface와 연관해서 생기는 상황의 변화
- 키보드, 마우스로 생기는 상황의 변화
	- 키보드 이벤트 : 키 입력, 
	- 마우스 이벤트 : 마우스 클릭( Press / Release ), 휠 스크롤, 더블 클릭, 움직임
- 터치 스크린 : 터치, 스와이프, 핀치
- 로딩

## Event Handling 

- Event Delegate
- Event Listning


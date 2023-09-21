# SFML ���̺귯�� ��ġ

## ������Ʈ
https://www.sfml-dev.org/download/sfml/2.6.0/

## �ٿ�ε�
- c++ 17 : 2022 / 32��Ʈ

## ���� ����

```
- SimpleGame - External - include 
						- lib
			 - SimpleGame 
			 - SimpleGame.sln
```			

- SFML > include ��ü ����/���� => SimpleGame > Erternal > include
- SFML > lib ��ü ���� => SimpleGame > External > lib
- SFML > bin ��ü ���� => SimpleGame > SimpleGame

# VS 2022 ȯ�� ����

- solution Explorer > Drop Down Menu > Properties
- ��� ���� ���� 
	- Configuration > All Configuration
	- Platform > win32
- C/C++ > General > Additional include Directories
	- SFML���� �����ؿ� ����/������ �ִ� ��ġ(����)�� ����
	- $(SolutionDir) : ���� ������Ʈ ����
	
- LInker > General > Additional Library Directories
	- SFML���� �����ؿ� ����/������ �ִ� ��ġ(����)�� ����
	
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

## Event ����
- ���, ��Ȳ�� ��ȭ
- Interface�� �����ؼ� ����� ��Ȳ�� ��ȭ
- Ű����, ���콺�� ����� ��Ȳ�� ��ȭ
	- Ű���� �̺�Ʈ : Ű �Է�, 
	- ���콺 �̺�Ʈ : ���콺 Ŭ��( Press / Release ), �� ��ũ��, ���� Ŭ��, ������
- ��ġ ��ũ�� : ��ġ, ��������, ��ġ
- �ε�

## Event Handling 

- Event Delegate
- Event Listning


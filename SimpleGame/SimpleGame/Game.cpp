#include "Game.h"

void Game::InitVariable()
{
	// nullptr : 주소값이 없는 상태 -> 아무것도 가리키지 않는 상태
	this->Window = nullptr;
}

void Game::InitWindow()
{
	this->VMode.width = 1024;
	this->VMode.height = 768;

	this->Window = new sf::RenderWindow(this->VMode, "Simple Game", sf::Style::Titlebar | sf::Style::Close);
}

Game::Game()
{
	this->InitVariable();
	this->InitWindow();

}

Game::~Game()
{
}

const bool Game::IsCreate()
{
	return this->Window->isOpen();
}

void Game::ExecEvent()
{
	while (this->Window->pollEvent(this->Event)) // 메소드
	{
		switch (this->Event.type)
		{
		case sf::Event::Closed: // sf: namespace, Event: namespace, Closed: 변수
			this->Window->close(); // close: 괄호 붙었으므로 함수(메소드)
			break;
		case sf::Event::KeyPressed:
			if (Event.key.code == sf::Keyboard::Escape) // key는 Event안에 있는 객체, code는 key 객체에 들어있는 변수(프로퍼티 or 멤버변수), 괄호 없으므로 변수
			{
				this->Window->close();
			}
			break;
		}
	}
}

void Game::Update()
{
}

void Game::Render()
{
}

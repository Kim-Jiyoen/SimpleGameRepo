#include "Game.h"

void Game::InitVariable()
{
	// nullptr : �ּҰ��� ���� ���� -> �ƹ��͵� ����Ű�� �ʴ� ����
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
	while (this->Window->pollEvent(this->Event)) // �޼ҵ�
	{
		switch (this->Event.type)
		{
		case sf::Event::Closed: // sf: namespace, Event: namespace, Closed: ����
			this->Window->close(); // close: ��ȣ �پ����Ƿ� �Լ�(�޼ҵ�)
			break;
		case sf::Event::KeyPressed:
			if (Event.key.code == sf::Keyboard::Escape) // key�� Event�ȿ� �ִ� ��ü, code�� key ��ü�� ����ִ� ����(������Ƽ or �������), ��ȣ �����Ƿ� ����
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

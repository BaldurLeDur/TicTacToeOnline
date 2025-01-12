#pragma once
#include <SFML/System/String.hpp>
#include <SFML/Graphics.hpp>
#include "GameObject.h"

class Case : public GameObject
{
	public:
		Case(float x, float y);

		void setValue(int val);
		int getValue();

		void draw(sf::RenderWindow& window) override;
		void onMouseClick() override;
		void onMouseRelease() override;

	private:
		int value = 0;
		sf::RectangleShape rect;

		sf::CircleShape player1;
		sf::RectangleShape player2;

		int width = 60;
		int height = 60;

		bool is_pressed = false;
};
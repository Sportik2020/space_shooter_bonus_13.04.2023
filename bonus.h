#pragma once
#include "settings.h"

class Bonus {
public:
	enum BonusType { MEDKIT, SPEED_BOOST, KABOOM, MAX_BONUS_TYPE };
	Bonus(sf::Vector2f meteorPos, size_t bonusType);
private:
	BonusType type;
	sf::Sprite sprite;
	sf::Texture texture;


};
Bonus::Bonus(sf::Vector2f meteorPos, size_t bonusType) {
	if (type == MEDKIT) {
		texture.loadFromFile(Medkit_File_Name);
	};
	if (type == SPEED_BOOST) {
		texture.loadFromFile(Speedbonus_File_Name);
	};
	if (type == KABOOM) {
		texture.loadFromFile(Kaboom_File_Name);
	};
	sprite.setTexture(texture);
	sprite.setPosition(meteorPos);
}
sf::FloatRect getHitBox();
sf::Vector2f getPosition();
void Update();
void Draw();
	

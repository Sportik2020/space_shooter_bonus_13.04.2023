#include "settings.h"
#include "game.h"
#include "meteor.h"
#include "Bullet.h"
#include "TextObj.h"
using namespace sf;
enum GameStatus { Play, Game_Over };
int main()
{
	srand(time(nullptr));
	Game game;
	game.play();
	return 0;
}
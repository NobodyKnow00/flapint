#include "raylib.h"

int main()
{

	int widthScreen = 800, heightScreen = 600;

	InitWindow(widthScreen, heightScreen, "Flapin't");

	while (!WindowShouldClose())
	{
		BeginDrawing();

		ClearBackground(SKYBLUE);

		DrawText(TextFormat("Flappy birdn't "), 210, 150, 60, WHITE);

		DrawText(TextFormat("Jugar "), 325, 250, 40, WHITE);
		DrawText(TextFormat("Controles "), 325, 300, 40, WHITE);
		DrawText(TextFormat("Creditos "), 325, 350, 40, WHITE);
		DrawText(TextFormat("Salir "), 325, 400, 40, WHITE);



		EndDrawing();
	}
}

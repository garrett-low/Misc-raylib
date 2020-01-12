/*
* Garrett Low
* core input mouse
*/
#include "raylib.h"

int main(void)
{
    // Init
    const int width = 800;
    const int height = 450;

    InitWindow(width, height, "GRL - core input mouse");

    Vector2 ballPosition = {-100.0f, -100.0f};
    Color ballColor = DARKBLUE;

    SetTargetFPS(120);

    // Game loop
    while (!WindowShouldClose())
    {
        // update
        ballPosition = GetMousePosition();

        if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) ballColor = MAROON;
        else if (IsMouseButtonPressed(MOUSE_MIDDLE_BUTTON)) ballColor = LIME;
        else if (IsMouseButtonPressed(MOUSE_RIGHT_BUTTON)) ballColor = DARKBLUE;
        
        // draw
        BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawCircleV(ballPosition, 40, ballColor);
            DrawText("move ball with mouse and click mouse button to change color", 10, 10, 20, DARKGRAY);
        EndDrawing();
    }
    
    // De-initialization
    CloseWindow();

    return 0;

}
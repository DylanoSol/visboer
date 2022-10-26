#include <iostream>
#include <SDL.h>
#include <SDL_ttf.h>

#include "..\Primitives\vbRectangleShape.h"
#include "..\Primitives\vbCircleShape.h"
#include "..\Physics\vbPhysicsObject.h"


const int SCR_WIDTH = 640; 
const int SCR_HEIGHT = 480; 

int main(int argc, char* args[])
{
	std::cout << "Hello Jesse" << std::endl; 

    vbCollisionShape* test = new vbRectangleShape(vbVec2(10.f, 10.f), vbVec2(20.f, 20.f));
    vbCollisionShape* test2 = new vbCircleShape(vbVec2(100.f, 100.f), 20.f);
    vbPhysicsObject* test3 = new vbPhysicsObject(test2, -1.f);

    printf("%d \n", test->GetCollisionType());
    printf("%d \n", test3->GetObjectType());

    //The window we'll be rendering to
    SDL_Window* window = NULL;

    //The surface contained by the window
    SDL_Surface* screenSurface = NULL;

    //Initialize SDL
    if (SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
    }
    else
    {
        //Create window
        window = SDL_CreateWindow("Visboer Window", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCR_WIDTH, SCR_HEIGHT, SDL_WINDOW_SHOWN);
        if (window == NULL)
        {
            printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
        }
        else
        {
            //Get window surface
            screenSurface = SDL_GetWindowSurface(window);

            //Fill the surface white
            SDL_FillRect(screenSurface, NULL, SDL_MapRGB(screenSurface->format, 0x00, 0xFF, 0xFF));

            //Update the surface
            SDL_UpdateWindowSurface(window);

            //Hack to get window to stay up
            SDL_Event e; bool quit = false; while (quit == false) { while (SDL_PollEvent(&e)) { if (e.type == SDL_QUIT) quit = true; } }
        }
    }


        //Destroy window
    SDL_DestroyWindow( window );

    //Quit SDL subsystems
    SDL_Quit();
	return 0; 
}
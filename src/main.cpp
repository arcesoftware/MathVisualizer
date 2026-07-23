#include "Core/Application.h"

int main()
{
    mv::Application app;

    if (!app.Initialize())
    {
        return -1;
    }

    app.Run();

    return 0;
}
// "Copyright 2018"
#include "../include/gui_manager.h"

GuiManager* GuiManager::instance = NULL;

GuiManager* GuiManager::Instance() {
  if (instance == NULL)
    instance = new GuiManager();

  return instance;
}

void GuiManager::Release() {
  delete instance;
  instance = NULL;
}

GuiManager::GuiManager() {
  quit = false;
  gui = Gui::Instance();

  if (!Gui::Initialized())
    quit = true;
}

GuiManager::~GuiManager() {
  Gui::Release();
  gui = NULL;
}

void GuiManager::Run() {
  while (!quit) {
    while (SDL_PollEvent(&events) != 0) {
      if (events.type == SDL_QUIT) {
        quit = true;
      }
      gui->Render();
    }
  }
}
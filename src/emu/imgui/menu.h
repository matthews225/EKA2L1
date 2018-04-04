#pragma once

#include <vector>
#include <string>

#include <imgui.h>

class GLFWwindow;

namespace eka2l1 {
    namespace imgui {
        class menu {
            GLFWwindow* window;
        public:
            menu() : window(nullptr) {}
            menu(GLFWwindow* win)
                : window(win) {}

            void draw();
        };
    }
}
#include <GL\glew.h>
#include <GLFW\glw3.h>
#include <iostream>

using namespace std;

void init(GLFWwindow* window) {}

void display(GLWwindow* window, double currentTime) {
    glClearColor(1.0, 0.0, 0.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);

}

int main(void) {
    if (!glfwinit()) {exit(EXIT_FAILURE)}
    glfwWindowHint(GLFW_CONTENT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    GLFWwindow* window = glfwCreateWindow(600, 600, "Chapter 2", NULL, NULL);
    glfwMakeContextCurrent(window);
    if (glewInit != GLEW_OK) { exit(EXIT_FAILURE)}
    glwSwapInterval(1);

    init(window);

    while(!glfwWindowShouldClose(window)) {
        display(window, glwGetTime());
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwDestroyWindow(window);
    glfwTerminate();
    exit(EXIT_SUCCESS);
}
#include <GLFW/glfw3.h>
void render( GLFWwindow* window );
int main(void){
    if ( !glfwInit() )
        return 0;
    #ifdef __APPLE__
        glfwWindowHint( GLFW_CONTEXT_VERSION_MAJOR, 4 );
        glfwWindowHint( GLFW_CONTEXT_VERSION_MINOR, 1 );
        glfwWindowHint (GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
        glfwWindowHint( GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE );
    #endif
    
    GLFWwindow* window = glfwCreateWindow( 640, 480, "Hello", NULL, NULL );
    glfwMakeContextCurrent( window );

    #ifdef _MSC_VER
        glewInit();
    #endif

    while ( !glfwWindowShouldClose( window ) ) {
        render( window );
        glfwPollEvents();
    }
        glfwDestroyWindow( window );
        glfwTerminate();
    }
void render( GLFWwindow* window ) {
    int width, height;
    glfwGetFramebufferSize( window, &width, &height );
    glViewport( 0, 0, width, height );
    glClearColor( 0, 0, .5, 0 );
    glClear( GL_COLOR_BUFFER_BIT );
    glfwSwapBuffers( window );
}
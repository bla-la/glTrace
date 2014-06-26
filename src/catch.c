#include <glTraceCommon.h>
#include <generated.h>





void (*real_glXSwapBuffers)( Display *dpy, GLXDrawable drawable ) = NULL;

void glXSwapBuffers( Display *dpy, GLXDrawable drawable )
{
    if(!real_glXSwapBuffers)
    {
        real_glXSwapBuffers = dlsym(RTLD_NEXT,"glXSwapBuffers");
        if(!real_glXSwapBuffers)
            abort();
    }
    printf("glXSwapBuffers\n");

    real_glXSwapBuffers(dpy,drawable);
}







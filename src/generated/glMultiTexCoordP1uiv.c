#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexCoordP1uiv_wrp						\
    ((void  (*)(GLenum texture,GLenum type,const GLuint *coords                                        \
    ))GL_ENTRY_PTR(glMultiTexCoordP1uiv_Idx))


GLAPI void  APIENTRY glMultiTexCoordP1uiv(GLenum texture,GLenum type,const GLuint *coords)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMultiTexCoordP1uiv_Idx))
	{
            GL_ENTRY_PTR(glMultiTexCoordP1uiv_Idx) = dlsym(RTLD_NEXT,"glMultiTexCoordP1uiv");
            if(!GL_ENTRY_PTR(glMultiTexCoordP1uiv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMultiTexCoordP1uiv_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexCoordP1uiv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexCoordP1uiv_wrp(texture,type,coords);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexCoordP1uiv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexCoordP1uiv_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexCoordP1uiv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexCoordP1uiv_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexCoordP1uiv_Idx));
        if(last_diff > 1000000000){
            printf("glMultiTexCoordP1uiv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexCoordP1uiv_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoordP1uiv_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoordP1uiv_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexCoordP1uiv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexCoordP1uiv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexCoordP1uiv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexCoordP1uiv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexCoordP1uiv_Idx) = get_ts();
        }


	

}
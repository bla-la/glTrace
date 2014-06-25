#include <glTraceCommon.h>
#include <generated.h>

#define glTexCoordP1uiv_wrp						\
    ((void  (*)(GLenum type,const GLuint *coords                                        \
    ))GL_ENTRY_PTR(glTexCoordP1uiv_Idx))


GLAPI void  APIENTRY glTexCoordP1uiv(GLenum type,const GLuint *coords)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glTexCoordP1uiv_Idx))
	{
            GL_ENTRY_PTR(glTexCoordP1uiv_Idx) = dlsym(RTLD_NEXT,"glTexCoordP1uiv");
            if(!GL_ENTRY_PTR(glTexCoordP1uiv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glTexCoordP1uiv_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexCoordP1uiv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexCoordP1uiv_wrp(type,coords);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexCoordP1uiv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexCoordP1uiv_Idx) ++;

        GL_ENTRY_LAST_TS(glTexCoordP1uiv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexCoordP1uiv_Idx),
				 GL_ENTRY_LAST_TS(glTexCoordP1uiv_Idx));
        if(last_diff > 1000000000){
            printf("glTexCoordP1uiv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexCoordP1uiv_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoordP1uiv_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoordP1uiv_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexCoordP1uiv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexCoordP1uiv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexCoordP1uiv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexCoordP1uiv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexCoordP1uiv_Idx) = get_ts();
        }


	

}
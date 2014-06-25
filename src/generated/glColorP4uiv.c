#include <glTraceCommon.h>
#include <generated.h>

#define glColorP4uiv_wrp						\
    ((void  (*)(GLenum type,const GLuint *color                                        \
    ))GL_ENTRY_PTR(glColorP4uiv_Idx))


GLAPI void  APIENTRY glColorP4uiv(GLenum type,const GLuint *color)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glColorP4uiv_Idx))
	{
            GL_ENTRY_PTR(glColorP4uiv_Idx) = dlsym(RTLD_NEXT,"glColorP4uiv");
            if(!GL_ENTRY_PTR(glColorP4uiv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glColorP4uiv_Idx))
    	{
            GL_ENTRY_PREV_TS(glColorP4uiv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glColorP4uiv_wrp(type,color);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glColorP4uiv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glColorP4uiv_Idx) ++;

        GL_ENTRY_LAST_TS(glColorP4uiv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glColorP4uiv_Idx),
				 GL_ENTRY_LAST_TS(glColorP4uiv_Idx));
        if(last_diff > 1000000000){
            printf("glColorP4uiv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glColorP4uiv_Idx),
	             GL_ENTRY_CALL_TIME(glColorP4uiv_Idx),
	             GL_ENTRY_CALL_TIME(glColorP4uiv_Idx) /
	             GL_ENTRY_CALL_COUNT(glColorP4uiv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glColorP4uiv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glColorP4uiv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glColorP4uiv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glColorP4uiv_Idx) = get_ts();
        }


	

}
#include <glTraceCommon.h>
#include <generated.h>

#define glMatrixTranslatefEXT_wrp						\
    ((void  (*)(GLenum mode,GLfloat x,GLfloat y,GLfloat z                                        \
    ))GL_ENTRY_PTR(glMatrixTranslatefEXT_Idx))


GLAPI void  APIENTRY glMatrixTranslatefEXT(GLenum mode,GLfloat x,GLfloat y,GLfloat z)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMatrixTranslatefEXT_Idx))
	{
            GL_ENTRY_PTR(glMatrixTranslatefEXT_Idx) = dlsym(RTLD_NEXT,"glMatrixTranslatefEXT");
            if(!GL_ENTRY_PTR(glMatrixTranslatefEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMatrixTranslatefEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glMatrixTranslatefEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMatrixTranslatefEXT_wrp(mode,x,y,z);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMatrixTranslatefEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMatrixTranslatefEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glMatrixTranslatefEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMatrixTranslatefEXT_Idx),
				 GL_ENTRY_LAST_TS(glMatrixTranslatefEXT_Idx));
        if(last_diff > 1000000000){
            printf("glMatrixTranslatefEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMatrixTranslatefEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMatrixTranslatefEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMatrixTranslatefEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glMatrixTranslatefEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMatrixTranslatefEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMatrixTranslatefEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMatrixTranslatefEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMatrixTranslatefEXT_Idx) = get_ts();
        }


	

}
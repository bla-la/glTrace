#include <glTraceCommon.h>
#include <generated.h>

#define glSecondaryColorP3uiv_wrp						\
    ((void  (*)(GLenum type,const GLuint *color                                        \
    ))GL_ENTRY_PTR(glSecondaryColorP3uiv_Idx))


GLAPI void  APIENTRY glSecondaryColorP3uiv(GLenum type,const GLuint *color)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glSecondaryColorP3uiv_Idx))
    	{
            GL_ENTRY_PREV_TS(glSecondaryColorP3uiv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glSecondaryColorP3uiv_wrp(type,color);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glSecondaryColorP3uiv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glSecondaryColorP3uiv_Idx) ++;

        GL_ENTRY_LAST_TS(glSecondaryColorP3uiv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glSecondaryColorP3uiv_Idx),
				 GL_ENTRY_LAST_TS(glSecondaryColorP3uiv_Idx));


        if(last_diff > 1000000000){
            printf("glSecondaryColorP3uiv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glSecondaryColorP3uiv_Idx),
	             GL_ENTRY_CALL_TIME(glSecondaryColorP3uiv_Idx),
	             GL_ENTRY_CALL_TIME(glSecondaryColorP3uiv_Idx) /
	             GL_ENTRY_CALL_COUNT(glSecondaryColorP3uiv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glSecondaryColorP3uiv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glSecondaryColorP3uiv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glSecondaryColorP3uiv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glSecondaryColorP3uiv_Idx) = get_ts();
        }


	

}
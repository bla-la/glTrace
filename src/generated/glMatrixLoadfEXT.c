#include <glTraceCommon.h>
#include <generated.h>

#define glMatrixLoadfEXT_wrp						\
    ((void  (*)(GLenum mode,const GLfloat *m                                        \
    ))GL_ENTRY_PTR(glMatrixLoadfEXT_Idx))


GLAPI void  APIENTRY glMatrixLoadfEXT(GLenum mode,const GLfloat *m)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMatrixLoadfEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glMatrixLoadfEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMatrixLoadfEXT_wrp(mode,m);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMatrixLoadfEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMatrixLoadfEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glMatrixLoadfEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMatrixLoadfEXT_Idx),
				 GL_ENTRY_LAST_TS(glMatrixLoadfEXT_Idx));


        if(last_diff > 1000000000){
            printf("glMatrixLoadfEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMatrixLoadfEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMatrixLoadfEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMatrixLoadfEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glMatrixLoadfEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMatrixLoadfEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMatrixLoadfEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMatrixLoadfEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMatrixLoadfEXT_Idx) = get_ts();
        }


	

}
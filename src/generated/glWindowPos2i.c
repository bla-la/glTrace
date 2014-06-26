#include <glTraceCommon.h>
#include <generated.h>

#define glWindowPos2i_wrp						\
    ((void  (*)(GLint x,GLint y                                        \
    ))GL_ENTRY_PTR(glWindowPos2i_Idx))


GLAPI void  APIENTRY glWindowPos2i(GLint x,GLint y)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glWindowPos2i_Idx))
    	{
            GL_ENTRY_PREV_TS(glWindowPos2i_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glWindowPos2i_wrp(x,y);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glWindowPos2i_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glWindowPos2i_Idx) ++;

        GL_ENTRY_LAST_TS(glWindowPos2i_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glWindowPos2i_Idx),
				 GL_ENTRY_LAST_TS(glWindowPos2i_Idx));


        if(last_diff > 1000000000){
            printf("glWindowPos2i %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glWindowPos2i_Idx),
	             GL_ENTRY_CALL_TIME(glWindowPos2i_Idx),
	             GL_ENTRY_CALL_TIME(glWindowPos2i_Idx) /
	             GL_ENTRY_CALL_COUNT(glWindowPos2i_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glWindowPos2i_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glWindowPos2i_Idx) = 0;
             GL_ENTRY_CALL_TIME(glWindowPos2i_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glWindowPos2i_Idx) = get_ts();
        }


	

}
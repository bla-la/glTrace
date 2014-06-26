#include <glTraceCommon.h>
#include <generated.h>

#define glCopyColorSubTableEXT_wrp						\
    ((void  (*)(GLenum target,GLsizei start,GLint x,GLint y,GLsizei width                                        \
    ))GL_ENTRY_PTR(glCopyColorSubTableEXT_Idx))


GLAPI void  APIENTRY glCopyColorSubTableEXT(GLenum target,GLsizei start,GLint x,GLint y,GLsizei width)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glCopyColorSubTableEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glCopyColorSubTableEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glCopyColorSubTableEXT_wrp(target,start,x,y,width);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCopyColorSubTableEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCopyColorSubTableEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glCopyColorSubTableEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCopyColorSubTableEXT_Idx),
				 GL_ENTRY_LAST_TS(glCopyColorSubTableEXT_Idx));


        if(last_diff > 1000000000){
            printf("glCopyColorSubTableEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCopyColorSubTableEXT_Idx),
	             GL_ENTRY_CALL_TIME(glCopyColorSubTableEXT_Idx),
	             GL_ENTRY_CALL_TIME(glCopyColorSubTableEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glCopyColorSubTableEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCopyColorSubTableEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCopyColorSubTableEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCopyColorSubTableEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCopyColorSubTableEXT_Idx) = get_ts();
        }


	

}
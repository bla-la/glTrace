#include <glTraceCommon.h>
#include <generated.h>

#define glColorSubTableEXT_wrp						\
    ((void  (*)(GLenum target,GLsizei start,GLsizei count,GLenum format,GLenum type,const void *data                                        \
    ))GL_ENTRY_PTR(glColorSubTableEXT_Idx))


GLAPI void  APIENTRY glColorSubTableEXT(GLenum target,GLsizei start,GLsizei count,GLenum format,GLenum type,const void *data)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glColorSubTableEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glColorSubTableEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glColorSubTableEXT_wrp(target,start,count,format,type,data);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glColorSubTableEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glColorSubTableEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glColorSubTableEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glColorSubTableEXT_Idx),
				 GL_ENTRY_LAST_TS(glColorSubTableEXT_Idx));


        if(last_diff > 1000000000){
            printf("glColorSubTableEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glColorSubTableEXT_Idx),
	             GL_ENTRY_CALL_TIME(glColorSubTableEXT_Idx),
	             GL_ENTRY_CALL_TIME(glColorSubTableEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glColorSubTableEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glColorSubTableEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glColorSubTableEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glColorSubTableEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glColorSubTableEXT_Idx) = get_ts();
        }


	

}
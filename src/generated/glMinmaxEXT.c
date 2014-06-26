#include <glTraceCommon.h>
#include <generated.h>

#define glMinmaxEXT_wrp						\
    ((void  (*)(GLenum target,GLenum internalformat,GLboolean sink                                        \
    ))GL_ENTRY_PTR(glMinmaxEXT_Idx))


GLAPI void  APIENTRY glMinmaxEXT(GLenum target,GLenum internalformat,GLboolean sink)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMinmaxEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glMinmaxEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMinmaxEXT_wrp(target,internalformat,sink);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMinmaxEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMinmaxEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glMinmaxEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMinmaxEXT_Idx),
				 GL_ENTRY_LAST_TS(glMinmaxEXT_Idx));


        if(last_diff > 1000000000){
            printf("glMinmaxEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMinmaxEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMinmaxEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMinmaxEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glMinmaxEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMinmaxEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMinmaxEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMinmaxEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMinmaxEXT_Idx) = get_ts();
        }


	

}
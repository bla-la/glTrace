#include <glTraceCommon.h>
#include <generated.h>

#define glDrawBuffersIndexedEXT_wrp						\
    ((void  (*)(GLint n,const GLenum *location,const GLint *indices                                        \
    ))GL_ENTRY_PTR(glDrawBuffersIndexedEXT_Idx))


GLAPI void  APIENTRY glDrawBuffersIndexedEXT(GLint n,const GLenum *location,const GLint *indices)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glDrawBuffersIndexedEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glDrawBuffersIndexedEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDrawBuffersIndexedEXT_wrp(n,location,indices);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDrawBuffersIndexedEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDrawBuffersIndexedEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glDrawBuffersIndexedEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDrawBuffersIndexedEXT_Idx),
				 GL_ENTRY_LAST_TS(glDrawBuffersIndexedEXT_Idx));


        if(last_diff > 1000000000){
            printf("glDrawBuffersIndexedEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDrawBuffersIndexedEXT_Idx),
	             GL_ENTRY_CALL_TIME(glDrawBuffersIndexedEXT_Idx),
	             GL_ENTRY_CALL_TIME(glDrawBuffersIndexedEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glDrawBuffersIndexedEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDrawBuffersIndexedEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDrawBuffersIndexedEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDrawBuffersIndexedEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDrawBuffersIndexedEXT_Idx) = get_ts();
        }


	

}
#include <glTraceCommon.h>
#include <generated.h>

#define glInvalidateTexImage_wrp						\
    ((void  (*)(GLuint texture,GLint level                                        \
    ))GL_ENTRY_PTR(glInvalidateTexImage_Idx))


GLAPI void  APIENTRY glInvalidateTexImage(GLuint texture,GLint level)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glInvalidateTexImage_Idx))
    	{
            GL_ENTRY_PREV_TS(glInvalidateTexImage_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glInvalidateTexImage_wrp(texture,level);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glInvalidateTexImage_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glInvalidateTexImage_Idx) ++;

        GL_ENTRY_LAST_TS(glInvalidateTexImage_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glInvalidateTexImage_Idx),
				 GL_ENTRY_LAST_TS(glInvalidateTexImage_Idx));


        if(last_diff > 1000000000){
            printf("glInvalidateTexImage %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glInvalidateTexImage_Idx),
	             GL_ENTRY_CALL_TIME(glInvalidateTexImage_Idx),
	             GL_ENTRY_CALL_TIME(glInvalidateTexImage_Idx) /
	             GL_ENTRY_CALL_COUNT(glInvalidateTexImage_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glInvalidateTexImage_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glInvalidateTexImage_Idx) = 0;
             GL_ENTRY_CALL_TIME(glInvalidateTexImage_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glInvalidateTexImage_Idx) = get_ts();
        }


	

}
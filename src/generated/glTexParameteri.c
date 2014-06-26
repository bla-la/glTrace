#include <glTraceCommon.h>
#include <generated.h>

#define glTexParameteri_wrp						\
    ((void  (*)(GLenum target,GLenum pname,GLint param                                        \
    ))GL_ENTRY_PTR(glTexParameteri_Idx))


GLAPI void  APIENTRY glTexParameteri(GLenum target,GLenum pname,GLint param)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTexParameteri_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexParameteri_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexParameteri_wrp(target,pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexParameteri_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexParameteri_Idx) ++;

        GL_ENTRY_LAST_TS(glTexParameteri_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexParameteri_Idx),
				 GL_ENTRY_LAST_TS(glTexParameteri_Idx));


        if(last_diff > 1000000000){
            printf("glTexParameteri %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexParameteri_Idx),
	             GL_ENTRY_CALL_TIME(glTexParameteri_Idx),
	             GL_ENTRY_CALL_TIME(glTexParameteri_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexParameteri_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexParameteri_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexParameteri_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexParameteri_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexParameteri_Idx) = get_ts();
        }


	

}
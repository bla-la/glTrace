#include <glTraceCommon.h>
#include <generated.h>

#define glGenNamesAMD_wrp						\
    ((void  (*)(GLenum identifier,GLuint num,GLuint *names                                        \
    ))GL_ENTRY_PTR(glGenNamesAMD_Idx))


GLAPI void  APIENTRY glGenNamesAMD(GLenum identifier,GLuint num,GLuint *names)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGenNamesAMD_Idx))
	{
            GL_ENTRY_PTR(glGenNamesAMD_Idx) = dlsym(RTLD_NEXT,"glGenNamesAMD");
            if(!GL_ENTRY_PTR(glGenNamesAMD_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGenNamesAMD_Idx))
    	{
            GL_ENTRY_PREV_TS(glGenNamesAMD_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGenNamesAMD_wrp(identifier,num,names);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGenNamesAMD_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGenNamesAMD_Idx) ++;

        GL_ENTRY_LAST_TS(glGenNamesAMD_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGenNamesAMD_Idx),
				 GL_ENTRY_LAST_TS(glGenNamesAMD_Idx));
        if(last_diff > 1000000000){
            printf("glGenNamesAMD %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGenNamesAMD_Idx),
	             GL_ENTRY_CALL_TIME(glGenNamesAMD_Idx),
	             GL_ENTRY_CALL_TIME(glGenNamesAMD_Idx) /
	             GL_ENTRY_CALL_COUNT(glGenNamesAMD_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGenNamesAMD_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGenNamesAMD_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGenNamesAMD_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGenNamesAMD_Idx) = get_ts();
        }


	

}
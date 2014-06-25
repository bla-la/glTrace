#include <glTraceCommon.h>
#include <generated.h>

#define glPathParameteriNV_wrp						\
    ((void  (*)(GLuint path,GLenum pname,GLint value                                        \
    ))GL_ENTRY_PTR(glPathParameteriNV_Idx))


GLAPI void  APIENTRY glPathParameteriNV(GLuint path,GLenum pname,GLint value)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glPathParameteriNV_Idx))
	{
            GL_ENTRY_PTR(glPathParameteriNV_Idx) = dlsym(RTLD_NEXT,"glPathParameteriNV");
            if(!GL_ENTRY_PTR(glPathParameteriNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glPathParameteriNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glPathParameteriNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPathParameteriNV_wrp(path,pname,value);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPathParameteriNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPathParameteriNV_Idx) ++;

        GL_ENTRY_LAST_TS(glPathParameteriNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPathParameteriNV_Idx),
				 GL_ENTRY_LAST_TS(glPathParameteriNV_Idx));
        if(last_diff > 1000000000){
            printf("glPathParameteriNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPathParameteriNV_Idx),
	             GL_ENTRY_CALL_TIME(glPathParameteriNV_Idx),
	             GL_ENTRY_CALL_TIME(glPathParameteriNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glPathParameteriNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPathParameteriNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPathParameteriNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPathParameteriNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPathParameteriNV_Idx) = get_ts();
        }


	

}
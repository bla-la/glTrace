#include <glTraceCommon.h>
#include <generated.h>

#define glSetMultisamplefvAMD_wrp						\
    ((void  (*)(GLenum pname,GLuint index,const GLfloat *val                                        \
    ))GL_ENTRY_PTR(glSetMultisamplefvAMD_Idx))


GLAPI void  APIENTRY glSetMultisamplefvAMD(GLenum pname,GLuint index,const GLfloat *val)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glSetMultisamplefvAMD_Idx))
	{
            GL_ENTRY_PTR(glSetMultisamplefvAMD_Idx) = dlsym(RTLD_NEXT,"glSetMultisamplefvAMD");
            if(!GL_ENTRY_PTR(glSetMultisamplefvAMD_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glSetMultisamplefvAMD_Idx))
    	{
            GL_ENTRY_PREV_TS(glSetMultisamplefvAMD_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glSetMultisamplefvAMD_wrp(pname,index,val);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glSetMultisamplefvAMD_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glSetMultisamplefvAMD_Idx) ++;

        GL_ENTRY_LAST_TS(glSetMultisamplefvAMD_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glSetMultisamplefvAMD_Idx),
				 GL_ENTRY_LAST_TS(glSetMultisamplefvAMD_Idx));
        if(last_diff > 1000000000){
            printf("glSetMultisamplefvAMD %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glSetMultisamplefvAMD_Idx),
	             GL_ENTRY_CALL_TIME(glSetMultisamplefvAMD_Idx),
	             GL_ENTRY_CALL_TIME(glSetMultisamplefvAMD_Idx) /
	             GL_ENTRY_CALL_COUNT(glSetMultisamplefvAMD_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glSetMultisamplefvAMD_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glSetMultisamplefvAMD_Idx) = 0;
             GL_ENTRY_CALL_TIME(glSetMultisamplefvAMD_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glSetMultisamplefvAMD_Idx) = get_ts();
        }


	

}
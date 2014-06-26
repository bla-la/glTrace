#include <glTraceCommon.h>
#include <generated.h>

#define glPathParameterivNV_wrp						\
    ((void  (*)(GLuint path,GLenum pname,const GLint *value                                        \
    ))GL_ENTRY_PTR(glPathParameterivNV_Idx))


GLAPI void  APIENTRY glPathParameterivNV(GLuint path,GLenum pname,const GLint *value)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glPathParameterivNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glPathParameterivNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPathParameterivNV_wrp(path,pname,value);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPathParameterivNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPathParameterivNV_Idx) ++;

        GL_ENTRY_LAST_TS(glPathParameterivNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPathParameterivNV_Idx),
				 GL_ENTRY_LAST_TS(glPathParameterivNV_Idx));


        if(last_diff > 1000000000){
            printf("glPathParameterivNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPathParameterivNV_Idx),
	             GL_ENTRY_CALL_TIME(glPathParameterivNV_Idx),
	             GL_ENTRY_CALL_TIME(glPathParameterivNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glPathParameterivNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPathParameterivNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPathParameterivNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPathParameterivNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPathParameterivNV_Idx) = get_ts();
        }


	

}
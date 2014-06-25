#include <glTraceCommon.h>
#include <generated.h>

#define glNormal3i_wrp						\
    ((void  (*)(GLint nx,GLint ny,GLint nz                                        \
    ))GL_ENTRY_PTR(glNormal3i_Idx))


GLAPI void  APIENTRY glNormal3i(GLint nx,GLint ny,GLint nz)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glNormal3i_Idx))
	{
            GL_ENTRY_PTR(glNormal3i_Idx) = dlsym(RTLD_NEXT,"glNormal3i");
            if(!GL_ENTRY_PTR(glNormal3i_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glNormal3i_Idx))
    	{
            GL_ENTRY_PREV_TS(glNormal3i_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glNormal3i_wrp(nx,ny,nz);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glNormal3i_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glNormal3i_Idx) ++;

        GL_ENTRY_LAST_TS(glNormal3i_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glNormal3i_Idx),
				 GL_ENTRY_LAST_TS(glNormal3i_Idx));
        if(last_diff > 1000000000){
            printf("glNormal3i %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glNormal3i_Idx),
	             GL_ENTRY_CALL_TIME(glNormal3i_Idx),
	             GL_ENTRY_CALL_TIME(glNormal3i_Idx) /
	             GL_ENTRY_CALL_COUNT(glNormal3i_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glNormal3i_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glNormal3i_Idx) = 0;
             GL_ENTRY_CALL_TIME(glNormal3i_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glNormal3i_Idx) = get_ts();
        }


	

}
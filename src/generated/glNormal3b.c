#include <glTraceCommon.h>
#include <generated.h>

#define glNormal3b_wrp						\
    ((void  (*)(GLbyte nx,GLbyte ny,GLbyte nz                                        \
    ))GL_ENTRY_PTR(glNormal3b_Idx))


GLAPI void  APIENTRY glNormal3b(GLbyte nx,GLbyte ny,GLbyte nz)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glNormal3b_Idx))
	{
            GL_ENTRY_PTR(glNormal3b_Idx) = dlsym(RTLD_NEXT,"glNormal3b");
            if(!GL_ENTRY_PTR(glNormal3b_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glNormal3b_Idx))
    	{
            GL_ENTRY_PREV_TS(glNormal3b_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glNormal3b_wrp(nx,ny,nz);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glNormal3b_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glNormal3b_Idx) ++;

        GL_ENTRY_LAST_TS(glNormal3b_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glNormal3b_Idx),
				 GL_ENTRY_LAST_TS(glNormal3b_Idx));
        if(last_diff > 1000000000){
            printf("glNormal3b %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glNormal3b_Idx),
	             GL_ENTRY_CALL_TIME(glNormal3b_Idx),
	             GL_ENTRY_CALL_TIME(glNormal3b_Idx) /
	             GL_ENTRY_CALL_COUNT(glNormal3b_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glNormal3b_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glNormal3b_Idx) = 0;
             GL_ENTRY_CALL_TIME(glNormal3b_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glNormal3b_Idx) = get_ts();
        }


	

}
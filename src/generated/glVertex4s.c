#include <glTraceCommon.h>
#include <generated.h>

#define glVertex4s_wrp						\
    ((void  (*)(GLshort x,GLshort y,GLshort z,GLshort w                                        \
    ))GL_ENTRY_PTR(glVertex4s_Idx))


GLAPI void  APIENTRY glVertex4s(GLshort x,GLshort y,GLshort z,GLshort w)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertex4s_Idx))
	{
            GL_ENTRY_PTR(glVertex4s_Idx) = dlsym(RTLD_NEXT,"glVertex4s");
            if(!GL_ENTRY_PTR(glVertex4s_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertex4s_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertex4s_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertex4s_wrp(x,y,z,w);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertex4s_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertex4s_Idx) ++;

        GL_ENTRY_LAST_TS(glVertex4s_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertex4s_Idx),
				 GL_ENTRY_LAST_TS(glVertex4s_Idx));
        if(last_diff > 1000000000){
            printf("glVertex4s %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertex4s_Idx),
	             GL_ENTRY_CALL_TIME(glVertex4s_Idx),
	             GL_ENTRY_CALL_TIME(glVertex4s_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertex4s_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertex4s_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertex4s_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertex4s_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertex4s_Idx) = get_ts();
        }


	

}
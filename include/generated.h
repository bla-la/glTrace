#ifndef __GENERATED_H__
#define __GENERATED_H__
#include <glTraceCommon.h>

GLAPI  void  APIENTRY glAccum(GLenum op,GLfloat value);
GLAPI  void  APIENTRY glAccumxOES(GLenum op,GLfixed value);
GLAPI  void  APIENTRY glActiveProgramEXT(GLuint program);
GLAPI  void  APIENTRY glActiveShaderProgram(GLuint pipeline,GLuint program);
GLAPI  void  APIENTRY glActiveShaderProgramEXT(GLuint pipeline,GLuint program);
GLAPI  void  APIENTRY glActiveStencilFaceEXT(GLenum face);
GLAPI  void  APIENTRY glActiveTexture(GLenum texture);
GLAPI  void  APIENTRY glActiveTextureARB(GLenum texture);
GLAPI  void  APIENTRY glActiveVaryingNV(GLuint program,const GLchar *name);
GLAPI  void  APIENTRY glAlphaFragmentOp1ATI(GLenum op,GLuint dst,GLuint dstMod,GLuint arg1,GLuint arg1Rep,GLuint arg1Mod);
GLAPI  void  APIENTRY glAlphaFragmentOp2ATI(GLenum op,GLuint dst,GLuint dstMod,GLuint arg1,GLuint arg1Rep,GLuint arg1Mod,GLuint arg2,GLuint arg2Rep,GLuint arg2Mod);
GLAPI  void  APIENTRY glAlphaFragmentOp3ATI(GLenum op,GLuint dst,GLuint dstMod,GLuint arg1,GLuint arg1Rep,GLuint arg1Mod,GLuint arg2,GLuint arg2Rep,GLuint arg2Mod,GLuint arg3,GLuint arg3Rep,GLuint arg3Mod);
GLAPI  void  APIENTRY glAlphaFunc(GLenum func,GLfloat ref);
GLAPI  void  APIENTRY glAlphaFuncQCOM(GLenum func,GLclampf ref);
GLAPI  void  APIENTRY glAlphaFuncx(GLenum func,GLfixed ref);
GLAPI  void  APIENTRY glAlphaFuncxOES(GLenum func,GLfixed ref);
GLAPI  void  APIENTRY glApplyTextureEXT(GLenum mode);
GLAPI  GLboolean  APIENTRY glAreProgramsResidentNV(GLsizei n,const GLuint *programs,GLboolean *residences);
GLAPI  GLboolean  APIENTRY glAreTexturesResident(GLsizei n,const GLuint *textures,GLboolean *residences);
GLAPI  GLboolean  APIENTRY glAreTexturesResidentEXT(GLsizei n,const GLuint *textures,GLboolean *residences);
GLAPI  void  APIENTRY glArrayElement(GLint i);
GLAPI  void  APIENTRY glArrayElementEXT(GLint i);
GLAPI  void  APIENTRY glArrayObjectATI(GLenum array,GLint size,GLenum type,GLsizei stride,GLuint buffer,GLuint offset);
GLAPI  void  APIENTRY glAsyncMarkerSGIX(GLuint marker);
GLAPI  void  APIENTRY glAttachObjectARB(GLhandleARB containerObj,GLhandleARB obj);
GLAPI  void  APIENTRY glAttachShader(GLuint program,GLuint shader);
GLAPI  void  APIENTRY glBegin(GLenum mode);
GLAPI  void  APIENTRY glBeginConditionalRender(GLuint id,GLenum mode);
GLAPI  void  APIENTRY glBeginConditionalRenderNV(GLuint id,GLenum mode);
GLAPI  void  APIENTRY glBeginConditionalRenderNVX(GLuint id);
GLAPI  void  APIENTRY glBeginOcclusionQueryNV(GLuint id);
GLAPI  void  APIENTRY glBeginPerfMonitorAMD(GLuint monitor);
GLAPI  void  APIENTRY glBeginPerfQueryINTEL(GLuint queryHandle);
GLAPI  void  APIENTRY glBeginQuery(GLenum target,GLuint id);
GLAPI  void  APIENTRY glBeginQueryARB(GLenum target,GLuint id);
GLAPI  void  APIENTRY glBeginQueryEXT(GLenum target,GLuint id);
GLAPI  void  APIENTRY glBeginQueryIndexed(GLenum target,GLuint index,GLuint id);
GLAPI  void  APIENTRY glBeginTransformFeedback(GLenum primitiveMode);
GLAPI  void  APIENTRY glBeginTransformFeedbackEXT(GLenum primitiveMode);
GLAPI  void  APIENTRY glBeginTransformFeedbackNV(GLenum primitiveMode);
GLAPI  void  APIENTRY glBeginVideoCaptureNV(GLuint video_capture_slot);
GLAPI  void  APIENTRY glBindAttribLocation(GLuint program,GLuint index,const GLchar *name);
GLAPI  void  APIENTRY glBindAttribLocationARB(GLhandleARB programObj,GLuint index,const GLcharARB *name);
GLAPI  void  APIENTRY glBindBuffer(GLenum target,GLuint buffer);
GLAPI  void  APIENTRY glBindBufferARB(GLenum target,GLuint buffer);
GLAPI  void  APIENTRY glBindBufferBase(GLenum target,GLuint index,GLuint buffer);
GLAPI  void  APIENTRY glBindBufferBaseEXT(GLenum target,GLuint index,GLuint buffer);
GLAPI  void  APIENTRY glBindBufferBaseNV(GLenum target,GLuint index,GLuint buffer);
GLAPI  void  APIENTRY glBindBufferOffsetEXT(GLenum target,GLuint index,GLuint buffer,GLintptr offset);
GLAPI  void  APIENTRY glBindBufferOffsetNV(GLenum target,GLuint index,GLuint buffer,GLintptr offset);
GLAPI  void  APIENTRY glBindBufferRange(GLenum target,GLuint index,GLuint buffer,GLintptr offset,GLsizeiptr size);
GLAPI  void  APIENTRY glBindBufferRangeEXT(GLenum target,GLuint index,GLuint buffer,GLintptr offset,GLsizeiptr size);
GLAPI  void  APIENTRY glBindBufferRangeNV(GLenum target,GLuint index,GLuint buffer,GLintptr offset,GLsizeiptr size);
GLAPI  void  APIENTRY glBindBuffersBase(GLenum target,GLuint first,GLsizei count,const GLuint *buffers);
GLAPI  void  APIENTRY glBindBuffersRange(GLenum target,GLuint first,GLsizei count,const GLuint *buffers,const GLintptr *offsets,const GLsizeiptr *sizes);
GLAPI  void  APIENTRY glBindFragDataLocation(GLuint program,GLuint color,const GLchar *name);
GLAPI  void  APIENTRY glBindFragDataLocationEXT(GLuint program,GLuint color,const GLchar *name);
GLAPI  void  APIENTRY glBindFragDataLocationIndexed(GLuint program,GLuint colorNumber,GLuint index,const GLchar *name);
GLAPI  void  APIENTRY glBindFragmentShaderATI(GLuint id);
GLAPI  void  APIENTRY glBindFramebuffer(GLenum target,GLuint framebuffer);
GLAPI  void  APIENTRY glBindFramebufferEXT(GLenum target,GLuint framebuffer);
GLAPI  void  APIENTRY glBindFramebufferOES(GLenum target,GLuint framebuffer);
GLAPI  void  APIENTRY glBindImageTexture(GLuint unit,GLuint texture,GLint level,GLboolean layered,GLint layer,GLenum access,GLenum format);
GLAPI  void  APIENTRY glBindImageTextureEXT(GLuint index,GLuint texture,GLint level,GLboolean layered,GLint layer,GLenum access,GLint format);
GLAPI  void  APIENTRY glBindImageTextures(GLuint first,GLsizei count,const GLuint *textures);
GLAPI  GLuint  APIENTRY glBindLightParameterEXT(GLenum light,GLenum value);
GLAPI  GLuint  APIENTRY glBindMaterialParameterEXT(GLenum face,GLenum value);
GLAPI  void  APIENTRY glBindMultiTextureEXT(GLenum texunit,GLenum target,GLuint texture);
GLAPI  GLuint  APIENTRY glBindParameterEXT(GLenum value);
GLAPI  void  APIENTRY glBindProgramARB(GLenum target,GLuint program);
GLAPI  void  APIENTRY glBindProgramNV(GLenum target,GLuint id);
GLAPI  void  APIENTRY glBindProgramPipeline(GLuint pipeline);
GLAPI  void  APIENTRY glBindProgramPipelineEXT(GLuint pipeline);
GLAPI  void  APIENTRY glBindRenderbuffer(GLenum target,GLuint renderbuffer);
GLAPI  void  APIENTRY glBindRenderbufferEXT(GLenum target,GLuint renderbuffer);
GLAPI  void  APIENTRY glBindRenderbufferOES(GLenum target,GLuint renderbuffer);
GLAPI  void  APIENTRY glBindSampler(GLuint unit,GLuint sampler);
GLAPI  void  APIENTRY glBindSamplers(GLuint first,GLsizei count,const GLuint *samplers);
GLAPI  GLuint  APIENTRY glBindTexGenParameterEXT(GLenum unit,GLenum coord,GLenum value);
GLAPI  void  APIENTRY glBindTexture(GLenum target,GLuint texture);
GLAPI  void  APIENTRY glBindTextureEXT(GLenum target,GLuint texture);
GLAPI  GLuint  APIENTRY glBindTextureUnitParameterEXT(GLenum unit,GLenum value);
GLAPI  void  APIENTRY glBindTextures(GLuint first,GLsizei count,const GLuint *textures);
GLAPI  void  APIENTRY glBindTransformFeedback(GLenum target,GLuint id);
GLAPI  void  APIENTRY glBindTransformFeedbackNV(GLenum target,GLuint id);
GLAPI  void  APIENTRY glBindVertexArray(GLuint array);
GLAPI  void  APIENTRY glBindVertexArrayAPPLE(GLuint array);
GLAPI  void  APIENTRY glBindVertexArrayOES(GLuint array);
GLAPI  void  APIENTRY glBindVertexBuffer(GLuint bindingindex,GLuint buffer,GLintptr offset,GLsizei stride);
GLAPI  void  APIENTRY glBindVertexBuffers(GLuint first,GLsizei count,const GLuint *buffers,const GLintptr *offsets,const GLsizei *strides);
GLAPI  void  APIENTRY glBindVertexShaderEXT(GLuint id);
GLAPI  void  APIENTRY glBindVideoCaptureStreamBufferNV(GLuint video_capture_slot,GLuint stream,GLenum frame_region,GLintptrARB offset);
GLAPI  void  APIENTRY glBindVideoCaptureStreamTextureNV(GLuint video_capture_slot,GLuint stream,GLenum frame_region,GLenum target,GLuint texture);
GLAPI  void  APIENTRY glBinormal3bEXT(GLbyte bx,GLbyte by,GLbyte bz);
GLAPI  void  APIENTRY glBinormal3bvEXT(const GLbyte *v);
GLAPI  void  APIENTRY glBinormal3dEXT(GLdouble bx,GLdouble by,GLdouble bz);
GLAPI  void  APIENTRY glBinormal3dvEXT(const GLdouble *v);
GLAPI  void  APIENTRY glBinormal3fEXT(GLfloat bx,GLfloat by,GLfloat bz);
GLAPI  void  APIENTRY glBinormal3fvEXT(const GLfloat *v);
GLAPI  void  APIENTRY glBinormal3iEXT(GLint bx,GLint by,GLint bz);
GLAPI  void  APIENTRY glBinormal3ivEXT(const GLint *v);
GLAPI  void  APIENTRY glBinormal3sEXT(GLshort bx,GLshort by,GLshort bz);
GLAPI  void  APIENTRY glBinormal3svEXT(const GLshort *v);
GLAPI  void  APIENTRY glBinormalPointerEXT(GLenum type,GLsizei stride,const void *pointer);
GLAPI  void  APIENTRY glBitmap(GLsizei width,GLsizei height,GLfloat xorig,GLfloat yorig,GLfloat xmove,GLfloat ymove,const GLubyte *bitmap);
GLAPI  void  APIENTRY glBitmapxOES(GLsizei width,GLsizei height,GLfixed xorig,GLfixed yorig,GLfixed xmove,GLfixed ymove,const GLubyte *bitmap);
GLAPI  void  APIENTRY glBlendColor(GLfloat red,GLfloat green,GLfloat blue,GLfloat alpha);
GLAPI  void  APIENTRY glBlendColorEXT(GLfloat red,GLfloat green,GLfloat blue,GLfloat alpha);
GLAPI  void  APIENTRY glBlendColorxOES(GLfixed red,GLfixed green,GLfixed blue,GLfixed alpha);
GLAPI  void  APIENTRY glBlendEquation(GLenum mode);
GLAPI  void  APIENTRY glBlendEquationEXT(GLenum mode);
GLAPI  void  APIENTRY glBlendEquationIndexedAMD(GLuint buf,GLenum mode);
GLAPI  void  APIENTRY glBlendEquationOES(GLenum mode);
GLAPI  void  APIENTRY glBlendEquationSeparate(GLenum modeRGB,GLenum modeAlpha);
GLAPI  void  APIENTRY glBlendEquationSeparateEXT(GLenum modeRGB,GLenum modeAlpha);
GLAPI  void  APIENTRY glBlendEquationSeparateIndexedAMD(GLuint buf,GLenum modeRGB,GLenum modeAlpha);
GLAPI  void  APIENTRY glBlendEquationSeparateOES(GLenum modeRGB,GLenum modeAlpha);
GLAPI  void  APIENTRY glBlendEquationSeparatei(GLuint buf,GLenum modeRGB,GLenum modeAlpha);
GLAPI  void  APIENTRY glBlendEquationSeparateiARB(GLuint buf,GLenum modeRGB,GLenum modeAlpha);
GLAPI  void  APIENTRY glBlendEquationSeparateiEXT(GLuint buf,GLenum modeRGB,GLenum modeAlpha);
GLAPI  void  APIENTRY glBlendEquationi(GLuint buf,GLenum mode);
GLAPI  void  APIENTRY glBlendEquationiEXT(GLuint buf,GLenum mode);
GLAPI  void  APIENTRY glBlendEquationiARB(GLuint buf,GLenum mode);
GLAPI  void  APIENTRY glBlendFunc(GLenum sfactor,GLenum dfactor);
GLAPI  void  APIENTRY glBlendFuncIndexedAMD(GLuint buf,GLenum src,GLenum dst);
GLAPI  void  APIENTRY glBlendFuncSeparate(GLenum sfactorRGB,GLenum dfactorRGB,GLenum sfactorAlpha,GLenum dfactorAlpha);
GLAPI  void  APIENTRY glBlendFuncSeparateEXT(GLenum sfactorRGB,GLenum dfactorRGB,GLenum sfactorAlpha,GLenum dfactorAlpha);
GLAPI  void  APIENTRY glBlendFuncSeparateINGR(GLenum sfactorRGB,GLenum dfactorRGB,GLenum sfactorAlpha,GLenum dfactorAlpha);
GLAPI  void  APIENTRY glBlendFuncSeparateIndexedAMD(GLuint buf,GLenum srcRGB,GLenum dstRGB,GLenum srcAlpha,GLenum dstAlpha);
GLAPI  void  APIENTRY glBlendFuncSeparateOES(GLenum srcRGB,GLenum dstRGB,GLenum srcAlpha,GLenum dstAlpha);
GLAPI  void  APIENTRY glBlendFuncSeparatei(GLuint buf,GLenum srcRGB,GLenum dstRGB,GLenum srcAlpha,GLenum dstAlpha);
GLAPI  void  APIENTRY glBlendFuncSeparateiARB(GLuint buf,GLenum srcRGB,GLenum dstRGB,GLenum srcAlpha,GLenum dstAlpha);
GLAPI  void  APIENTRY glBlendFuncSeparateiEXT(GLuint buf,GLenum srcRGB,GLenum dstRGB,GLenum srcAlpha,GLenum dstAlpha);
GLAPI  void  APIENTRY glBlendFunci(GLuint buf,GLenum src,GLenum dst);
GLAPI  void  APIENTRY glBlendFunciARB(GLuint buf,GLenum src,GLenum dst);
GLAPI  void  APIENTRY glBlendFunciEXT(GLuint buf,GLenum src,GLenum dst);
GLAPI  void  APIENTRY glBlendParameteriNV(GLenum pname,GLint value);
GLAPI  void  APIENTRY glBlitFramebuffer(GLint srcX0,GLint srcY0,GLint srcX1,GLint srcY1,GLint dstX0,GLint dstY0,GLint dstX1,GLint dstY1,GLbitfield mask,GLenum filter);
GLAPI  void  APIENTRY glBlitFramebufferANGLE(GLint srcX0,GLint srcY0,GLint srcX1,GLint srcY1,GLint dstX0,GLint dstY0,GLint dstX1,GLint dstY1,GLbitfield mask,GLenum filter);
GLAPI  void  APIENTRY glBlitFramebufferEXT(GLint srcX0,GLint srcY0,GLint srcX1,GLint srcY1,GLint dstX0,GLint dstY0,GLint dstX1,GLint dstY1,GLbitfield mask,GLenum filter);
GLAPI  void  APIENTRY glBlitFramebufferNV(GLint srcX0,GLint srcY0,GLint srcX1,GLint srcY1,GLint dstX0,GLint dstY0,GLint dstX1,GLint dstY1,GLbitfield mask,GLenum filter);
GLAPI  void  APIENTRY glBufferAddressRangeNV(GLenum pname,GLuint index,GLuint64EXT address,GLsizeiptr length);
GLAPI  void  APIENTRY glBufferData(GLenum target,GLsizeiptr size,const void *data,GLenum usage);
GLAPI  void  APIENTRY glBufferDataARB(GLenum target,GLsizeiptrARB size,const void *data,GLenum usage);
GLAPI  void  APIENTRY glBufferParameteriAPPLE(GLenum target,GLenum pname,GLint param);
GLAPI  void  APIENTRY glBufferStorage(GLenum target,GLsizeiptr size,const void *data,GLbitfield flags);
GLAPI  void  APIENTRY glBufferSubData(GLenum target,GLintptr offset,GLsizeiptr size,const void *data);
GLAPI  void  APIENTRY glBufferSubDataARB(GLenum target,GLintptrARB offset,GLsizeiptrARB size,const void *data);
GLAPI  void  APIENTRY glCallList(GLuint list);
GLAPI  void  APIENTRY glCallLists(GLsizei n,GLenum type,const void *lists);
GLAPI  GLenum  APIENTRY glCheckFramebufferStatus(GLenum target);
GLAPI  GLenum  APIENTRY glCheckFramebufferStatusEXT(GLenum target);
GLAPI  GLenum  APIENTRY glCheckFramebufferStatusOES(GLenum target);
GLAPI  GLenum  APIENTRY glCheckNamedFramebufferStatusEXT(GLuint framebuffer,GLenum target);
GLAPI  void  APIENTRY glClampColor(GLenum target,GLenum clamp);
GLAPI  void  APIENTRY glClampColorARB(GLenum target,GLenum clamp);
GLAPI  void  APIENTRY glClear(GLbitfield mask);
GLAPI  void  APIENTRY glClearAccum(GLfloat red,GLfloat green,GLfloat blue,GLfloat alpha);
GLAPI  void  APIENTRY glClearAccumxOES(GLfixed red,GLfixed green,GLfixed blue,GLfixed alpha);
GLAPI  void  APIENTRY glClearBufferData(GLenum target,GLenum internalformat,GLenum format,GLenum type,const void *data);
GLAPI  void  APIENTRY glClearBufferSubData(GLenum target,GLenum internalformat,GLintptr offset,GLsizeiptr size,GLenum format,GLenum type,const void *data);
GLAPI  void  APIENTRY glClearBufferfi(GLenum buffer,GLint drawbuffer,GLfloat depth,GLint stencil);
GLAPI  void  APIENTRY glClearBufferfv(GLenum buffer,GLint drawbuffer,const GLfloat *value);
GLAPI  void  APIENTRY glClearBufferiv(GLenum buffer,GLint drawbuffer,const GLint *value);
GLAPI  void  APIENTRY glClearBufferuiv(GLenum buffer,GLint drawbuffer,const GLuint *value);
GLAPI  void  APIENTRY glClearColor(GLfloat red,GLfloat green,GLfloat blue,GLfloat alpha);
GLAPI  void  APIENTRY glClearColorIiEXT(GLint red,GLint green,GLint blue,GLint alpha);
GLAPI  void  APIENTRY glClearColorIuiEXT(GLuint red,GLuint green,GLuint blue,GLuint alpha);
GLAPI  void  APIENTRY glClearColorx(GLfixed red,GLfixed green,GLfixed blue,GLfixed alpha);
GLAPI  void  APIENTRY glClearColorxOES(GLfixed red,GLfixed green,GLfixed blue,GLfixed alpha);
GLAPI  void  APIENTRY glClearDepth(GLdouble depth);
GLAPI  void  APIENTRY glClearDepthdNV(GLdouble depth);
GLAPI  void  APIENTRY glClearDepthf(GLfloat d);
GLAPI  void  APIENTRY glClearDepthfOES(GLclampf depth);
GLAPI  void  APIENTRY glClearDepthx(GLfixed depth);
GLAPI  void  APIENTRY glClearDepthxOES(GLfixed depth);
GLAPI  void  APIENTRY glClearIndex(GLfloat c);
GLAPI  void  APIENTRY glClearNamedBufferDataEXT(GLuint buffer,GLenum internalformat,GLenum format,GLenum type,const void *data);
GLAPI  void  APIENTRY glClearNamedBufferSubDataEXT(GLuint buffer,GLenum internalformat,GLsizeiptr offset,GLsizeiptr size,GLenum format,GLenum type,const void *data);
GLAPI  void  APIENTRY glClearStencil(GLint s);
GLAPI  void  APIENTRY glClearTexImage(GLuint texture,GLint level,GLenum format,GLenum type,const void *data);
GLAPI  void  APIENTRY glClearTexSubImage(GLuint texture,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLsizei width,GLsizei height,GLsizei depth,GLenum format,GLenum type,const void *data);
GLAPI  void  APIENTRY glClientActiveTexture(GLenum texture);
GLAPI  void  APIENTRY glClientActiveTextureARB(GLenum texture);
GLAPI  void  APIENTRY glClientActiveVertexStreamATI(GLenum stream);
GLAPI  void  APIENTRY glClientAttribDefaultEXT(GLbitfield mask);
GLAPI  GLenum  APIENTRY glClientWaitSync(GLsync sync,GLbitfield flags,GLuint64 timeout);
GLAPI  GLenum  APIENTRY glClientWaitSyncAPPLE(GLsync sync,GLbitfield flags,GLuint64 timeout);
GLAPI  void  APIENTRY glClipPlane(GLenum plane,const GLdouble *equation);
GLAPI  void  APIENTRY glClipPlanef(GLenum p,const GLfloat *eqn);
GLAPI  void  APIENTRY glClipPlanefIMG(GLenum p,const GLfloat *eqn);
GLAPI  void  APIENTRY glClipPlanefOES(GLenum plane,const GLfloat *equation);
GLAPI  void  APIENTRY glClipPlanex(GLenum plane,const GLfixed *equation);
GLAPI  void  APIENTRY glClipPlanexIMG(GLenum p,const GLfixed *eqn);
GLAPI  void  APIENTRY glClipPlanexOES(GLenum plane,const GLfixed *equation);
GLAPI  void  APIENTRY glColor3b(GLbyte red,GLbyte green,GLbyte blue);
GLAPI  void  APIENTRY glColor3bv(const GLbyte *v);
GLAPI  void  APIENTRY glColor3d(GLdouble red,GLdouble green,GLdouble blue);
GLAPI  void  APIENTRY glColor3dv(const GLdouble *v);
GLAPI  void  APIENTRY glColor3f(GLfloat red,GLfloat green,GLfloat blue);
GLAPI  void  APIENTRY glColor3fVertex3fSUN(GLfloat r,GLfloat g,GLfloat b,GLfloat x,GLfloat y,GLfloat z);
GLAPI  void  APIENTRY glColor3fVertex3fvSUN(const GLfloat *c,const GLfloat *v);
GLAPI  void  APIENTRY glColor3fv(const GLfloat *v);
GLAPI  void  APIENTRY glColor3hNV(GLhalfNV red,GLhalfNV green,GLhalfNV blue);
GLAPI  void  APIENTRY glColor3hvNV(const GLhalfNV *v);
GLAPI  void  APIENTRY glColor3i(GLint red,GLint green,GLint blue);
GLAPI  void  APIENTRY glColor3iv(const GLint *v);
GLAPI  void  APIENTRY glColor3s(GLshort red,GLshort green,GLshort blue);
GLAPI  void  APIENTRY glColor3sv(const GLshort *v);
GLAPI  void  APIENTRY glColor3ub(GLubyte red,GLubyte green,GLubyte blue);
GLAPI  void  APIENTRY glColor3ubv(const GLubyte *v);
GLAPI  void  APIENTRY glColor3ui(GLuint red,GLuint green,GLuint blue);
GLAPI  void  APIENTRY glColor3uiv(const GLuint *v);
GLAPI  void  APIENTRY glColor3us(GLushort red,GLushort green,GLushort blue);
GLAPI  void  APIENTRY glColor3usv(const GLushort *v);
GLAPI  void  APIENTRY glColor3xOES(GLfixed red,GLfixed green,GLfixed blue);
GLAPI  void  APIENTRY glColor3xvOES(const GLfixed *components);
GLAPI  void  APIENTRY glColor4b(GLbyte red,GLbyte green,GLbyte blue,GLbyte alpha);
GLAPI  void  APIENTRY glColor4bv(const GLbyte *v);
GLAPI  void  APIENTRY glColor4d(GLdouble red,GLdouble green,GLdouble blue,GLdouble alpha);
GLAPI  void  APIENTRY glColor4dv(const GLdouble *v);
GLAPI  void  APIENTRY glColor4f(GLfloat red,GLfloat green,GLfloat blue,GLfloat alpha);
GLAPI  void  APIENTRY glColor4fNormal3fVertex3fSUN(GLfloat r,GLfloat g,GLfloat b,GLfloat a,GLfloat nx,GLfloat ny,GLfloat nz,GLfloat x,GLfloat y,GLfloat z);
GLAPI  void  APIENTRY glColor4fNormal3fVertex3fvSUN(const GLfloat *c,const GLfloat *n,const GLfloat *v);
GLAPI  void  APIENTRY glColor4fv(const GLfloat *v);
GLAPI  void  APIENTRY glColor4hNV(GLhalfNV red,GLhalfNV green,GLhalfNV blue,GLhalfNV alpha);
GLAPI  void  APIENTRY glColor4hvNV(const GLhalfNV *v);
GLAPI  void  APIENTRY glColor4i(GLint red,GLint green,GLint blue,GLint alpha);
GLAPI  void  APIENTRY glColor4iv(const GLint *v);
GLAPI  void  APIENTRY glColor4s(GLshort red,GLshort green,GLshort blue,GLshort alpha);
GLAPI  void  APIENTRY glColor4sv(const GLshort *v);
GLAPI  void  APIENTRY glColor4ub(GLubyte red,GLubyte green,GLubyte blue,GLubyte alpha);
GLAPI  void  APIENTRY glColor4ubVertex2fSUN(GLubyte r,GLubyte g,GLubyte b,GLubyte a,GLfloat x,GLfloat y);
GLAPI  void  APIENTRY glColor4ubVertex2fvSUN(const GLubyte *c,const GLfloat *v);
GLAPI  void  APIENTRY glColor4ubVertex3fSUN(GLubyte r,GLubyte g,GLubyte b,GLubyte a,GLfloat x,GLfloat y,GLfloat z);
GLAPI  void  APIENTRY glColor4ubVertex3fvSUN(const GLubyte *c,const GLfloat *v);
GLAPI  void  APIENTRY glColor4ubv(const GLubyte *v);
GLAPI  void  APIENTRY glColor4ui(GLuint red,GLuint green,GLuint blue,GLuint alpha);
GLAPI  void  APIENTRY glColor4uiv(const GLuint *v);
GLAPI  void  APIENTRY glColor4us(GLushort red,GLushort green,GLushort blue,GLushort alpha);
GLAPI  void  APIENTRY glColor4usv(const GLushort *v);
GLAPI  void  APIENTRY glColor4x(GLfixed red,GLfixed green,GLfixed blue,GLfixed alpha);
GLAPI  void  APIENTRY glColor4xOES(GLfixed red,GLfixed green,GLfixed blue,GLfixed alpha);
GLAPI  void  APIENTRY glColor4xvOES(const GLfixed *components);
GLAPI  void  APIENTRY glColorFormatNV(GLint size,GLenum type,GLsizei stride);
GLAPI  void  APIENTRY glColorFragmentOp1ATI(GLenum op,GLuint dst,GLuint dstMask,GLuint dstMod,GLuint arg1,GLuint arg1Rep,GLuint arg1Mod);
GLAPI  void  APIENTRY glColorFragmentOp2ATI(GLenum op,GLuint dst,GLuint dstMask,GLuint dstMod,GLuint arg1,GLuint arg1Rep,GLuint arg1Mod,GLuint arg2,GLuint arg2Rep,GLuint arg2Mod);
GLAPI  void  APIENTRY glColorFragmentOp3ATI(GLenum op,GLuint dst,GLuint dstMask,GLuint dstMod,GLuint arg1,GLuint arg1Rep,GLuint arg1Mod,GLuint arg2,GLuint arg2Rep,GLuint arg2Mod,GLuint arg3,GLuint arg3Rep,GLuint arg3Mod);
GLAPI  void  APIENTRY glColorMask(GLboolean red,GLboolean green,GLboolean blue,GLboolean alpha);
GLAPI  void  APIENTRY glColorMaskIndexedEXT(GLuint index,GLboolean r,GLboolean g,GLboolean b,GLboolean a);
GLAPI  void  APIENTRY glColorMaski(GLuint index,GLboolean r,GLboolean g,GLboolean b,GLboolean a);
GLAPI  void  APIENTRY glColorMaskiEXT(GLuint index,GLboolean r,GLboolean g,GLboolean b,GLboolean a);
GLAPI  void  APIENTRY glColorMaterial(GLenum face,GLenum mode);
GLAPI  void  APIENTRY glColorP3ui(GLenum type,GLuint color);
GLAPI  void  APIENTRY glColorP3uiv(GLenum type,const GLuint *color);
GLAPI  void  APIENTRY glColorP4ui(GLenum type,GLuint color);
GLAPI  void  APIENTRY glColorP4uiv(GLenum type,const GLuint *color);
GLAPI  void  APIENTRY glColorPointer(GLint size,GLenum type,GLsizei stride,const void *pointer);
GLAPI  void  APIENTRY glColorPointerEXT(GLint size,GLenum type,GLsizei stride,GLsizei count,const void *pointer);
GLAPI  void  APIENTRY glColorPointerListIBM(GLint size,GLenum type,GLint stride,const void **pointer,GLint ptrstride);
GLAPI  void  APIENTRY glColorPointervINTEL(GLint size,GLenum type,const void **pointer);
GLAPI  void  APIENTRY glColorSubTable(GLenum target,GLsizei start,GLsizei count,GLenum format,GLenum type,const void *data);
GLAPI  void  APIENTRY glColorSubTableEXT(GLenum target,GLsizei start,GLsizei count,GLenum format,GLenum type,const void *data);
GLAPI  void  APIENTRY glColorTable(GLenum target,GLenum internalformat,GLsizei width,GLenum format,GLenum type,const void *table);
GLAPI  void  APIENTRY glColorTableEXT(GLenum target,GLenum internalFormat,GLsizei width,GLenum format,GLenum type,const void *table);
GLAPI  void  APIENTRY glColorTableParameterfv(GLenum target,GLenum pname,const GLfloat *params);
GLAPI  void  APIENTRY glColorTableParameterfvSGI(GLenum target,GLenum pname,const GLfloat *params);
GLAPI  void  APIENTRY glColorTableParameteriv(GLenum target,GLenum pname,const GLint *params);
GLAPI  void  APIENTRY glColorTableParameterivSGI(GLenum target,GLenum pname,const GLint *params);
GLAPI  void  APIENTRY glColorTableSGI(GLenum target,GLenum internalformat,GLsizei width,GLenum format,GLenum type,const void *table);
GLAPI  void  APIENTRY glCombinerInputNV(GLenum stage,GLenum portion,GLenum variable,GLenum input,GLenum mapping,GLenum componentUsage);
GLAPI  void  APIENTRY glCombinerOutputNV(GLenum stage,GLenum portion,GLenum abOutput,GLenum cdOutput,GLenum sumOutput,GLenum scale,GLenum bias,GLboolean abDotProduct,GLboolean cdDotProduct,GLboolean muxSum);
GLAPI  void  APIENTRY glCombinerParameterfNV(GLenum pname,GLfloat param);
GLAPI  void  APIENTRY glCombinerParameterfvNV(GLenum pname,const GLfloat *params);
GLAPI  void  APIENTRY glCombinerParameteriNV(GLenum pname,GLint param);
GLAPI  void  APIENTRY glCombinerParameterivNV(GLenum pname,const GLint *params);
GLAPI  void  APIENTRY glCombinerStageParameterfvNV(GLenum stage,GLenum pname,const GLfloat *params);
GLAPI  void  APIENTRY glCompileShader(GLuint shader);
GLAPI  void  APIENTRY glCompileShaderARB(GLhandleARB shaderObj);
GLAPI  void  APIENTRY glCompileShaderIncludeARB(GLuint shader,GLsizei count,const GLchar *const*path,const GLint *length);
GLAPI  void  APIENTRY glCompressedMultiTexImage1DEXT(GLenum texunit,GLenum target,GLint level,GLenum internalformat,GLsizei width,GLint border,GLsizei imageSize,const void *bits);
GLAPI  void  APIENTRY glCompressedMultiTexImage2DEXT(GLenum texunit,GLenum target,GLint level,GLenum internalformat,GLsizei width,GLsizei height,GLint border,GLsizei imageSize,const void *bits);
GLAPI  void  APIENTRY glCompressedMultiTexImage3DEXT(GLenum texunit,GLenum target,GLint level,GLenum internalformat,GLsizei width,GLsizei height,GLsizei depth,GLint border,GLsizei imageSize,const void *bits);
GLAPI  void  APIENTRY glCompressedMultiTexSubImage1DEXT(GLenum texunit,GLenum target,GLint level,GLint xoffset,GLsizei width,GLenum format,GLsizei imageSize,const void *bits);
GLAPI  void  APIENTRY glCompressedMultiTexSubImage2DEXT(GLenum texunit,GLenum target,GLint level,GLint xoffset,GLint yoffset,GLsizei width,GLsizei height,GLenum format,GLsizei imageSize,const void *bits);
GLAPI  void  APIENTRY glCompressedMultiTexSubImage3DEXT(GLenum texunit,GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLsizei width,GLsizei height,GLsizei depth,GLenum format,GLsizei imageSize,const void *bits);
GLAPI  void  APIENTRY glCompressedTexImage1D(GLenum target,GLint level,GLenum internalformat,GLsizei width,GLint border,GLsizei imageSize,const void *data);
GLAPI  void  APIENTRY glCompressedTexImage1DARB(GLenum target,GLint level,GLenum internalformat,GLsizei width,GLint border,GLsizei imageSize,const void *data);
GLAPI  void  APIENTRY glCompressedTexImage2D(GLenum target,GLint level,GLenum internalformat,GLsizei width,GLsizei height,GLint border,GLsizei imageSize,const void *data);
GLAPI  void  APIENTRY glCompressedTexImage2DARB(GLenum target,GLint level,GLenum internalformat,GLsizei width,GLsizei height,GLint border,GLsizei imageSize,const void *data);
GLAPI  void  APIENTRY glCompressedTexImage3D(GLenum target,GLint level,GLenum internalformat,GLsizei width,GLsizei height,GLsizei depth,GLint border,GLsizei imageSize,const void *data);
GLAPI  void  APIENTRY glCompressedTexImage3DARB(GLenum target,GLint level,GLenum internalformat,GLsizei width,GLsizei height,GLsizei depth,GLint border,GLsizei imageSize,const void *data);
GLAPI  void  APIENTRY glCompressedTexImage3DOES(GLenum target,GLint level,GLenum internalformat,GLsizei width,GLsizei height,GLsizei depth,GLint border,GLsizei imageSize,const void *data);
GLAPI  void  APIENTRY glCompressedTexSubImage1D(GLenum target,GLint level,GLint xoffset,GLsizei width,GLenum format,GLsizei imageSize,const void *data);
GLAPI  void  APIENTRY glCompressedTexSubImage1DARB(GLenum target,GLint level,GLint xoffset,GLsizei width,GLenum format,GLsizei imageSize,const void *data);
GLAPI  void  APIENTRY glCompressedTexSubImage2D(GLenum target,GLint level,GLint xoffset,GLint yoffset,GLsizei width,GLsizei height,GLenum format,GLsizei imageSize,const void *data);
GLAPI  void  APIENTRY glCompressedTexSubImage2DARB(GLenum target,GLint level,GLint xoffset,GLint yoffset,GLsizei width,GLsizei height,GLenum format,GLsizei imageSize,const void *data);
GLAPI  void  APIENTRY glCompressedTexSubImage3D(GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLsizei width,GLsizei height,GLsizei depth,GLenum format,GLsizei imageSize,const void *data);
GLAPI  void  APIENTRY glCompressedTexSubImage3DARB(GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLsizei width,GLsizei height,GLsizei depth,GLenum format,GLsizei imageSize,const void *data);
GLAPI  void  APIENTRY glCompressedTexSubImage3DOES(GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLsizei width,GLsizei height,GLsizei depth,GLenum format,GLsizei imageSize,const void *data);
GLAPI  void  APIENTRY glCompressedTextureImage1DEXT(GLuint texture,GLenum target,GLint level,GLenum internalformat,GLsizei width,GLint border,GLsizei imageSize,const void *bits);
GLAPI  void  APIENTRY glCompressedTextureImage2DEXT(GLuint texture,GLenum target,GLint level,GLenum internalformat,GLsizei width,GLsizei height,GLint border,GLsizei imageSize,const void *bits);
GLAPI  void  APIENTRY glCompressedTextureImage3DEXT(GLuint texture,GLenum target,GLint level,GLenum internalformat,GLsizei width,GLsizei height,GLsizei depth,GLint border,GLsizei imageSize,const void *bits);
GLAPI  void  APIENTRY glCompressedTextureSubImage1DEXT(GLuint texture,GLenum target,GLint level,GLint xoffset,GLsizei width,GLenum format,GLsizei imageSize,const void *bits);
GLAPI  void  APIENTRY glCompressedTextureSubImage2DEXT(GLuint texture,GLenum target,GLint level,GLint xoffset,GLint yoffset,GLsizei width,GLsizei height,GLenum format,GLsizei imageSize,const void *bits);
GLAPI  void  APIENTRY glCompressedTextureSubImage3DEXT(GLuint texture,GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLsizei width,GLsizei height,GLsizei depth,GLenum format,GLsizei imageSize,const void *bits);
GLAPI  void  APIENTRY glConvolutionFilter1D(GLenum target,GLenum internalformat,GLsizei width,GLenum format,GLenum type,const void *image);
GLAPI  void  APIENTRY glConvolutionFilter1DEXT(GLenum target,GLenum internalformat,GLsizei width,GLenum format,GLenum type,const void *image);
GLAPI  void  APIENTRY glConvolutionFilter2D(GLenum target,GLenum internalformat,GLsizei width,GLsizei height,GLenum format,GLenum type,const void *image);
GLAPI  void  APIENTRY glConvolutionFilter2DEXT(GLenum target,GLenum internalformat,GLsizei width,GLsizei height,GLenum format,GLenum type,const void *image);
GLAPI  void  APIENTRY glConvolutionParameterf(GLenum target,GLenum pname,GLfloat params);
GLAPI  void  APIENTRY glConvolutionParameterfEXT(GLenum target,GLenum pname,GLfloat params);
GLAPI  void  APIENTRY glConvolutionParameterfv(GLenum target,GLenum pname,const GLfloat *params);
GLAPI  void  APIENTRY glConvolutionParameterfvEXT(GLenum target,GLenum pname,const GLfloat *params);
GLAPI  void  APIENTRY glConvolutionParameteri(GLenum target,GLenum pname,GLint params);
GLAPI  void  APIENTRY glConvolutionParameteriEXT(GLenum target,GLenum pname,GLint params);
GLAPI  void  APIENTRY glConvolutionParameteriv(GLenum target,GLenum pname,const GLint *params);
GLAPI  void  APIENTRY glConvolutionParameterivEXT(GLenum target,GLenum pname,const GLint *params);
GLAPI  void  APIENTRY glConvolutionParameterxOES(GLenum target,GLenum pname,GLfixed param);
GLAPI  void  APIENTRY glConvolutionParameterxvOES(GLenum target,GLenum pname,const GLfixed *params);
GLAPI  void  APIENTRY glCopyBufferSubData(GLenum readTarget,GLenum writeTarget,GLintptr readOffset,GLintptr writeOffset,GLsizeiptr size);
GLAPI  void  APIENTRY glCopyBufferSubDataNV(GLenum readTarget,GLenum writeTarget,GLintptr readOffset,GLintptr writeOffset,GLsizeiptr size);
GLAPI  void  APIENTRY glCopyColorSubTable(GLenum target,GLsizei start,GLint x,GLint y,GLsizei width);
GLAPI  void  APIENTRY glCopyColorSubTableEXT(GLenum target,GLsizei start,GLint x,GLint y,GLsizei width);
GLAPI  void  APIENTRY glCopyColorTable(GLenum target,GLenum internalformat,GLint x,GLint y,GLsizei width);
GLAPI  void  APIENTRY glCopyColorTableSGI(GLenum target,GLenum internalformat,GLint x,GLint y,GLsizei width);
GLAPI  void  APIENTRY glCopyConvolutionFilter1D(GLenum target,GLenum internalformat,GLint x,GLint y,GLsizei width);
GLAPI  void  APIENTRY glCopyConvolutionFilter1DEXT(GLenum target,GLenum internalformat,GLint x,GLint y,GLsizei width);
GLAPI  void  APIENTRY glCopyConvolutionFilter2D(GLenum target,GLenum internalformat,GLint x,GLint y,GLsizei width,GLsizei height);
GLAPI  void  APIENTRY glCopyConvolutionFilter2DEXT(GLenum target,GLenum internalformat,GLint x,GLint y,GLsizei width,GLsizei height);
GLAPI  void  APIENTRY glCopyImageSubData(GLuint srcName,GLenum srcTarget,GLint srcLevel,GLint srcX,GLint srcY,GLint srcZ,GLuint dstName,GLenum dstTarget,GLint dstLevel,GLint dstX,GLint dstY,GLint dstZ,GLsizei srcWidth,GLsizei srcHeight,GLsizei srcDepth);
GLAPI  void  APIENTRY glCopyImageSubDataEXT(GLuint srcName,GLenum srcTarget,GLint srcLevel,GLint srcX,GLint srcY,GLint srcZ,GLuint dstName,GLenum dstTarget,GLint dstLevel,GLint dstX,GLint dstY,GLint dstZ,GLsizei srcWidth,GLsizei srcHeight,GLsizei srcDepth);
GLAPI  void  APIENTRY glCopyImageSubDataNV(GLuint srcName,GLenum srcTarget,GLint srcLevel,GLint srcX,GLint srcY,GLint srcZ,GLuint dstName,GLenum dstTarget,GLint dstLevel,GLint dstX,GLint dstY,GLint dstZ,GLsizei width,GLsizei height,GLsizei depth);
GLAPI  void  APIENTRY glCopyMultiTexImage1DEXT(GLenum texunit,GLenum target,GLint level,GLenum internalformat,GLint x,GLint y,GLsizei width,GLint border);
GLAPI  void  APIENTRY glCopyMultiTexImage2DEXT(GLenum texunit,GLenum target,GLint level,GLenum internalformat,GLint x,GLint y,GLsizei width,GLsizei height,GLint border);
GLAPI  void  APIENTRY glCopyMultiTexSubImage1DEXT(GLenum texunit,GLenum target,GLint level,GLint xoffset,GLint x,GLint y,GLsizei width);
GLAPI  void  APIENTRY glCopyMultiTexSubImage2DEXT(GLenum texunit,GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint x,GLint y,GLsizei width,GLsizei height);
GLAPI  void  APIENTRY glCopyMultiTexSubImage3DEXT(GLenum texunit,GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLint x,GLint y,GLsizei width,GLsizei height);
GLAPI  void  APIENTRY glCopyPathNV(GLuint resultPath,GLuint srcPath);
GLAPI  void  APIENTRY glCopyPixels(GLint x,GLint y,GLsizei width,GLsizei height,GLenum type);
GLAPI  void  APIENTRY glCopyTexImage1D(GLenum target,GLint level,GLenum internalformat,GLint x,GLint y,GLsizei width,GLint border);
GLAPI  void  APIENTRY glCopyTexImage1DEXT(GLenum target,GLint level,GLenum internalformat,GLint x,GLint y,GLsizei width,GLint border);
GLAPI  void  APIENTRY glCopyTexImage2D(GLenum target,GLint level,GLenum internalformat,GLint x,GLint y,GLsizei width,GLsizei height,GLint border);
GLAPI  void  APIENTRY glCopyTexImage2DEXT(GLenum target,GLint level,GLenum internalformat,GLint x,GLint y,GLsizei width,GLsizei height,GLint border);
GLAPI  void  APIENTRY glCopyTexSubImage1D(GLenum target,GLint level,GLint xoffset,GLint x,GLint y,GLsizei width);
GLAPI  void  APIENTRY glCopyTexSubImage1DEXT(GLenum target,GLint level,GLint xoffset,GLint x,GLint y,GLsizei width);
GLAPI  void  APIENTRY glCopyTexSubImage2D(GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint x,GLint y,GLsizei width,GLsizei height);
GLAPI  void  APIENTRY glCopyTexSubImage2DEXT(GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint x,GLint y,GLsizei width,GLsizei height);
GLAPI  void  APIENTRY glCopyTexSubImage3D(GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLint x,GLint y,GLsizei width,GLsizei height);
GLAPI  void  APIENTRY glCopyTexSubImage3DEXT(GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLint x,GLint y,GLsizei width,GLsizei height);
GLAPI  void  APIENTRY glCopyTexSubImage3DOES(GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLint x,GLint y,GLsizei width,GLsizei height);
GLAPI  void  APIENTRY glCopyTextureImage1DEXT(GLuint texture,GLenum target,GLint level,GLenum internalformat,GLint x,GLint y,GLsizei width,GLint border);
GLAPI  void  APIENTRY glCopyTextureImage2DEXT(GLuint texture,GLenum target,GLint level,GLenum internalformat,GLint x,GLint y,GLsizei width,GLsizei height,GLint border);
GLAPI  void  APIENTRY glCopyTextureLevelsAPPLE(GLuint destinationTexture,GLuint sourceTexture,GLint sourceBaseLevel,GLsizei sourceLevelCount);
GLAPI  void  APIENTRY glCopyTextureSubImage1DEXT(GLuint texture,GLenum target,GLint level,GLint xoffset,GLint x,GLint y,GLsizei width);
GLAPI  void  APIENTRY glCopyTextureSubImage2DEXT(GLuint texture,GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint x,GLint y,GLsizei width,GLsizei height);
GLAPI  void  APIENTRY glCopyTextureSubImage3DEXT(GLuint texture,GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLint x,GLint y,GLsizei width,GLsizei height);
GLAPI  void  APIENTRY glCoverFillPathInstancedNV(GLsizei numPaths,GLenum pathNameType,const void *paths,GLuint pathBase,GLenum coverMode,GLenum transformType,const GLfloat *transformValues);
GLAPI  void  APIENTRY glCoverFillPathNV(GLuint path,GLenum coverMode);
GLAPI  void  APIENTRY glCoverStrokePathInstancedNV(GLsizei numPaths,GLenum pathNameType,const void *paths,GLuint pathBase,GLenum coverMode,GLenum transformType,const GLfloat *transformValues);
GLAPI  void  APIENTRY glCoverStrokePathNV(GLuint path,GLenum coverMode);
GLAPI  void  APIENTRY glCoverageMaskNV(GLboolean mask);
GLAPI  void  APIENTRY glCoverageOperationNV(GLenum operation);
GLAPI  void  APIENTRY glCreatePerfQueryINTEL(GLuint queryId,GLuint *queryHandle);
GLAPI  GLuint  APIENTRY glCreateShader(GLenum type);
GLAPI  GLhandleARB  APIENTRY glCreateShaderObjectARB(GLenum shaderType);
GLAPI  GLuint  APIENTRY glCreateShaderProgramEXT(GLenum type,const GLchar *string);
GLAPI  GLuint  APIENTRY glCreateShaderProgramv(GLenum type,GLsizei count,const GLchar *const*strings);
GLAPI  GLuint  APIENTRY glCreateShaderProgramvEXT(GLenum type,GLsizei count,const GLchar **strings);
GLAPI  void  APIENTRY glCullFace(GLenum mode);
GLAPI  void  APIENTRY glCullParameterdvEXT(GLenum pname,GLdouble *params);
GLAPI  void  APIENTRY glCullParameterfvEXT(GLenum pname,GLfloat *params);
GLAPI  void  APIENTRY glCurrentPaletteMatrixARB(GLint index);
GLAPI  void  APIENTRY glCurrentPaletteMatrixOES(GLuint matrixpaletteindex);
GLAPI  void  APIENTRY glDebugMessageCallback(GLDEBUGPROC callback,const void *userParam);
GLAPI  void  APIENTRY glDebugMessageCallbackAMD(GLDEBUGPROCAMD callback,void *userParam);
GLAPI  void  APIENTRY glDebugMessageControl(GLenum source,GLenum type,GLenum severity,GLsizei count,const GLuint *ids,GLboolean enabled);
GLAPI  void  APIENTRY glDebugMessageControlARB(GLenum source,GLenum type,GLenum severity,GLsizei count,const GLuint *ids,GLboolean enabled);
GLAPI  void  APIENTRY glDebugMessageControlKHR(GLenum source,GLenum type,GLenum severity,GLsizei count,const GLuint *ids,GLboolean enabled);
GLAPI  void  APIENTRY glDebugMessageEnableAMD(GLenum category,GLenum severity,GLsizei count,const GLuint *ids,GLboolean enabled);
GLAPI  void  APIENTRY glDebugMessageInsert(GLenum source,GLenum type,GLuint id,GLenum severity,GLsizei length,const GLchar *buf);
GLAPI  void  APIENTRY glDebugMessageInsertAMD(GLenum category,GLenum severity,GLuint id,GLsizei length,const GLchar *buf);
GLAPI  void  APIENTRY glDebugMessageInsertARB(GLenum source,GLenum type,GLuint id,GLenum severity,GLsizei length,const GLchar *buf);
GLAPI  void  APIENTRY glDebugMessageInsertKHR(GLenum source,GLenum type,GLuint id,GLenum severity,GLsizei length,const GLchar *buf);
GLAPI  void  APIENTRY glDeformSGIX(GLbitfield mask);
GLAPI  void  APIENTRY glDeformationMap3dSGIX(GLenum target,GLdouble u1,GLdouble u2,GLint ustride,GLint uorder,GLdouble v1,GLdouble v2,GLint vstride,GLint vorder,GLdouble w1,GLdouble w2,GLint wstride,GLint worder,const GLdouble *points);
GLAPI  void  APIENTRY glDeformationMap3fSGIX(GLenum target,GLfloat u1,GLfloat u2,GLint ustride,GLint uorder,GLfloat v1,GLfloat v2,GLint vstride,GLint vorder,GLfloat w1,GLfloat w2,GLint wstride,GLint worder,const GLfloat *points);
GLAPI  void  APIENTRY glDeleteAsyncMarkersSGIX(GLuint marker,GLsizei range);
GLAPI  void  APIENTRY glDeleteBuffers(GLsizei n,const GLuint *buffers);
GLAPI  void  APIENTRY glDeleteBuffersARB(GLsizei n,const GLuint *buffers);
GLAPI  void  APIENTRY glDeleteFencesAPPLE(GLsizei n,const GLuint *fences);
GLAPI  void  APIENTRY glDeleteFencesNV(GLsizei n,const GLuint *fences);
GLAPI  void  APIENTRY glDeleteFragmentShaderATI(GLuint id);
GLAPI  void  APIENTRY glDeleteFramebuffers(GLsizei n,const GLuint *framebuffers);
GLAPI  void  APIENTRY glDeleteFramebuffersEXT(GLsizei n,const GLuint *framebuffers);
GLAPI  void  APIENTRY glDeleteFramebuffersOES(GLsizei n,const GLuint *framebuffers);
GLAPI  void  APIENTRY glDeleteLists(GLuint list,GLsizei range);
GLAPI  void  APIENTRY glDeleteNamedStringARB(GLint namelen,const GLchar *name);
GLAPI  void  APIENTRY glDeleteNamesAMD(GLenum identifier,GLuint num,const GLuint *names);
GLAPI  void  APIENTRY glDeleteObjectARB(GLhandleARB obj);
GLAPI  void  APIENTRY glDeleteOcclusionQueriesNV(GLsizei n,const GLuint *ids);
GLAPI  void  APIENTRY glDeletePathsNV(GLuint path,GLsizei range);
GLAPI  void  APIENTRY glDeletePerfMonitorsAMD(GLsizei n,GLuint *monitors);
GLAPI  void  APIENTRY glDeletePerfQueryINTEL(GLuint queryHandle);
GLAPI  void  APIENTRY glDeleteProgram(GLuint program);
GLAPI  void  APIENTRY glDeleteProgramPipelines(GLsizei n,const GLuint *pipelines);
GLAPI  void  APIENTRY glDeleteProgramPipelinesEXT(GLsizei n,const GLuint *pipelines);
GLAPI  void  APIENTRY glDeleteProgramsARB(GLsizei n,const GLuint *programs);
GLAPI  void  APIENTRY glDeleteProgramsNV(GLsizei n,const GLuint *programs);
GLAPI  void  APIENTRY glDeleteQueries(GLsizei n,const GLuint *ids);
GLAPI  void  APIENTRY glDeleteQueriesARB(GLsizei n,const GLuint *ids);
GLAPI  void  APIENTRY glDeleteQueriesEXT(GLsizei n,const GLuint *ids);
GLAPI  void  APIENTRY glDeleteRenderbuffers(GLsizei n,const GLuint *renderbuffers);
GLAPI  void  APIENTRY glDeleteRenderbuffersEXT(GLsizei n,const GLuint *renderbuffers);
GLAPI  void  APIENTRY glDeleteRenderbuffersOES(GLsizei n,const GLuint *renderbuffers);
GLAPI  void  APIENTRY glDeleteSamplers(GLsizei count,const GLuint *samplers);
GLAPI  void  APIENTRY glDeleteShader(GLuint shader);
GLAPI  void  APIENTRY glDeleteSync(GLsync sync);
GLAPI  void  APIENTRY glDeleteSyncAPPLE(GLsync sync);
GLAPI  void  APIENTRY glDeleteTextures(GLsizei n,const GLuint *textures);
GLAPI  void  APIENTRY glDeleteTexturesEXT(GLsizei n,const GLuint *textures);
GLAPI  void  APIENTRY glDeleteTransformFeedbacks(GLsizei n,const GLuint *ids);
GLAPI  void  APIENTRY glDeleteTransformFeedbacksNV(GLsizei n,const GLuint *ids);
GLAPI  void  APIENTRY glDeleteVertexArrays(GLsizei n,const GLuint *arrays);
GLAPI  void  APIENTRY glDeleteVertexArraysAPPLE(GLsizei n,const GLuint *arrays);
GLAPI  void  APIENTRY glDeleteVertexArraysOES(GLsizei n,const GLuint *arrays);
GLAPI  void  APIENTRY glDeleteVertexShaderEXT(GLuint id);
GLAPI  void  APIENTRY glDepthBoundsEXT(GLclampd zmin,GLclampd zmax);
GLAPI  void  APIENTRY glDepthBoundsdNV(GLdouble zmin,GLdouble zmax);
GLAPI  void  APIENTRY glDepthFunc(GLenum func);
GLAPI  void  APIENTRY glDepthMask(GLboolean flag);
GLAPI  void  APIENTRY glDepthRange(GLdouble near,GLdouble far);
GLAPI  void  APIENTRY glDepthRangeArrayv(GLuint first,GLsizei count,const GLdouble *v);
GLAPI  void  APIENTRY glDepthRangeIndexed(GLuint index,GLdouble n,GLdouble f);
GLAPI  void  APIENTRY glDepthRangedNV(GLdouble zNear,GLdouble zFar);
GLAPI  void  APIENTRY glDepthRangef(GLfloat n,GLfloat f);
GLAPI  void  APIENTRY glDepthRangefOES(GLclampf n,GLclampf f);
GLAPI  void  APIENTRY glDepthRangex(GLfixed n,GLfixed f);
GLAPI  void  APIENTRY glDepthRangexOES(GLfixed n,GLfixed f);
GLAPI  void  APIENTRY glDetachObjectARB(GLhandleARB containerObj,GLhandleARB attachedObj);
GLAPI  void  APIENTRY glDetachShader(GLuint program,GLuint shader);
GLAPI  void  APIENTRY glDetailTexFuncSGIS(GLenum target,GLsizei n,const GLfloat *points);
GLAPI  void  APIENTRY glDisable(GLenum cap);
GLAPI  void  APIENTRY glDisableClientState(GLenum array);
GLAPI  void  APIENTRY glDisableClientStateIndexedEXT(GLenum array,GLuint index);
GLAPI  void  APIENTRY glDisableClientStateiEXT(GLenum array,GLuint index);
GLAPI  void  APIENTRY glDisableDriverControlQCOM(GLuint driverControl);
GLAPI  void  APIENTRY glDisableIndexedEXT(GLenum target,GLuint index);
GLAPI  void  APIENTRY glDisableVariantClientStateEXT(GLuint id);
GLAPI  void  APIENTRY glDisableVertexArrayAttribEXT(GLuint vaobj,GLuint index);
GLAPI  void  APIENTRY glDisableVertexArrayEXT(GLuint vaobj,GLenum array);
GLAPI  void  APIENTRY glDisableVertexAttribAPPLE(GLuint index,GLenum pname);
GLAPI  void  APIENTRY glDisableVertexAttribArray(GLuint index);
GLAPI  void  APIENTRY glDisableVertexAttribArrayARB(GLuint index);
GLAPI  void  APIENTRY glDisablei(GLenum target,GLuint index);
GLAPI  void  APIENTRY glDisableiEXT(GLenum target,GLuint index);
GLAPI  void  APIENTRY glDiscardFramebufferEXT(GLenum target,GLsizei numAttachments,const GLenum *attachments);
GLAPI  void  APIENTRY glDispatchCompute(GLuint num_groups_x,GLuint num_groups_y,GLuint num_groups_z);
GLAPI  void  APIENTRY glDispatchComputeGroupSizeARB(GLuint num_groups_x,GLuint num_groups_y,GLuint num_groups_z,GLuint group_size_x,GLuint group_size_y,GLuint group_size_z);
GLAPI  void  APIENTRY glDispatchComputeIndirect(GLintptr indirect);
GLAPI  void  APIENTRY glDrawArrays(GLenum mode,GLint first,GLsizei count);
GLAPI  void  APIENTRY glDrawArraysEXT(GLenum mode,GLint first,GLsizei count);
GLAPI  void  APIENTRY glDrawArraysIndirect(GLenum mode,const void *indirect);
GLAPI  void  APIENTRY glDrawArraysInstanced(GLenum mode,GLint first,GLsizei count,GLsizei instancecount);
GLAPI  void  APIENTRY glDrawArraysInstancedANGLE(GLenum mode,GLint first,GLsizei count,GLsizei primcount);
GLAPI  void  APIENTRY glDrawArraysInstancedARB(GLenum mode,GLint first,GLsizei count,GLsizei primcount);
GLAPI  void  APIENTRY glDrawArraysInstancedBaseInstance(GLenum mode,GLint first,GLsizei count,GLsizei instancecount,GLuint baseinstance);
GLAPI  void  APIENTRY glDrawArraysInstancedEXT(GLenum mode,GLint start,GLsizei count,GLsizei primcount);
GLAPI  void  APIENTRY glDrawArraysInstancedNV(GLenum mode,GLint first,GLsizei count,GLsizei primcount);
GLAPI  void  APIENTRY glDrawBuffer(GLenum mode);
GLAPI  void  APIENTRY glDrawBuffers(GLsizei n,const GLenum *bufs);
GLAPI  void  APIENTRY glDrawBuffersARB(GLsizei n,const GLenum *bufs);
GLAPI  void  APIENTRY glDrawBuffersATI(GLsizei n,const GLenum *bufs);
GLAPI  void  APIENTRY glDrawBuffersEXT(GLsizei n,const GLenum *bufs);
GLAPI  void  APIENTRY glDrawBuffersIndexedEXT(GLint n,const GLenum *location,const GLint *indices);
GLAPI  void  APIENTRY glDrawBuffersNV(GLsizei n,const GLenum *bufs);
GLAPI  void  APIENTRY glDrawElementArrayAPPLE(GLenum mode,GLint first,GLsizei count);
GLAPI  void  APIENTRY glDrawElementArrayATI(GLenum mode,GLsizei count);
GLAPI  void  APIENTRY glDrawElements(GLenum mode,GLsizei count,GLenum type,const void *indices);
GLAPI  void  APIENTRY glDrawElementsBaseVertex(GLenum mode,GLsizei count,GLenum type,const void *indices,GLint basevertex);
GLAPI  void  APIENTRY glDrawElementsIndirect(GLenum mode,GLenum type,const void *indirect);
GLAPI  void  APIENTRY glDrawElementsInstanced(GLenum mode,GLsizei count,GLenum type,const void *indices,GLsizei instancecount);
GLAPI  void  APIENTRY glDrawElementsInstancedANGLE(GLenum mode,GLsizei count,GLenum type,const void *indices,GLsizei primcount);
GLAPI  void  APIENTRY glDrawElementsInstancedARB(GLenum mode,GLsizei count,GLenum type,const void *indices,GLsizei primcount);
GLAPI  void  APIENTRY glDrawElementsInstancedBaseInstance(GLenum mode,GLsizei count,GLenum type,const void *indices,GLsizei instancecount,GLuint baseinstance);
GLAPI  void  APIENTRY glDrawElementsInstancedBaseVertex(GLenum mode,GLsizei count,GLenum type,const void *indices,GLsizei instancecount,GLint basevertex);
GLAPI  void  APIENTRY glDrawElementsInstancedBaseVertexBaseInstance(GLenum mode,GLsizei count,GLenum type,const void *indices,GLsizei instancecount,GLint basevertex,GLuint baseinstance);
GLAPI  void  APIENTRY glDrawElementsInstancedEXT(GLenum mode,GLsizei count,GLenum type,const void *indices,GLsizei primcount);
GLAPI  void  APIENTRY glDrawElementsInstancedNV(GLenum mode,GLsizei count,GLenum type,const void *indices,GLsizei primcount);
GLAPI  void  APIENTRY glDrawMeshArraysSUN(GLenum mode,GLint first,GLsizei count,GLsizei width);
GLAPI  void  APIENTRY glDrawPixels(GLsizei width,GLsizei height,GLenum format,GLenum type,const void *pixels);
GLAPI  void  APIENTRY glDrawRangeElementArrayAPPLE(GLenum mode,GLuint start,GLuint end,GLint first,GLsizei count);
GLAPI  void  APIENTRY glDrawRangeElementArrayATI(GLenum mode,GLuint start,GLuint end,GLsizei count);
GLAPI  void  APIENTRY glDrawRangeElements(GLenum mode,GLuint start,GLuint end,GLsizei count,GLenum type,const void *indices);
GLAPI  void  APIENTRY glDrawRangeElementsBaseVertex(GLenum mode,GLuint start,GLuint end,GLsizei count,GLenum type,const void *indices,GLint basevertex);
GLAPI  void  APIENTRY glDrawRangeElementsEXT(GLenum mode,GLuint start,GLuint end,GLsizei count,GLenum type,const void *indices);
GLAPI  void  APIENTRY glDrawTexfOES(GLfloat x,GLfloat y,GLfloat z,GLfloat width,GLfloat height);
GLAPI  void  APIENTRY glDrawTexfvOES(const GLfloat *coords);
GLAPI  void  APIENTRY glDrawTexiOES(GLint x,GLint y,GLint z,GLint width,GLint height);
GLAPI  void  APIENTRY glDrawTexivOES(const GLint *coords);
GLAPI  void  APIENTRY glDrawTexsOES(GLshort x,GLshort y,GLshort z,GLshort width,GLshort height);
GLAPI  void  APIENTRY glDrawTexsvOES(const GLshort *coords);
GLAPI  void  APIENTRY glDrawTextureNV(GLuint texture,GLuint sampler,GLfloat x0,GLfloat y0,GLfloat x1,GLfloat y1,GLfloat z,GLfloat s0,GLfloat t0,GLfloat s1,GLfloat t1);
GLAPI  void  APIENTRY glDrawTexxOES(GLfixed x,GLfixed y,GLfixed z,GLfixed width,GLfixed height);
GLAPI  void  APIENTRY glDrawTexxvOES(const GLfixed *coords);
GLAPI  void  APIENTRY glDrawTransformFeedback(GLenum mode,GLuint id);
GLAPI  void  APIENTRY glDrawTransformFeedbackInstanced(GLenum mode,GLuint id,GLsizei instancecount);
GLAPI  void  APIENTRY glDrawTransformFeedbackNV(GLenum mode,GLuint id);
GLAPI  void  APIENTRY glDrawTransformFeedbackStream(GLenum mode,GLuint id,GLuint stream);
GLAPI  void  APIENTRY glDrawTransformFeedbackStreamInstanced(GLenum mode,GLuint id,GLuint stream,GLsizei instancecount);
GLAPI  void  APIENTRY glEdgeFlag(GLboolean flag);
GLAPI  void  APIENTRY glEdgeFlagFormatNV(GLsizei stride);
GLAPI  void  APIENTRY glEdgeFlagPointer(GLsizei stride,const void *pointer);
GLAPI  void  APIENTRY glEdgeFlagPointerEXT(GLsizei stride,GLsizei count,const GLboolean *pointer);
GLAPI  void  APIENTRY glEdgeFlagPointerListIBM(GLint stride,const GLboolean **pointer,GLint ptrstride);
GLAPI  void  APIENTRY glEdgeFlagv(const GLboolean *flag);
GLAPI  void  APIENTRY glElementPointerAPPLE(GLenum type,const void *pointer);
GLAPI  void  APIENTRY glElementPointerATI(GLenum type,const void *pointer);
GLAPI  void  APIENTRY glEnable(GLenum cap);
GLAPI  void  APIENTRY glEnableClientState(GLenum array);
GLAPI  void  APIENTRY glEnableClientStateIndexedEXT(GLenum array,GLuint index);
GLAPI  void  APIENTRY glEnableClientStateiEXT(GLenum array,GLuint index);
GLAPI  void  APIENTRY glEnableDriverControlQCOM(GLuint driverControl);
GLAPI  void  APIENTRY glEnableIndexedEXT(GLenum target,GLuint index);
GLAPI  void  APIENTRY glEnableVariantClientStateEXT(GLuint id);
GLAPI  void  APIENTRY glEnableVertexArrayAttribEXT(GLuint vaobj,GLuint index);
GLAPI  void  APIENTRY glEnableVertexArrayEXT(GLuint vaobj,GLenum array);
GLAPI  void  APIENTRY glEnableVertexAttribAPPLE(GLuint index,GLenum pname);
GLAPI  void  APIENTRY glEnableVertexAttribArray(GLuint index);
GLAPI  void  APIENTRY glEnableVertexAttribArrayARB(GLuint index);
GLAPI  void  APIENTRY glEnablei(GLenum target,GLuint index);
GLAPI  void  APIENTRY glEnableiEXT(GLenum target,GLuint index);
GLAPI  void  APIENTRY glEndPerfMonitorAMD(GLuint monitor);
GLAPI  void  APIENTRY glEndPerfQueryINTEL(GLuint queryHandle);
GLAPI  void  APIENTRY glEndQuery(GLenum target);
GLAPI  void  APIENTRY glEndQueryARB(GLenum target);
GLAPI  void  APIENTRY glEndQueryEXT(GLenum target);
GLAPI  void  APIENTRY glEndQueryIndexed(GLenum target,GLuint index);
GLAPI  void  APIENTRY glEndTilingQCOM(GLbitfield preserveMask);
GLAPI  void  APIENTRY glEndVideoCaptureNV(GLuint video_capture_slot);
GLAPI  void  APIENTRY glEvalCoord1d(GLdouble u);
GLAPI  void  APIENTRY glEvalCoord1dv(const GLdouble *u);
GLAPI  void  APIENTRY glEvalCoord1f(GLfloat u);
GLAPI  void  APIENTRY glEvalCoord1fv(const GLfloat *u);
GLAPI  void  APIENTRY glEvalCoord1xOES(GLfixed u);
GLAPI  void  APIENTRY glEvalCoord1xvOES(const GLfixed *coords);
GLAPI  void  APIENTRY glEvalCoord2d(GLdouble u,GLdouble v);
GLAPI  void  APIENTRY glEvalCoord2dv(const GLdouble *u);
GLAPI  void  APIENTRY glEvalCoord2f(GLfloat u,GLfloat v);
GLAPI  void  APIENTRY glEvalCoord2fv(const GLfloat *u);
GLAPI  void  APIENTRY glEvalCoord2xOES(GLfixed u,GLfixed v);
GLAPI  void  APIENTRY glEvalCoord2xvOES(const GLfixed *coords);
GLAPI  void  APIENTRY glEvalMapsNV(GLenum target,GLenum mode);
GLAPI  void  APIENTRY glEvalMesh1(GLenum mode,GLint i1,GLint i2);
GLAPI  void  APIENTRY glEvalMesh2(GLenum mode,GLint i1,GLint i2,GLint j1,GLint j2);
GLAPI  void  APIENTRY glEvalPoint1(GLint i);
GLAPI  void  APIENTRY glEvalPoint2(GLint i,GLint j);
GLAPI  void  APIENTRY glExecuteProgramNV(GLenum target,GLuint id,const GLfloat *params);
GLAPI  void  APIENTRY glExtGetBufferPointervQCOM(GLenum target,void **params);
GLAPI  void  APIENTRY glExtGetBuffersQCOM(GLuint *buffers,GLint maxBuffers,GLint *numBuffers);
GLAPI  void  APIENTRY glExtGetFramebuffersQCOM(GLuint *framebuffers,GLint maxFramebuffers,GLint *numFramebuffers);
GLAPI  void  APIENTRY glExtGetProgramBinarySourceQCOM(GLuint program,GLenum shadertype,GLchar *source,GLint *length);
GLAPI  void  APIENTRY glExtGetProgramsQCOM(GLuint *programs,GLint maxPrograms,GLint *numPrograms);
GLAPI  void  APIENTRY glExtGetRenderbuffersQCOM(GLuint *renderbuffers,GLint maxRenderbuffers,GLint *numRenderbuffers);
GLAPI  void  APIENTRY glExtGetShadersQCOM(GLuint *shaders,GLint maxShaders,GLint *numShaders);
GLAPI  void  APIENTRY glExtGetTexLevelParameterivQCOM(GLuint texture,GLenum face,GLint level,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glExtGetTexSubImageQCOM(GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLsizei width,GLsizei height,GLsizei depth,GLenum format,GLenum type,void *texels);
GLAPI  void  APIENTRY glExtGetTexturesQCOM(GLuint *textures,GLint maxTextures,GLint *numTextures);
GLAPI  GLboolean  APIENTRY glExtIsProgramBinaryQCOM(GLuint program);
GLAPI  void  APIENTRY glExtTexObjectStateOverrideiQCOM(GLenum target,GLenum pname,GLint param);
GLAPI  void  APIENTRY glExtractComponentEXT(GLuint res,GLuint src,GLuint num);
GLAPI  void  APIENTRY glFeedbackBuffer(GLsizei size,GLenum type,GLfloat *buffer);
GLAPI  void  APIENTRY glFeedbackBufferxOES(GLsizei n,GLenum type,const GLfixed *buffer);
GLAPI  GLsync  APIENTRY glFenceSync(GLenum condition,GLbitfield flags);
GLAPI  GLsync  APIENTRY glFenceSyncAPPLE(GLenum condition,GLbitfield flags);
GLAPI  void  APIENTRY glFinalCombinerInputNV(GLenum variable,GLenum input,GLenum mapping,GLenum componentUsage);
GLAPI  GLint  APIENTRY glFinishAsyncSGIX(GLuint *markerp);
GLAPI  void  APIENTRY glFinishFenceAPPLE(GLuint fence);
GLAPI  void  APIENTRY glFinishFenceNV(GLuint fence);
GLAPI  void  APIENTRY glFinishObjectAPPLE(GLenum object,GLint name);
GLAPI  void  APIENTRY glFlushMappedBufferRange(GLenum target,GLintptr offset,GLsizeiptr length);
GLAPI  void  APIENTRY glFlushMappedBufferRangeAPPLE(GLenum target,GLintptr offset,GLsizeiptr size);
GLAPI  void  APIENTRY glFlushMappedBufferRangeEXT(GLenum target,GLintptr offset,GLsizeiptr length);
GLAPI  void  APIENTRY glFlushMappedNamedBufferRangeEXT(GLuint buffer,GLintptr offset,GLsizeiptr length);
GLAPI  void  APIENTRY glFlushPixelDataRangeNV(GLenum target);
GLAPI  void  APIENTRY glFlushStaticDataIBM(GLenum target);
GLAPI  void  APIENTRY glFlushVertexArrayRangeAPPLE(GLsizei length,void *pointer);
GLAPI  void  APIENTRY glFogCoordFormatNV(GLenum type,GLsizei stride);
GLAPI  void  APIENTRY glFogCoordPointer(GLenum type,GLsizei stride,const void *pointer);
GLAPI  void  APIENTRY glFogCoordPointerEXT(GLenum type,GLsizei stride,const void *pointer);
GLAPI  void  APIENTRY glFogCoordPointerListIBM(GLenum type,GLint stride,const void **pointer,GLint ptrstride);
GLAPI  void  APIENTRY glFogCoordd(GLdouble coord);
GLAPI  void  APIENTRY glFogCoorddEXT(GLdouble coord);
GLAPI  void  APIENTRY glFogCoorddv(const GLdouble *coord);
GLAPI  void  APIENTRY glFogCoorddvEXT(const GLdouble *coord);
GLAPI  void  APIENTRY glFogCoordf(GLfloat coord);
GLAPI  void  APIENTRY glFogCoordfEXT(GLfloat coord);
GLAPI  void  APIENTRY glFogCoordfv(const GLfloat *coord);
GLAPI  void  APIENTRY glFogCoordfvEXT(const GLfloat *coord);
GLAPI  void  APIENTRY glFogCoordhNV(GLhalfNV fog);
GLAPI  void  APIENTRY glFogCoordhvNV(const GLhalfNV *fog);
GLAPI  void  APIENTRY glFogFuncSGIS(GLsizei n,const GLfloat *points);
GLAPI  void  APIENTRY glFogf(GLenum pname,GLfloat param);
GLAPI  void  APIENTRY glFogfv(GLenum pname,const GLfloat *params);
GLAPI  void  APIENTRY glFogi(GLenum pname,GLint param);
GLAPI  void  APIENTRY glFogiv(GLenum pname,const GLint *params);
GLAPI  void  APIENTRY glFogx(GLenum pname,GLfixed param);
GLAPI  void  APIENTRY glFogxOES(GLenum pname,GLfixed param);
GLAPI  void  APIENTRY glFogxv(GLenum pname,const GLfixed *param);
GLAPI  void  APIENTRY glFogxvOES(GLenum pname,const GLfixed *param);
GLAPI  void  APIENTRY glFragmentColorMaterialSGIX(GLenum face,GLenum mode);
GLAPI  void  APIENTRY glFragmentLightModelfSGIX(GLenum pname,GLfloat param);
GLAPI  void  APIENTRY glFragmentLightModelfvSGIX(GLenum pname,const GLfloat *params);
GLAPI  void  APIENTRY glFragmentLightModeliSGIX(GLenum pname,GLint param);
GLAPI  void  APIENTRY glFragmentLightModelivSGIX(GLenum pname,const GLint *params);
GLAPI  void  APIENTRY glFragmentLightfSGIX(GLenum light,GLenum pname,GLfloat param);
GLAPI  void  APIENTRY glFragmentLightfvSGIX(GLenum light,GLenum pname,const GLfloat *params);
GLAPI  void  APIENTRY glFragmentLightiSGIX(GLenum light,GLenum pname,GLint param);
GLAPI  void  APIENTRY glFragmentLightivSGIX(GLenum light,GLenum pname,const GLint *params);
GLAPI  void  APIENTRY glFragmentMaterialfSGIX(GLenum face,GLenum pname,GLfloat param);
GLAPI  void  APIENTRY glFragmentMaterialfvSGIX(GLenum face,GLenum pname,const GLfloat *params);
GLAPI  void  APIENTRY glFragmentMaterialiSGIX(GLenum face,GLenum pname,GLint param);
GLAPI  void  APIENTRY glFragmentMaterialivSGIX(GLenum face,GLenum pname,const GLint *params);
GLAPI  void  APIENTRY glFrameZoomSGIX(GLint factor);
GLAPI  void  APIENTRY glFramebufferDrawBufferEXT(GLuint framebuffer,GLenum mode);
GLAPI  void  APIENTRY glFramebufferDrawBuffersEXT(GLuint framebuffer,GLsizei n,const GLenum *bufs);
GLAPI  void  APIENTRY glFramebufferParameteri(GLenum target,GLenum pname,GLint param);
GLAPI  void  APIENTRY glFramebufferReadBufferEXT(GLuint framebuffer,GLenum mode);
GLAPI  void  APIENTRY glFramebufferRenderbuffer(GLenum target,GLenum attachment,GLenum renderbuffertarget,GLuint renderbuffer);
GLAPI  void  APIENTRY glFramebufferRenderbufferEXT(GLenum target,GLenum attachment,GLenum renderbuffertarget,GLuint renderbuffer);
GLAPI  void  APIENTRY glFramebufferRenderbufferOES(GLenum target,GLenum attachment,GLenum renderbuffertarget,GLuint renderbuffer);
GLAPI  void  APIENTRY glFramebufferTexture(GLenum target,GLenum attachment,GLuint texture,GLint level);
GLAPI  void  APIENTRY glFramebufferTexture1D(GLenum target,GLenum attachment,GLenum textarget,GLuint texture,GLint level);
GLAPI  void  APIENTRY glFramebufferTexture1DEXT(GLenum target,GLenum attachment,GLenum textarget,GLuint texture,GLint level);
GLAPI  void  APIENTRY glFramebufferTexture2D(GLenum target,GLenum attachment,GLenum textarget,GLuint texture,GLint level);
GLAPI  void  APIENTRY glFramebufferTexture2DEXT(GLenum target,GLenum attachment,GLenum textarget,GLuint texture,GLint level);
GLAPI  void  APIENTRY glFramebufferTexture2DMultisampleEXT(GLenum target,GLenum attachment,GLenum textarget,GLuint texture,GLint level,GLsizei samples);
GLAPI  void  APIENTRY glFramebufferTexture2DMultisampleIMG(GLenum target,GLenum attachment,GLenum textarget,GLuint texture,GLint level,GLsizei samples);
GLAPI  void  APIENTRY glFramebufferTexture2DOES(GLenum target,GLenum attachment,GLenum textarget,GLuint texture,GLint level);
GLAPI  void  APIENTRY glFramebufferTexture3D(GLenum target,GLenum attachment,GLenum textarget,GLuint texture,GLint level,GLint zoffset);
GLAPI  void  APIENTRY glFramebufferTexture3DEXT(GLenum target,GLenum attachment,GLenum textarget,GLuint texture,GLint level,GLint zoffset);
GLAPI  void  APIENTRY glFramebufferTexture3DOES(GLenum target,GLenum attachment,GLenum textarget,GLuint texture,GLint level,GLint zoffset);
GLAPI  void  APIENTRY glFramebufferTextureARB(GLenum target,GLenum attachment,GLuint texture,GLint level);
GLAPI  void  APIENTRY glFramebufferTextureEXT(GLenum target,GLenum attachment,GLuint texture,GLint level);
GLAPI  void  APIENTRY glFramebufferTextureFaceARB(GLenum target,GLenum attachment,GLuint texture,GLint level,GLenum face);
GLAPI  void  APIENTRY glFramebufferTextureFaceEXT(GLenum target,GLenum attachment,GLuint texture,GLint level,GLenum face);
GLAPI  void  APIENTRY glFramebufferTextureLayer(GLenum target,GLenum attachment,GLuint texture,GLint level,GLint layer);
GLAPI  void  APIENTRY glFramebufferTextureLayerARB(GLenum target,GLenum attachment,GLuint texture,GLint level,GLint layer);
GLAPI  void  APIENTRY glFramebufferTextureLayerEXT(GLenum target,GLenum attachment,GLuint texture,GLint level,GLint layer);
GLAPI  void  APIENTRY glFreeObjectBufferATI(GLuint buffer);
GLAPI  void  APIENTRY glFrontFace(GLenum mode);
GLAPI  void  APIENTRY glFrustum(GLdouble left,GLdouble right,GLdouble bottom,GLdouble top,GLdouble zNear,GLdouble zFar);
GLAPI  void  APIENTRY glFrustumf(GLfloat l,GLfloat r,GLfloat b,GLfloat t,GLfloat n,GLfloat f);
GLAPI  void  APIENTRY glFrustumfOES(GLfloat l,GLfloat r,GLfloat b,GLfloat t,GLfloat n,GLfloat f);
GLAPI  void  APIENTRY glFrustumx(GLfixed l,GLfixed r,GLfixed b,GLfixed t,GLfixed n,GLfixed f);
GLAPI  void  APIENTRY glFrustumxOES(GLfixed l,GLfixed r,GLfixed b,GLfixed t,GLfixed n,GLfixed f);
GLAPI  GLuint  APIENTRY glGenAsyncMarkersSGIX(GLsizei range);
GLAPI  void  APIENTRY glGenBuffers(GLsizei n,GLuint *buffers);
GLAPI  void  APIENTRY glGenBuffersARB(GLsizei n,GLuint *buffers);
GLAPI  void  APIENTRY glGenFencesAPPLE(GLsizei n,GLuint *fences);
GLAPI  void  APIENTRY glGenFencesNV(GLsizei n,GLuint *fences);
GLAPI  GLuint  APIENTRY glGenFragmentShadersATI(GLuint range);
GLAPI  void  APIENTRY glGenFramebuffers(GLsizei n,GLuint *framebuffers);
GLAPI  void  APIENTRY glGenFramebuffersEXT(GLsizei n,GLuint *framebuffers);
GLAPI  void  APIENTRY glGenFramebuffersOES(GLsizei n,GLuint *framebuffers);
GLAPI  GLuint  APIENTRY glGenLists(GLsizei range);
GLAPI  void  APIENTRY glGenNamesAMD(GLenum identifier,GLuint num,GLuint *names);
GLAPI  void  APIENTRY glGenOcclusionQueriesNV(GLsizei n,GLuint *ids);
GLAPI  GLuint  APIENTRY glGenPathsNV(GLsizei range);
GLAPI  void  APIENTRY glGenPerfMonitorsAMD(GLsizei n,GLuint *monitors);
GLAPI  void  APIENTRY glGenProgramPipelines(GLsizei n,GLuint *pipelines);
GLAPI  void  APIENTRY glGenProgramPipelinesEXT(GLsizei n,GLuint *pipelines);
GLAPI  void  APIENTRY glGenProgramsARB(GLsizei n,GLuint *programs);
GLAPI  void  APIENTRY glGenProgramsNV(GLsizei n,GLuint *programs);
GLAPI  void  APIENTRY glGenQueries(GLsizei n,GLuint *ids);
GLAPI  void  APIENTRY glGenQueriesARB(GLsizei n,GLuint *ids);
GLAPI  void  APIENTRY glGenQueriesEXT(GLsizei n,GLuint *ids);
GLAPI  void  APIENTRY glGenRenderbuffers(GLsizei n,GLuint *renderbuffers);
GLAPI  void  APIENTRY glGenRenderbuffersEXT(GLsizei n,GLuint *renderbuffers);
GLAPI  void  APIENTRY glGenRenderbuffersOES(GLsizei n,GLuint *renderbuffers);
GLAPI  void  APIENTRY glGenSamplers(GLsizei count,GLuint *samplers);
GLAPI  GLuint  APIENTRY glGenSymbolsEXT(GLenum datatype,GLenum storagetype,GLenum range,GLuint components);
GLAPI  void  APIENTRY glGenTextures(GLsizei n,GLuint *textures);
GLAPI  void  APIENTRY glGenTexturesEXT(GLsizei n,GLuint *textures);
GLAPI  void  APIENTRY glGenTransformFeedbacks(GLsizei n,GLuint *ids);
GLAPI  void  APIENTRY glGenTransformFeedbacksNV(GLsizei n,GLuint *ids);
GLAPI  void  APIENTRY glGenVertexArrays(GLsizei n,GLuint *arrays);
GLAPI  void  APIENTRY glGenVertexArraysAPPLE(GLsizei n,GLuint *arrays);
GLAPI  void  APIENTRY glGenVertexArraysOES(GLsizei n,GLuint *arrays);
GLAPI  GLuint  APIENTRY glGenVertexShadersEXT(GLuint range);
GLAPI  void  APIENTRY glGenerateMipmap(GLenum target);
GLAPI  void  APIENTRY glGenerateMipmapEXT(GLenum target);
GLAPI  void  APIENTRY glGenerateMipmapOES(GLenum target);
GLAPI  void  APIENTRY glGenerateMultiTexMipmapEXT(GLenum texunit,GLenum target);
GLAPI  void  APIENTRY glGenerateTextureMipmapEXT(GLuint texture,GLenum target);
GLAPI  void  APIENTRY glGetActiveAtomicCounterBufferiv(GLuint program,GLuint bufferIndex,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetActiveAttrib(GLuint program,GLuint index,GLsizei bufSize,GLsizei *length,GLint *size,GLenum *type,GLchar *name);
GLAPI  void  APIENTRY glGetActiveAttribARB(GLhandleARB programObj,GLuint index,GLsizei maxLength,GLsizei *length,GLint *size,GLenum *type,GLcharARB *name);
GLAPI  void  APIENTRY glGetActiveSubroutineName(GLuint program,GLenum shadertype,GLuint index,GLsizei bufsize,GLsizei *length,GLchar *name);
GLAPI  void  APIENTRY glGetActiveSubroutineUniformName(GLuint program,GLenum shadertype,GLuint index,GLsizei bufsize,GLsizei *length,GLchar *name);
GLAPI  void  APIENTRY glGetActiveSubroutineUniformiv(GLuint program,GLenum shadertype,GLuint index,GLenum pname,GLint *values);
GLAPI  void  APIENTRY glGetActiveUniform(GLuint program,GLuint index,GLsizei bufSize,GLsizei *length,GLint *size,GLenum *type,GLchar *name);
GLAPI  void  APIENTRY glGetActiveUniformARB(GLhandleARB programObj,GLuint index,GLsizei maxLength,GLsizei *length,GLint *size,GLenum *type,GLcharARB *name);
GLAPI  void  APIENTRY glGetActiveUniformBlockName(GLuint program,GLuint uniformBlockIndex,GLsizei bufSize,GLsizei *length,GLchar *uniformBlockName);
GLAPI  void  APIENTRY glGetActiveUniformBlockiv(GLuint program,GLuint uniformBlockIndex,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetActiveUniformName(GLuint program,GLuint uniformIndex,GLsizei bufSize,GLsizei *length,GLchar *uniformName);
GLAPI  void  APIENTRY glGetActiveUniformsiv(GLuint program,GLsizei uniformCount,const GLuint *uniformIndices,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetActiveVaryingNV(GLuint program,GLuint index,GLsizei bufSize,GLsizei *length,GLsizei *size,GLenum *type,GLchar *name);
GLAPI  void  APIENTRY glGetArrayObjectfvATI(GLenum array,GLenum pname,GLfloat *params);
GLAPI  void  APIENTRY glGetArrayObjectivATI(GLenum array,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetAttachedObjectsARB(GLhandleARB containerObj,GLsizei maxCount,GLsizei *count,GLhandleARB *obj);
GLAPI  void  APIENTRY glGetAttachedShaders(GLuint program,GLsizei maxCount,GLsizei *count,GLuint *shaders);
GLAPI  GLint  APIENTRY glGetAttribLocation(GLuint program,const GLchar *name);
GLAPI  GLint  APIENTRY glGetAttribLocationARB(GLhandleARB programObj,const GLcharARB *name);
GLAPI  void  APIENTRY glGetBooleanIndexedvEXT(GLenum target,GLuint index,GLboolean *data);
GLAPI  void  APIENTRY glGetBooleani_v(GLenum target,GLuint index,GLboolean *data);
GLAPI  void  APIENTRY glGetBooleanv(GLenum pname,GLboolean *data);
GLAPI  void  APIENTRY glGetBufferParameteri64v(GLenum target,GLenum pname,GLint64 *params);
GLAPI  void  APIENTRY glGetBufferParameteriv(GLenum target,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetBufferParameterivARB(GLenum target,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetBufferParameterui64vNV(GLenum target,GLenum pname,GLuint64EXT *params);
GLAPI  void  APIENTRY glGetBufferPointerv(GLenum target,GLenum pname,void **params);
GLAPI  void  APIENTRY glGetBufferPointervARB(GLenum target,GLenum pname,void **params);
GLAPI  void  APIENTRY glGetBufferPointervOES(GLenum target,GLenum pname,void **params);
GLAPI  void  APIENTRY glGetBufferSubData(GLenum target,GLintptr offset,GLsizeiptr size,void *data);
GLAPI  void  APIENTRY glGetBufferSubDataARB(GLenum target,GLintptrARB offset,GLsizeiptrARB size,void *data);
GLAPI  void  APIENTRY glGetClipPlane(GLenum plane,GLdouble *equation);
GLAPI  void  APIENTRY glGetClipPlanef(GLenum plane,GLfloat *equation);
GLAPI  void  APIENTRY glGetClipPlanefOES(GLenum plane,GLfloat *equation);
GLAPI  void  APIENTRY glGetClipPlanex(GLenum plane,GLfixed *equation);
GLAPI  void  APIENTRY glGetClipPlanexOES(GLenum plane,GLfixed *equation);
GLAPI  void  APIENTRY glGetColorTable(GLenum target,GLenum format,GLenum type,void *table);
GLAPI  void  APIENTRY glGetColorTableEXT(GLenum target,GLenum format,GLenum type,void *data);
GLAPI  void  APIENTRY glGetColorTableParameterfv(GLenum target,GLenum pname,GLfloat *params);
GLAPI  void  APIENTRY glGetColorTableParameterfvEXT(GLenum target,GLenum pname,GLfloat *params);
GLAPI  void  APIENTRY glGetColorTableParameterfvSGI(GLenum target,GLenum pname,GLfloat *params);
GLAPI  void  APIENTRY glGetColorTableParameteriv(GLenum target,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetColorTableParameterivEXT(GLenum target,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetColorTableParameterivSGI(GLenum target,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetColorTableSGI(GLenum target,GLenum format,GLenum type,void *table);
GLAPI  void  APIENTRY glGetCombinerInputParameterfvNV(GLenum stage,GLenum portion,GLenum variable,GLenum pname,GLfloat *params);
GLAPI  void  APIENTRY glGetCombinerInputParameterivNV(GLenum stage,GLenum portion,GLenum variable,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetCombinerOutputParameterfvNV(GLenum stage,GLenum portion,GLenum pname,GLfloat *params);
GLAPI  void  APIENTRY glGetCombinerOutputParameterivNV(GLenum stage,GLenum portion,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetCombinerStageParameterfvNV(GLenum stage,GLenum pname,GLfloat *params);
GLAPI  void  APIENTRY glGetCompressedMultiTexImageEXT(GLenum texunit,GLenum target,GLint lod,void *img);
GLAPI  void  APIENTRY glGetCompressedTexImage(GLenum target,GLint level,void *img);
GLAPI  void  APIENTRY glGetCompressedTexImageARB(GLenum target,GLint level,void *img);
GLAPI  void  APIENTRY glGetCompressedTextureImageEXT(GLuint texture,GLenum target,GLint lod,void *img);
GLAPI  void  APIENTRY glGetConvolutionFilter(GLenum target,GLenum format,GLenum type,void *image);
GLAPI  void  APIENTRY glGetConvolutionFilterEXT(GLenum target,GLenum format,GLenum type,void *image);
GLAPI  void  APIENTRY glGetConvolutionParameterfv(GLenum target,GLenum pname,GLfloat *params);
GLAPI  void  APIENTRY glGetConvolutionParameterfvEXT(GLenum target,GLenum pname,GLfloat *params);
GLAPI  void  APIENTRY glGetConvolutionParameteriv(GLenum target,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetConvolutionParameterivEXT(GLenum target,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetConvolutionParameterxvOES(GLenum target,GLenum pname,GLfixed *params);
GLAPI  GLuint  APIENTRY glGetDebugMessageLog(GLuint count,GLsizei bufSize,GLenum *sources,GLenum *types,GLuint *ids,GLenum *severities,GLsizei *lengths,GLchar *messageLog);
GLAPI  GLuint  APIENTRY glGetDebugMessageLogAMD(GLuint count,GLsizei bufsize,GLenum *categories,GLuint *severities,GLuint *ids,GLsizei *lengths,GLchar *message);
GLAPI  GLuint  APIENTRY glGetDebugMessageLogARB(GLuint count,GLsizei bufSize,GLenum *sources,GLenum *types,GLuint *ids,GLenum *severities,GLsizei *lengths,GLchar *messageLog);
GLAPI  GLuint  APIENTRY glGetDebugMessageLogKHR(GLuint count,GLsizei bufSize,GLenum *sources,GLenum *types,GLuint *ids,GLenum *severities,GLsizei *lengths,GLchar *messageLog);
GLAPI  void  APIENTRY glGetDetailTexFuncSGIS(GLenum target,GLfloat *points);
GLAPI  void  APIENTRY glGetDoubleIndexedvEXT(GLenum target,GLuint index,GLdouble *data);
GLAPI  void  APIENTRY glGetDoublei_v(GLenum target,GLuint index,GLdouble *data);
GLAPI  void  APIENTRY glGetDoublei_vEXT(GLenum pname,GLuint index,GLdouble *params);
GLAPI  void  APIENTRY glGetDoublev(GLenum pname,GLdouble *data);
GLAPI  void  APIENTRY glGetDriverControlStringQCOM(GLuint driverControl,GLsizei bufSize,GLsizei *length,GLchar *driverControlString);
GLAPI  void  APIENTRY glGetDriverControlsQCOM(GLint *num,GLsizei size,GLuint *driverControls);
GLAPI  void  APIENTRY glGetFenceivNV(GLuint fence,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetFinalCombinerInputParameterfvNV(GLenum variable,GLenum pname,GLfloat *params);
GLAPI  void  APIENTRY glGetFinalCombinerInputParameterivNV(GLenum variable,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetFirstPerfQueryIdINTEL(GLuint *queryId);
GLAPI  void  APIENTRY glGetFixedv(GLenum pname,GLfixed *params);
GLAPI  void  APIENTRY glGetFixedvOES(GLenum pname,GLfixed *params);
GLAPI  void  APIENTRY glGetFloatIndexedvEXT(GLenum target,GLuint index,GLfloat *data);
GLAPI  void  APIENTRY glGetFloati_v(GLenum target,GLuint index,GLfloat *data);
GLAPI  void  APIENTRY glGetFloati_vEXT(GLenum pname,GLuint index,GLfloat *params);
GLAPI  void  APIENTRY glGetFloatv(GLenum pname,GLfloat *data);
GLAPI  void  APIENTRY glGetFogFuncSGIS(GLfloat *points);
GLAPI  GLint  APIENTRY glGetFragDataIndex(GLuint program,const GLchar *name);
GLAPI  GLint  APIENTRY glGetFragDataLocation(GLuint program,const GLchar *name);
GLAPI  GLint  APIENTRY glGetFragDataLocationEXT(GLuint program,const GLchar *name);
GLAPI  void  APIENTRY glGetFragmentLightfvSGIX(GLenum light,GLenum pname,GLfloat *params);
GLAPI  void  APIENTRY glGetFragmentLightivSGIX(GLenum light,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetFragmentMaterialfvSGIX(GLenum face,GLenum pname,GLfloat *params);
GLAPI  void  APIENTRY glGetFragmentMaterialivSGIX(GLenum face,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetFramebufferAttachmentParameteriv(GLenum target,GLenum attachment,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetFramebufferAttachmentParameterivEXT(GLenum target,GLenum attachment,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetFramebufferAttachmentParameterivOES(GLenum target,GLenum attachment,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetFramebufferParameteriv(GLenum target,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetFramebufferParameterivEXT(GLuint framebuffer,GLenum pname,GLint *params);
GLAPI  GLhandleARB  APIENTRY glGetHandleARB(GLenum pname);
GLAPI  void  APIENTRY glGetHistogram(GLenum target,GLboolean reset,GLenum format,GLenum type,void *values);
GLAPI  void  APIENTRY glGetHistogramEXT(GLenum target,GLboolean reset,GLenum format,GLenum type,void *values);
GLAPI  void  APIENTRY glGetHistogramParameterfv(GLenum target,GLenum pname,GLfloat *params);
GLAPI  void  APIENTRY glGetHistogramParameterfvEXT(GLenum target,GLenum pname,GLfloat *params);
GLAPI  void  APIENTRY glGetHistogramParameteriv(GLenum target,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetHistogramParameterivEXT(GLenum target,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetHistogramParameterxvOES(GLenum target,GLenum pname,GLfixed *params);
GLAPI  GLuint64  APIENTRY glGetImageHandleARB(GLuint texture,GLint level,GLboolean layered,GLint layer,GLenum format);
GLAPI  GLuint64  APIENTRY glGetImageHandleNV(GLuint texture,GLint level,GLboolean layered,GLint layer,GLenum format);
GLAPI  void  APIENTRY glGetImageTransformParameterfvHP(GLenum target,GLenum pname,GLfloat *params);
GLAPI  void  APIENTRY glGetImageTransformParameterivHP(GLenum target,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetInfoLogARB(GLhandleARB obj,GLsizei maxLength,GLsizei *length,GLcharARB *infoLog);
GLAPI  void  APIENTRY glGetInteger64i_v(GLenum target,GLuint index,GLint64 *data);
GLAPI  void  APIENTRY glGetInteger64v(GLenum pname,GLint64 *data);
GLAPI  void  APIENTRY glGetInteger64vAPPLE(GLenum pname,GLint64 *params);
GLAPI  void  APIENTRY glGetIntegerIndexedvEXT(GLenum target,GLuint index,GLint *data);
GLAPI  void  APIENTRY glGetIntegeri_v(GLenum target,GLuint index,GLint *data);
GLAPI  void  APIENTRY glGetIntegeri_vEXT(GLenum target,GLuint index,GLint *data);
GLAPI  void  APIENTRY glGetIntegerui64i_vNV(GLenum value,GLuint index,GLuint64EXT *result);
GLAPI  void  APIENTRY glGetIntegerui64vNV(GLenum value,GLuint64EXT *result);
GLAPI  void  APIENTRY glGetIntegerv(GLenum pname,GLint *data);
GLAPI  void  APIENTRY glGetInternalformati64v(GLenum target,GLenum internalformat,GLenum pname,GLsizei bufSize,GLint64 *params);
GLAPI  void  APIENTRY glGetInternalformativ(GLenum target,GLenum internalformat,GLenum pname,GLsizei bufSize,GLint *params);
GLAPI  void  APIENTRY glGetInvariantBooleanvEXT(GLuint id,GLenum value,GLboolean *data);
GLAPI  void  APIENTRY glGetInvariantFloatvEXT(GLuint id,GLenum value,GLfloat *data);
GLAPI  void  APIENTRY glGetInvariantIntegervEXT(GLuint id,GLenum value,GLint *data);
GLAPI  void  APIENTRY glGetLightfv(GLenum light,GLenum pname,GLfloat *params);
GLAPI  void  APIENTRY glGetLightiv(GLenum light,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetLightxOES(GLenum light,GLenum pname,GLfixed *params);
GLAPI  void  APIENTRY glGetLightxv(GLenum light,GLenum pname,GLfixed *params);
GLAPI  void  APIENTRY glGetLightxvOES(GLenum light,GLenum pname,GLfixed *params);
GLAPI  void  APIENTRY glGetListParameterfvSGIX(GLuint list,GLenum pname,GLfloat *params);
GLAPI  void  APIENTRY glGetListParameterivSGIX(GLuint list,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetLocalConstantBooleanvEXT(GLuint id,GLenum value,GLboolean *data);
GLAPI  void  APIENTRY glGetLocalConstantFloatvEXT(GLuint id,GLenum value,GLfloat *data);
GLAPI  void  APIENTRY glGetLocalConstantIntegervEXT(GLuint id,GLenum value,GLint *data);
GLAPI  void  APIENTRY glGetMapAttribParameterfvNV(GLenum target,GLuint index,GLenum pname,GLfloat *params);
GLAPI  void  APIENTRY glGetMapAttribParameterivNV(GLenum target,GLuint index,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetMapControlPointsNV(GLenum target,GLuint index,GLenum type,GLsizei ustride,GLsizei vstride,GLboolean packed,void *points);
GLAPI  void  APIENTRY glGetMapParameterfvNV(GLenum target,GLenum pname,GLfloat *params);
GLAPI  void  APIENTRY glGetMapParameterivNV(GLenum target,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetMapdv(GLenum target,GLenum query,GLdouble *v);
GLAPI  void  APIENTRY glGetMapfv(GLenum target,GLenum query,GLfloat *v);
GLAPI  void  APIENTRY glGetMapiv(GLenum target,GLenum query,GLint *v);
GLAPI  void  APIENTRY glGetMapxvOES(GLenum target,GLenum query,GLfixed *v);
GLAPI  void  APIENTRY glGetMaterialfv(GLenum face,GLenum pname,GLfloat *params);
GLAPI  void  APIENTRY glGetMaterialiv(GLenum face,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetMaterialxOES(GLenum face,GLenum pname,GLfixed param);
GLAPI  void  APIENTRY glGetMaterialxv(GLenum face,GLenum pname,GLfixed *params);
GLAPI  void  APIENTRY glGetMaterialxvOES(GLenum face,GLenum pname,GLfixed *params);
GLAPI  void  APIENTRY glGetMinmax(GLenum target,GLboolean reset,GLenum format,GLenum type,void *values);
GLAPI  void  APIENTRY glGetMinmaxEXT(GLenum target,GLboolean reset,GLenum format,GLenum type,void *values);
GLAPI  void  APIENTRY glGetMinmaxParameterfv(GLenum target,GLenum pname,GLfloat *params);
GLAPI  void  APIENTRY glGetMinmaxParameterfvEXT(GLenum target,GLenum pname,GLfloat *params);
GLAPI  void  APIENTRY glGetMinmaxParameteriv(GLenum target,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetMinmaxParameterivEXT(GLenum target,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetMultiTexEnvfvEXT(GLenum texunit,GLenum target,GLenum pname,GLfloat *params);
GLAPI  void  APIENTRY glGetMultiTexEnvivEXT(GLenum texunit,GLenum target,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetMultiTexGendvEXT(GLenum texunit,GLenum coord,GLenum pname,GLdouble *params);
GLAPI  void  APIENTRY glGetMultiTexGenfvEXT(GLenum texunit,GLenum coord,GLenum pname,GLfloat *params);
GLAPI  void  APIENTRY glGetMultiTexGenivEXT(GLenum texunit,GLenum coord,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetMultiTexImageEXT(GLenum texunit,GLenum target,GLint level,GLenum format,GLenum type,void *pixels);
GLAPI  void  APIENTRY glGetMultiTexLevelParameterfvEXT(GLenum texunit,GLenum target,GLint level,GLenum pname,GLfloat *params);
GLAPI  void  APIENTRY glGetMultiTexLevelParameterivEXT(GLenum texunit,GLenum target,GLint level,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetMultiTexParameterIivEXT(GLenum texunit,GLenum target,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetMultiTexParameterIuivEXT(GLenum texunit,GLenum target,GLenum pname,GLuint *params);
GLAPI  void  APIENTRY glGetMultiTexParameterfvEXT(GLenum texunit,GLenum target,GLenum pname,GLfloat *params);
GLAPI  void  APIENTRY glGetMultiTexParameterivEXT(GLenum texunit,GLenum target,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetMultisamplefv(GLenum pname,GLuint index,GLfloat *val);
GLAPI  void  APIENTRY glGetMultisamplefvNV(GLenum pname,GLuint index,GLfloat *val);
GLAPI  void  APIENTRY glGetNamedBufferParameterivEXT(GLuint buffer,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetNamedBufferParameterui64vNV(GLuint buffer,GLenum pname,GLuint64EXT *params);
GLAPI  void  APIENTRY glGetNamedBufferPointervEXT(GLuint buffer,GLenum pname,void **params);
GLAPI  void  APIENTRY glGetNamedBufferSubDataEXT(GLuint buffer,GLintptr offset,GLsizeiptr size,void *data);
GLAPI  void  APIENTRY glGetNamedFramebufferAttachmentParameterivEXT(GLuint framebuffer,GLenum attachment,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetNamedFramebufferParameterivEXT(GLuint framebuffer,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetNamedProgramLocalParameterIivEXT(GLuint program,GLenum target,GLuint index,GLint *params);
GLAPI  void  APIENTRY glGetNamedProgramLocalParameterIuivEXT(GLuint program,GLenum target,GLuint index,GLuint *params);
GLAPI  void  APIENTRY glGetNamedProgramLocalParameterdvEXT(GLuint program,GLenum target,GLuint index,GLdouble *params);
GLAPI  void  APIENTRY glGetNamedProgramLocalParameterfvEXT(GLuint program,GLenum target,GLuint index,GLfloat *params);
GLAPI  void  APIENTRY glGetNamedProgramStringEXT(GLuint program,GLenum target,GLenum pname,void *string);
GLAPI  void  APIENTRY glGetNamedProgramivEXT(GLuint program,GLenum target,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetNamedRenderbufferParameterivEXT(GLuint renderbuffer,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetNamedStringARB(GLint namelen,const GLchar *name,GLsizei bufSize,GLint *stringlen,GLchar *string);
GLAPI  void  APIENTRY glGetNamedStringivARB(GLint namelen,const GLchar *name,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetNextPerfQueryIdINTEL(GLuint queryId,GLuint *nextQueryId);
GLAPI  void  APIENTRY glGetObjectBufferfvATI(GLuint buffer,GLenum pname,GLfloat *params);
GLAPI  void  APIENTRY glGetObjectBufferivATI(GLuint buffer,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetObjectLabel(GLenum identifier,GLuint name,GLsizei bufSize,GLsizei *length,GLchar *label);
GLAPI  void  APIENTRY glGetObjectLabelEXT(GLenum type,GLuint object,GLsizei bufSize,GLsizei *length,GLchar *label);
GLAPI  void  APIENTRY glGetObjectLabelKHR(GLenum identifier,GLuint name,GLsizei bufSize,GLsizei *length,GLchar *label);
GLAPI  void  APIENTRY glGetObjectParameterfvARB(GLhandleARB obj,GLenum pname,GLfloat *params);
GLAPI  void  APIENTRY glGetObjectParameterivAPPLE(GLenum objectType,GLuint name,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetObjectParameterivARB(GLhandleARB obj,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetObjectPtrLabel(const void *ptr,GLsizei bufSize,GLsizei *length,GLchar *label);
GLAPI  void  APIENTRY glGetObjectPtrLabelKHR(const void *ptr,GLsizei bufSize,GLsizei *length,GLchar *label);
GLAPI  void  APIENTRY glGetOcclusionQueryivNV(GLuint id,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetOcclusionQueryuivNV(GLuint id,GLenum pname,GLuint *params);
GLAPI  void  APIENTRY glGetPathColorGenfvNV(GLenum color,GLenum pname,GLfloat *value);
GLAPI  void  APIENTRY glGetPathColorGenivNV(GLenum color,GLenum pname,GLint *value);
GLAPI  void  APIENTRY glGetPathCommandsNV(GLuint path,GLubyte *commands);
GLAPI  void  APIENTRY glGetPathCoordsNV(GLuint path,GLfloat *coords);
GLAPI  void  APIENTRY glGetPathDashArrayNV(GLuint path,GLfloat *dashArray);
GLAPI  GLfloat  APIENTRY glGetPathLengthNV(GLuint path,GLsizei startSegment,GLsizei numSegments);
GLAPI  void  APIENTRY glGetPathMetricRangeNV(GLbitfield metricQueryMask,GLuint firstPathName,GLsizei numPaths,GLsizei stride,GLfloat *metrics);
GLAPI  void  APIENTRY glGetPathMetricsNV(GLbitfield metricQueryMask,GLsizei numPaths,GLenum pathNameType,const void *paths,GLuint pathBase,GLsizei stride,GLfloat *metrics);
GLAPI  void  APIENTRY glGetPathParameterfvNV(GLuint path,GLenum pname,GLfloat *value);
GLAPI  void  APIENTRY glGetPathParameterivNV(GLuint path,GLenum pname,GLint *value);
GLAPI  void  APIENTRY glGetPathSpacingNV(GLenum pathListMode,GLsizei numPaths,GLenum pathNameType,const void *paths,GLuint pathBase,GLfloat advanceScale,GLfloat kerningScale,GLenum transformType,GLfloat *returnedSpacing);
GLAPI  void  APIENTRY glGetPathTexGenfvNV(GLenum texCoordSet,GLenum pname,GLfloat *value);
GLAPI  void  APIENTRY glGetPathTexGenivNV(GLenum texCoordSet,GLenum pname,GLint *value);
GLAPI  void  APIENTRY glGetPerfCounterInfoINTEL(GLuint queryId,GLuint counterId,GLuint counterNameLength,GLchar *counterName,GLuint counterDescLength,GLchar *counterDesc,GLuint *counterOffset,GLuint *counterDataSize,GLuint *counterTypeEnum,GLuint *counterDataTypeEnum,GLuint64 *rawCounterMaxValue);
GLAPI  void  APIENTRY glGetPerfMonitorCounterDataAMD(GLuint monitor,GLenum pname,GLsizei dataSize,GLuint *data,GLint *bytesWritten);
GLAPI  void  APIENTRY glGetPerfMonitorCounterInfoAMD(GLuint group,GLuint counter,GLenum pname,void *data);
GLAPI  void  APIENTRY glGetPerfMonitorCounterStringAMD(GLuint group,GLuint counter,GLsizei bufSize,GLsizei *length,GLchar *counterString);
GLAPI  void  APIENTRY glGetPerfMonitorCountersAMD(GLuint group,GLint *numCounters,GLint *maxActiveCounters,GLsizei counterSize,GLuint *counters);
GLAPI  void  APIENTRY glGetPerfMonitorGroupStringAMD(GLuint group,GLsizei bufSize,GLsizei *length,GLchar *groupString);
GLAPI  void  APIENTRY glGetPerfMonitorGroupsAMD(GLint *numGroups,GLsizei groupsSize,GLuint *groups);
GLAPI  void  APIENTRY glGetPerfQueryDataINTEL(GLuint queryHandle,GLuint flags,GLsizei dataSize,GLvoid *data,GLuint *bytesWritten);
GLAPI  void  APIENTRY glGetPerfQueryIdByNameINTEL(GLchar *queryName,GLuint *queryId);
GLAPI  void  APIENTRY glGetPerfQueryInfoINTEL(GLuint queryId,GLuint queryNameLength,GLchar *queryName,GLuint *dataSize,GLuint *noCounters,GLuint *noInstances,GLuint *capsMask);
GLAPI  void  APIENTRY glGetPixelMapfv(GLenum map,GLfloat *values);
GLAPI  void  APIENTRY glGetPixelMapuiv(GLenum map,GLuint *values);
GLAPI  void  APIENTRY glGetPixelMapusv(GLenum map,GLushort *values);
GLAPI  void  APIENTRY glGetPixelMapxv(GLenum map,GLint size,GLfixed *values);
GLAPI  void  APIENTRY glGetPixelTexGenParameterfvSGIS(GLenum pname,GLfloat *params);
GLAPI  void  APIENTRY glGetPixelTexGenParameterivSGIS(GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetPixelTransformParameterfvEXT(GLenum target,GLenum pname,GLfloat *params);
GLAPI  void  APIENTRY glGetPixelTransformParameterivEXT(GLenum target,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetPointerIndexedvEXT(GLenum target,GLuint index,void **data);
GLAPI  void  APIENTRY glGetPointeri_vEXT(GLenum pname,GLuint index,void **params);
GLAPI  void  APIENTRY glGetPointerv(GLenum pname,void **params);
GLAPI  void  APIENTRY glGetPointervEXT(GLenum pname,void **params);
GLAPI  void  APIENTRY glGetPointervKHR(GLenum pname,void **params);
GLAPI  void  APIENTRY glGetPolygonStipple(GLubyte *mask);
GLAPI  void  APIENTRY glGetProgramBinary(GLuint program,GLsizei bufSize,GLsizei *length,GLenum *binaryFormat,void *binary);
GLAPI  void  APIENTRY glGetProgramBinaryOES(GLuint program,GLsizei bufSize,GLsizei *length,GLenum *binaryFormat,void *binary);
GLAPI  void  APIENTRY glGetProgramEnvParameterIivNV(GLenum target,GLuint index,GLint *params);
GLAPI  void  APIENTRY glGetProgramEnvParameterIuivNV(GLenum target,GLuint index,GLuint *params);
GLAPI  void  APIENTRY glGetProgramEnvParameterdvARB(GLenum target,GLuint index,GLdouble *params);
GLAPI  void  APIENTRY glGetProgramEnvParameterfvARB(GLenum target,GLuint index,GLfloat *params);
GLAPI  void  APIENTRY glGetProgramInfoLog(GLuint program,GLsizei bufSize,GLsizei *length,GLchar *infoLog);
GLAPI  void  APIENTRY glGetProgramInterfaceiv(GLuint program,GLenum programInterface,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetProgramLocalParameterIivNV(GLenum target,GLuint index,GLint *params);
GLAPI  void  APIENTRY glGetProgramLocalParameterIuivNV(GLenum target,GLuint index,GLuint *params);
GLAPI  void  APIENTRY glGetProgramLocalParameterdvARB(GLenum target,GLuint index,GLdouble *params);
GLAPI  void  APIENTRY glGetProgramLocalParameterfvARB(GLenum target,GLuint index,GLfloat *params);
GLAPI  void  APIENTRY glGetProgramNamedParameterdvNV(GLuint id,GLsizei len,const GLubyte *name,GLdouble *params);
GLAPI  void  APIENTRY glGetProgramNamedParameterfvNV(GLuint id,GLsizei len,const GLubyte *name,GLfloat *params);
GLAPI  void  APIENTRY glGetProgramParameterdvNV(GLenum target,GLuint index,GLenum pname,GLdouble *params);
GLAPI  void  APIENTRY glGetProgramParameterfvNV(GLenum target,GLuint index,GLenum pname,GLfloat *params);
GLAPI  void  APIENTRY glGetProgramPipelineInfoLog(GLuint pipeline,GLsizei bufSize,GLsizei *length,GLchar *infoLog);
GLAPI  void  APIENTRY glGetProgramPipelineInfoLogEXT(GLuint pipeline,GLsizei bufSize,GLsizei *length,GLchar *infoLog);
GLAPI  void  APIENTRY glGetProgramPipelineiv(GLuint pipeline,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetProgramPipelineivEXT(GLuint pipeline,GLenum pname,GLint *params);
GLAPI  GLuint  APIENTRY glGetProgramResourceIndex(GLuint program,GLenum programInterface,const GLchar *name);
GLAPI  GLint  APIENTRY glGetProgramResourceLocation(GLuint program,GLenum programInterface,const GLchar *name);
GLAPI  GLint  APIENTRY glGetProgramResourceLocationIndex(GLuint program,GLenum programInterface,const GLchar *name);
GLAPI  void  APIENTRY glGetProgramResourceName(GLuint program,GLenum programInterface,GLuint index,GLsizei bufSize,GLsizei *length,GLchar *name);
GLAPI  void  APIENTRY glGetProgramResourceiv(GLuint program,GLenum programInterface,GLuint index,GLsizei propCount,const GLenum *props,GLsizei bufSize,GLsizei *length,GLint *params);
GLAPI  void  APIENTRY glGetProgramStageiv(GLuint program,GLenum shadertype,GLenum pname,GLint *values);
GLAPI  void  APIENTRY glGetProgramStringARB(GLenum target,GLenum pname,void *string);
GLAPI  void  APIENTRY glGetProgramStringNV(GLuint id,GLenum pname,GLubyte *program);
GLAPI  void  APIENTRY glGetProgramSubroutineParameteruivNV(GLenum target,GLuint index,GLuint *param);
GLAPI  void  APIENTRY glGetProgramiv(GLuint program,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetProgramivARB(GLenum target,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetProgramivNV(GLuint id,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetQueryIndexediv(GLenum target,GLuint index,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetQueryObjecti64v(GLuint id,GLenum pname,GLint64 *params);
GLAPI  void  APIENTRY glGetQueryObjecti64vEXT(GLuint id,GLenum pname,GLint64 *params);
GLAPI  void  APIENTRY glGetQueryObjectiv(GLuint id,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetQueryObjectivARB(GLuint id,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetQueryObjectivEXT(GLuint id,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetQueryObjectui64v(GLuint id,GLenum pname,GLuint64 *params);
GLAPI  void  APIENTRY glGetQueryObjectui64vEXT(GLuint id,GLenum pname,GLuint64 *params);
GLAPI  void  APIENTRY glGetQueryObjectuiv(GLuint id,GLenum pname,GLuint *params);
GLAPI  void  APIENTRY glGetQueryObjectuivARB(GLuint id,GLenum pname,GLuint *params);
GLAPI  void  APIENTRY glGetQueryObjectuivEXT(GLuint id,GLenum pname,GLuint *params);
GLAPI  void  APIENTRY glGetQueryiv(GLenum target,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetQueryivARB(GLenum target,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetQueryivEXT(GLenum target,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetRenderbufferParameteriv(GLenum target,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetRenderbufferParameterivEXT(GLenum target,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetRenderbufferParameterivOES(GLenum target,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetSamplerParameterIiv(GLuint sampler,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetSamplerParameterIivEXT(GLuint sampler,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetSamplerParameterIuiv(GLuint sampler,GLenum pname,GLuint *params);
GLAPI  void  APIENTRY glGetSamplerParameterIuivEXT(GLuint sampler,GLenum pname,GLuint *params);
GLAPI  void  APIENTRY glGetSamplerParameterfv(GLuint sampler,GLenum pname,GLfloat *params);
GLAPI  void  APIENTRY glGetSamplerParameteriv(GLuint sampler,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetSeparableFilter(GLenum target,GLenum format,GLenum type,void *row,void *column,void *span);
GLAPI  void  APIENTRY glGetSeparableFilterEXT(GLenum target,GLenum format,GLenum type,void *row,void *column,void *span);
GLAPI  void  APIENTRY glGetShaderInfoLog(GLuint shader,GLsizei bufSize,GLsizei *length,GLchar *infoLog);
GLAPI  void  APIENTRY glGetShaderPrecisionFormat(GLenum shadertype,GLenum precisiontype,GLint *range,GLint *precision);
GLAPI  void  APIENTRY glGetShaderSource(GLuint shader,GLsizei bufSize,GLsizei *length,GLchar *source);
GLAPI  void  APIENTRY glGetShaderSourceARB(GLhandleARB obj,GLsizei maxLength,GLsizei *length,GLcharARB *source);
GLAPI  void  APIENTRY glGetShaderiv(GLuint shader,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetSharpenTexFuncSGIS(GLenum target,GLfloat *points);
GLAPI  const GLubyte * APIENTRY glGetString(GLenum name);
GLAPI  const GLubyte * APIENTRY glGetStringi(GLenum name,GLuint index);
GLAPI  GLuint  APIENTRY glGetSubroutineIndex(GLuint program,GLenum shadertype,const GLchar *name);
GLAPI  GLint  APIENTRY glGetSubroutineUniformLocation(GLuint program,GLenum shadertype,const GLchar *name);
GLAPI  void  APIENTRY glGetSynciv(GLsync sync,GLenum pname,GLsizei bufSize,GLsizei *length,GLint *values);
GLAPI  void  APIENTRY glGetSyncivAPPLE(GLsync sync,GLenum pname,GLsizei bufSize,GLsizei *length,GLint *values);
GLAPI  void  APIENTRY glGetTexBumpParameterfvATI(GLenum pname,GLfloat *param);
GLAPI  void  APIENTRY glGetTexBumpParameterivATI(GLenum pname,GLint *param);
GLAPI  void  APIENTRY glGetTexEnvfv(GLenum target,GLenum pname,GLfloat *params);
GLAPI  void  APIENTRY glGetTexEnviv(GLenum target,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetTexEnvxv(GLenum target,GLenum pname,GLfixed *params);
GLAPI  void  APIENTRY glGetTexEnvxvOES(GLenum target,GLenum pname,GLfixed *params);
GLAPI  void  APIENTRY glGetTexFilterFuncSGIS(GLenum target,GLenum filter,GLfloat *weights);
GLAPI  void  APIENTRY glGetTexGendv(GLenum coord,GLenum pname,GLdouble *params);
GLAPI  void  APIENTRY glGetTexGenfv(GLenum coord,GLenum pname,GLfloat *params);
GLAPI  void  APIENTRY glGetTexGenfvOES(GLenum coord,GLenum pname,GLfloat *params);
GLAPI  void  APIENTRY glGetTexGeniv(GLenum coord,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetTexGenivOES(GLenum coord,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetTexGenxvOES(GLenum coord,GLenum pname,GLfixed *params);
GLAPI  void  APIENTRY glGetTexImage(GLenum target,GLint level,GLenum format,GLenum type,void *pixels);
GLAPI  void  APIENTRY glGetTexLevelParameterfv(GLenum target,GLint level,GLenum pname,GLfloat *params);
GLAPI  void  APIENTRY glGetTexLevelParameteriv(GLenum target,GLint level,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetTexLevelParameterxvOES(GLenum target,GLint level,GLenum pname,GLfixed *params);
GLAPI  void  APIENTRY glGetTexParameterIiv(GLenum target,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetTexParameterIivEXT(GLenum target,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetTexParameterIuiv(GLenum target,GLenum pname,GLuint *params);
GLAPI  void  APIENTRY glGetTexParameterIuivEXT(GLenum target,GLenum pname,GLuint *params);
GLAPI  void  APIENTRY glGetTexParameterPointervAPPLE(GLenum target,GLenum pname,void **params);
GLAPI  void  APIENTRY glGetTexParameterfv(GLenum target,GLenum pname,GLfloat *params);
GLAPI  void  APIENTRY glGetTexParameteriv(GLenum target,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetTexParameterxv(GLenum target,GLenum pname,GLfixed *params);
GLAPI  void  APIENTRY glGetTexParameterxvOES(GLenum target,GLenum pname,GLfixed *params);
GLAPI  GLuint64  APIENTRY glGetTextureHandleARB(GLuint texture);
GLAPI  GLuint64  APIENTRY glGetTextureHandleNV(GLuint texture);
GLAPI  void  APIENTRY glGetTextureImageEXT(GLuint texture,GLenum target,GLint level,GLenum format,GLenum type,void *pixels);
GLAPI  void  APIENTRY glGetTextureLevelParameterfvEXT(GLuint texture,GLenum target,GLint level,GLenum pname,GLfloat *params);
GLAPI  void  APIENTRY glGetTextureLevelParameterivEXT(GLuint texture,GLenum target,GLint level,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetTextureParameterIivEXT(GLuint texture,GLenum target,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetTextureParameterIuivEXT(GLuint texture,GLenum target,GLenum pname,GLuint *params);
GLAPI  void  APIENTRY glGetTextureParameterfvEXT(GLuint texture,GLenum target,GLenum pname,GLfloat *params);
GLAPI  void  APIENTRY glGetTextureParameterivEXT(GLuint texture,GLenum target,GLenum pname,GLint *params);
GLAPI  GLuint64  APIENTRY glGetTextureSamplerHandleARB(GLuint texture,GLuint sampler);
GLAPI  GLuint64  APIENTRY glGetTextureSamplerHandleNV(GLuint texture,GLuint sampler);
GLAPI  void  APIENTRY glGetTrackMatrixivNV(GLenum target,GLuint address,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetTransformFeedbackVarying(GLuint program,GLuint index,GLsizei bufSize,GLsizei *length,GLsizei *size,GLenum *type,GLchar *name);
GLAPI  void  APIENTRY glGetTransformFeedbackVaryingEXT(GLuint program,GLuint index,GLsizei bufSize,GLsizei *length,GLsizei *size,GLenum *type,GLchar *name);
GLAPI  void  APIENTRY glGetTransformFeedbackVaryingNV(GLuint program,GLuint index,GLint *location);
GLAPI  void  APIENTRY glGetTranslatedShaderSourceANGLE(GLuint shader,GLsizei bufsize,GLsizei *length,GLchar *source);
GLAPI  GLuint  APIENTRY glGetUniformBlockIndex(GLuint program,const GLchar *uniformBlockName);
GLAPI  GLint  APIENTRY glGetUniformBufferSizeEXT(GLuint program,GLint location);
GLAPI  void  APIENTRY glGetUniformIndices(GLuint program,GLsizei uniformCount,const GLchar *const*uniformNames,GLuint *uniformIndices);
GLAPI  GLint  APIENTRY glGetUniformLocation(GLuint program,const GLchar *name);
GLAPI  GLint  APIENTRY glGetUniformLocationARB(GLhandleARB programObj,const GLcharARB *name);
GLAPI  GLintptr  APIENTRY glGetUniformOffsetEXT(GLuint program,GLint location);
GLAPI  void  APIENTRY glGetUniformSubroutineuiv(GLenum shadertype,GLint location,GLuint *params);
GLAPI  void  APIENTRY glGetUniformdv(GLuint program,GLint location,GLdouble *params);
GLAPI  void  APIENTRY glGetUniformfv(GLuint program,GLint location,GLfloat *params);
GLAPI  void  APIENTRY glGetUniformfvARB(GLhandleARB programObj,GLint location,GLfloat *params);
GLAPI  void  APIENTRY glGetUniformi64vNV(GLuint program,GLint location,GLint64EXT *params);
GLAPI  void  APIENTRY glGetUniformiv(GLuint program,GLint location,GLint *params);
GLAPI  void  APIENTRY glGetUniformivARB(GLhandleARB programObj,GLint location,GLint *params);
GLAPI  void  APIENTRY glGetUniformui64vNV(GLuint program,GLint location,GLuint64EXT *params);
GLAPI  void  APIENTRY glGetUniformuiv(GLuint program,GLint location,GLuint *params);
GLAPI  void  APIENTRY glGetUniformuivEXT(GLuint program,GLint location,GLuint *params);
GLAPI  void  APIENTRY glGetVariantArrayObjectfvATI(GLuint id,GLenum pname,GLfloat *params);
GLAPI  void  APIENTRY glGetVariantArrayObjectivATI(GLuint id,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetVariantBooleanvEXT(GLuint id,GLenum value,GLboolean *data);
GLAPI  void  APIENTRY glGetVariantFloatvEXT(GLuint id,GLenum value,GLfloat *data);
GLAPI  void  APIENTRY glGetVariantIntegervEXT(GLuint id,GLenum value,GLint *data);
GLAPI  void  APIENTRY glGetVariantPointervEXT(GLuint id,GLenum value,void **data);
GLAPI  GLint  APIENTRY glGetVaryingLocationNV(GLuint program,const GLchar *name);
GLAPI  void  APIENTRY glGetVertexArrayIntegeri_vEXT(GLuint vaobj,GLuint index,GLenum pname,GLint *param);
GLAPI  void  APIENTRY glGetVertexArrayIntegervEXT(GLuint vaobj,GLenum pname,GLint *param);
GLAPI  void  APIENTRY glGetVertexArrayPointeri_vEXT(GLuint vaobj,GLuint index,GLenum pname,void **param);
GLAPI  void  APIENTRY glGetVertexArrayPointervEXT(GLuint vaobj,GLenum pname,void **param);
GLAPI  void  APIENTRY glGetVertexAttribArrayObjectfvATI(GLuint index,GLenum pname,GLfloat *params);
GLAPI  void  APIENTRY glGetVertexAttribArrayObjectivATI(GLuint index,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetVertexAttribIiv(GLuint index,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetVertexAttribIivEXT(GLuint index,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetVertexAttribIuiv(GLuint index,GLenum pname,GLuint *params);
GLAPI  void  APIENTRY glGetVertexAttribIuivEXT(GLuint index,GLenum pname,GLuint *params);
GLAPI  void  APIENTRY glGetVertexAttribLdv(GLuint index,GLenum pname,GLdouble *params);
GLAPI  void  APIENTRY glGetVertexAttribLdvEXT(GLuint index,GLenum pname,GLdouble *params);
GLAPI  void  APIENTRY glGetVertexAttribLi64vNV(GLuint index,GLenum pname,GLint64EXT *params);
GLAPI  void  APIENTRY glGetVertexAttribLui64vARB(GLuint index,GLenum pname,GLuint64EXT *params);
GLAPI  void  APIENTRY glGetVertexAttribLui64vNV(GLuint index,GLenum pname,GLuint64EXT *params);
GLAPI  void  APIENTRY glGetVertexAttribPointerv(GLuint index,GLenum pname,void **pointer);
GLAPI  void  APIENTRY glGetVertexAttribPointervARB(GLuint index,GLenum pname,void **pointer);
GLAPI  void  APIENTRY glGetVertexAttribPointervNV(GLuint index,GLenum pname,void **pointer);
GLAPI  void  APIENTRY glGetVertexAttribdv(GLuint index,GLenum pname,GLdouble *params);
GLAPI  void  APIENTRY glGetVertexAttribdvARB(GLuint index,GLenum pname,GLdouble *params);
GLAPI  void  APIENTRY glGetVertexAttribdvNV(GLuint index,GLenum pname,GLdouble *params);
GLAPI  void  APIENTRY glGetVertexAttribfv(GLuint index,GLenum pname,GLfloat *params);
GLAPI  void  APIENTRY glGetVertexAttribfvARB(GLuint index,GLenum pname,GLfloat *params);
GLAPI  void  APIENTRY glGetVertexAttribfvNV(GLuint index,GLenum pname,GLfloat *params);
GLAPI  void  APIENTRY glGetVertexAttribiv(GLuint index,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetVertexAttribivARB(GLuint index,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetVertexAttribivNV(GLuint index,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetVideoCaptureStreamdvNV(GLuint video_capture_slot,GLuint stream,GLenum pname,GLdouble *params);
GLAPI  void  APIENTRY glGetVideoCaptureStreamfvNV(GLuint video_capture_slot,GLuint stream,GLenum pname,GLfloat *params);
GLAPI  void  APIENTRY glGetVideoCaptureStreamivNV(GLuint video_capture_slot,GLuint stream,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetVideoCaptureivNV(GLuint video_capture_slot,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetVideoi64vNV(GLuint video_slot,GLenum pname,GLint64EXT *params);
GLAPI  void  APIENTRY glGetVideoivNV(GLuint video_slot,GLenum pname,GLint *params);
GLAPI  void  APIENTRY glGetVideoui64vNV(GLuint video_slot,GLenum pname,GLuint64EXT *params);
GLAPI  void  APIENTRY glGetVideouivNV(GLuint video_slot,GLenum pname,GLuint *params);
GLAPI  void  APIENTRY glGetnColorTableARB(GLenum target,GLenum format,GLenum type,GLsizei bufSize,void *table);
GLAPI  void  APIENTRY glGetnCompressedTexImageARB(GLenum target,GLint lod,GLsizei bufSize,void *img);
GLAPI  void  APIENTRY glGetnConvolutionFilterARB(GLenum target,GLenum format,GLenum type,GLsizei bufSize,void *image);
GLAPI  void  APIENTRY glGetnHistogramARB(GLenum target,GLboolean reset,GLenum format,GLenum type,GLsizei bufSize,void *values);
GLAPI  void  APIENTRY glGetnMapdvARB(GLenum target,GLenum query,GLsizei bufSize,GLdouble *v);
GLAPI  void  APIENTRY glGetnMapfvARB(GLenum target,GLenum query,GLsizei bufSize,GLfloat *v);
GLAPI  void  APIENTRY glGetnMapivARB(GLenum target,GLenum query,GLsizei bufSize,GLint *v);
GLAPI  void  APIENTRY glGetnMinmaxARB(GLenum target,GLboolean reset,GLenum format,GLenum type,GLsizei bufSize,void *values);
GLAPI  void  APIENTRY glGetnPixelMapfvARB(GLenum map,GLsizei bufSize,GLfloat *values);
GLAPI  void  APIENTRY glGetnPixelMapuivARB(GLenum map,GLsizei bufSize,GLuint *values);
GLAPI  void  APIENTRY glGetnPixelMapusvARB(GLenum map,GLsizei bufSize,GLushort *values);
GLAPI  void  APIENTRY glGetnPolygonStippleARB(GLsizei bufSize,GLubyte *pattern);
GLAPI  void  APIENTRY glGetnSeparableFilterARB(GLenum target,GLenum format,GLenum type,GLsizei rowBufSize,void *row,GLsizei columnBufSize,void *column,void *span);
GLAPI  void  APIENTRY glGetnTexImageARB(GLenum target,GLint level,GLenum format,GLenum type,GLsizei bufSize,void *img);
GLAPI  void  APIENTRY glGetnUniformdvARB(GLuint program,GLint location,GLsizei bufSize,GLdouble *params);
GLAPI  void  APIENTRY glGetnUniformfvARB(GLuint program,GLint location,GLsizei bufSize,GLfloat *params);
GLAPI  void  APIENTRY glGetnUniformfvEXT(GLuint program,GLint location,GLsizei bufSize,GLfloat *params);
GLAPI  void  APIENTRY glGetnUniformivARB(GLuint program,GLint location,GLsizei bufSize,GLint *params);
GLAPI  void  APIENTRY glGetnUniformivEXT(GLuint program,GLint location,GLsizei bufSize,GLint *params);
GLAPI  void  APIENTRY glGetnUniformuivARB(GLuint program,GLint location,GLsizei bufSize,GLuint *params);
GLAPI  void  APIENTRY glGlobalAlphaFactorbSUN(GLbyte factor);
GLAPI  void  APIENTRY glGlobalAlphaFactordSUN(GLdouble factor);
GLAPI  void  APIENTRY glGlobalAlphaFactorfSUN(GLfloat factor);
GLAPI  void  APIENTRY glGlobalAlphaFactoriSUN(GLint factor);
GLAPI  void  APIENTRY glGlobalAlphaFactorsSUN(GLshort factor);
GLAPI  void  APIENTRY glGlobalAlphaFactorubSUN(GLubyte factor);
GLAPI  void  APIENTRY glGlobalAlphaFactoruiSUN(GLuint factor);
GLAPI  void  APIENTRY glGlobalAlphaFactorusSUN(GLushort factor);
GLAPI  void  APIENTRY glHint(GLenum target,GLenum mode);
GLAPI  void  APIENTRY glHintPGI(GLenum target,GLint mode);
GLAPI  void  APIENTRY glHistogram(GLenum target,GLsizei width,GLenum internalformat,GLboolean sink);
GLAPI  void  APIENTRY glHistogramEXT(GLenum target,GLsizei width,GLenum internalformat,GLboolean sink);
GLAPI  void  APIENTRY glIglooInterfaceSGIX(GLenum pname,const void *params);
GLAPI  void  APIENTRY glImageTransformParameterfHP(GLenum target,GLenum pname,GLfloat param);
GLAPI  void  APIENTRY glImageTransformParameterfvHP(GLenum target,GLenum pname,const GLfloat *params);
GLAPI  void  APIENTRY glImageTransformParameteriHP(GLenum target,GLenum pname,GLint param);
GLAPI  void  APIENTRY glImageTransformParameterivHP(GLenum target,GLenum pname,const GLint *params);
GLAPI  GLsync  APIENTRY glImportSyncEXT(GLenum external_sync_type,GLintptr external_sync,GLbitfield flags);
GLAPI  void  APIENTRY glIndexFormatNV(GLenum type,GLsizei stride);
GLAPI  void  APIENTRY glIndexFuncEXT(GLenum func,GLclampf ref);
GLAPI  void  APIENTRY glIndexMask(GLuint mask);
GLAPI  void  APIENTRY glIndexMaterialEXT(GLenum face,GLenum mode);
GLAPI  void  APIENTRY glIndexPointer(GLenum type,GLsizei stride,const void *pointer);
GLAPI  void  APIENTRY glIndexPointerEXT(GLenum type,GLsizei stride,GLsizei count,const void *pointer);
GLAPI  void  APIENTRY glIndexPointerListIBM(GLenum type,GLint stride,const void **pointer,GLint ptrstride);
GLAPI  void  APIENTRY glIndexd(GLdouble c);
GLAPI  void  APIENTRY glIndexdv(const GLdouble *c);
GLAPI  void  APIENTRY glIndexf(GLfloat c);
GLAPI  void  APIENTRY glIndexfv(const GLfloat *c);
GLAPI  void  APIENTRY glIndexi(GLint c);
GLAPI  void  APIENTRY glIndexiv(const GLint *c);
GLAPI  void  APIENTRY glIndexs(GLshort c);
GLAPI  void  APIENTRY glIndexsv(const GLshort *c);
GLAPI  void  APIENTRY glIndexub(GLubyte c);
GLAPI  void  APIENTRY glIndexubv(const GLubyte *c);
GLAPI  void  APIENTRY glIndexxOES(GLfixed component);
GLAPI  void  APIENTRY glIndexxvOES(const GLfixed *component);
GLAPI  void  APIENTRY glInsertComponentEXT(GLuint res,GLuint src,GLuint num);
GLAPI  void  APIENTRY glInsertEventMarkerEXT(GLsizei length,const GLchar *marker);
GLAPI  void  APIENTRY glInstrumentsBufferSGIX(GLsizei size,GLint *buffer);
GLAPI  void  APIENTRY glInterleavedArrays(GLenum format,GLsizei stride,const void *pointer);
GLAPI  void  APIENTRY glInterpolatePathsNV(GLuint resultPath,GLuint pathA,GLuint pathB,GLfloat weight);
GLAPI  void  APIENTRY glInvalidateBufferData(GLuint buffer);
GLAPI  void  APIENTRY glInvalidateBufferSubData(GLuint buffer,GLintptr offset,GLsizeiptr length);
GLAPI  void  APIENTRY glInvalidateFramebuffer(GLenum target,GLsizei numAttachments,const GLenum *attachments);
GLAPI  void  APIENTRY glInvalidateSubFramebuffer(GLenum target,GLsizei numAttachments,const GLenum *attachments,GLint x,GLint y,GLsizei width,GLsizei height);
GLAPI  void  APIENTRY glInvalidateTexImage(GLuint texture,GLint level);
GLAPI  void  APIENTRY glInvalidateTexSubImage(GLuint texture,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLsizei width,GLsizei height,GLsizei depth);
GLAPI  GLboolean  APIENTRY glIsAsyncMarkerSGIX(GLuint marker);
GLAPI  GLboolean  APIENTRY glIsBuffer(GLuint buffer);
GLAPI  GLboolean  APIENTRY glIsBufferARB(GLuint buffer);
GLAPI  GLboolean  APIENTRY glIsBufferResidentNV(GLenum target);
GLAPI  GLboolean  APIENTRY glIsEnabled(GLenum cap);
GLAPI  GLboolean  APIENTRY glIsEnabledIndexedEXT(GLenum target,GLuint index);
GLAPI  GLboolean  APIENTRY glIsEnabledi(GLenum target,GLuint index);
GLAPI  GLboolean  APIENTRY glIsEnablediEXT(GLenum target,GLuint index);
GLAPI  GLboolean  APIENTRY glIsFenceAPPLE(GLuint fence);
GLAPI  GLboolean  APIENTRY glIsFenceNV(GLuint fence);
GLAPI  GLboolean  APIENTRY glIsFramebuffer(GLuint framebuffer);
GLAPI  GLboolean  APIENTRY glIsFramebufferEXT(GLuint framebuffer);
GLAPI  GLboolean  APIENTRY glIsFramebufferOES(GLuint framebuffer);
GLAPI  GLboolean  APIENTRY glIsImageHandleResidentARB(GLuint64 handle);
GLAPI  GLboolean  APIENTRY glIsImageHandleResidentNV(GLuint64 handle);
GLAPI  GLboolean  APIENTRY glIsList(GLuint list);
GLAPI  GLboolean  APIENTRY glIsNameAMD(GLenum identifier,GLuint name);
GLAPI  GLboolean  APIENTRY glIsNamedBufferResidentNV(GLuint buffer);
GLAPI  GLboolean  APIENTRY glIsNamedStringARB(GLint namelen,const GLchar *name);
GLAPI  GLboolean  APIENTRY glIsObjectBufferATI(GLuint buffer);
GLAPI  GLboolean  APIENTRY glIsOcclusionQueryNV(GLuint id);
GLAPI  GLboolean  APIENTRY glIsPathNV(GLuint path);
GLAPI  GLboolean  APIENTRY glIsPointInFillPathNV(GLuint path,GLuint mask,GLfloat x,GLfloat y);
GLAPI  GLboolean  APIENTRY glIsPointInStrokePathNV(GLuint path,GLfloat x,GLfloat y);
GLAPI  GLboolean  APIENTRY glIsProgram(GLuint program);
GLAPI  GLboolean  APIENTRY glIsProgramARB(GLuint program);
GLAPI  GLboolean  APIENTRY glIsProgramNV(GLuint id);
GLAPI  GLboolean  APIENTRY glIsProgramPipeline(GLuint pipeline);
GLAPI  GLboolean  APIENTRY glIsProgramPipelineEXT(GLuint pipeline);
GLAPI  GLboolean  APIENTRY glIsQuery(GLuint id);
GLAPI  GLboolean  APIENTRY glIsQueryARB(GLuint id);
GLAPI  GLboolean  APIENTRY glIsQueryEXT(GLuint id);
GLAPI  GLboolean  APIENTRY glIsRenderbuffer(GLuint renderbuffer);
GLAPI  GLboolean  APIENTRY glIsRenderbufferEXT(GLuint renderbuffer);
GLAPI  GLboolean  APIENTRY glIsRenderbufferOES(GLuint renderbuffer);
GLAPI  GLboolean  APIENTRY glIsSampler(GLuint sampler);
GLAPI  GLboolean  APIENTRY glIsShader(GLuint shader);
GLAPI  GLboolean  APIENTRY glIsSync(GLsync sync);
GLAPI  GLboolean  APIENTRY glIsSyncAPPLE(GLsync sync);
GLAPI  GLboolean  APIENTRY glIsTexture(GLuint texture);
GLAPI  GLboolean  APIENTRY glIsTextureEXT(GLuint texture);
GLAPI  GLboolean  APIENTRY glIsTextureHandleResidentARB(GLuint64 handle);
GLAPI  GLboolean  APIENTRY glIsTextureHandleResidentNV(GLuint64 handle);
GLAPI  GLboolean  APIENTRY glIsTransformFeedback(GLuint id);
GLAPI  GLboolean  APIENTRY glIsTransformFeedbackNV(GLuint id);
GLAPI  GLboolean  APIENTRY glIsVariantEnabledEXT(GLuint id,GLenum cap);
GLAPI  GLboolean  APIENTRY glIsVertexArray(GLuint array);
GLAPI  GLboolean  APIENTRY glIsVertexArrayAPPLE(GLuint array);
GLAPI  GLboolean  APIENTRY glIsVertexArrayOES(GLuint array);
GLAPI  GLboolean  APIENTRY glIsVertexAttribEnabledAPPLE(GLuint index,GLenum pname);
GLAPI  void  APIENTRY glLabelObjectEXT(GLenum type,GLuint object,GLsizei length,const GLchar *label);
GLAPI  void  APIENTRY glLightEnviSGIX(GLenum pname,GLint param);
GLAPI  void  APIENTRY glLightModelf(GLenum pname,GLfloat param);
GLAPI  void  APIENTRY glLightModelfv(GLenum pname,const GLfloat *params);
GLAPI  void  APIENTRY glLightModeli(GLenum pname,GLint param);
GLAPI  void  APIENTRY glLightModeliv(GLenum pname,const GLint *params);
GLAPI  void  APIENTRY glLightModelx(GLenum pname,GLfixed param);
GLAPI  void  APIENTRY glLightModelxOES(GLenum pname,GLfixed param);
GLAPI  void  APIENTRY glLightModelxv(GLenum pname,const GLfixed *param);
GLAPI  void  APIENTRY glLightModelxvOES(GLenum pname,const GLfixed *param);
GLAPI  void  APIENTRY glLightf(GLenum light,GLenum pname,GLfloat param);
GLAPI  void  APIENTRY glLightfv(GLenum light,GLenum pname,const GLfloat *params);
GLAPI  void  APIENTRY glLighti(GLenum light,GLenum pname,GLint param);
GLAPI  void  APIENTRY glLightiv(GLenum light,GLenum pname,const GLint *params);
GLAPI  void  APIENTRY glLightx(GLenum light,GLenum pname,GLfixed param);
GLAPI  void  APIENTRY glLightxOES(GLenum light,GLenum pname,GLfixed param);
GLAPI  void  APIENTRY glLightxv(GLenum light,GLenum pname,const GLfixed *params);
GLAPI  void  APIENTRY glLightxvOES(GLenum light,GLenum pname,const GLfixed *params);
GLAPI  void  APIENTRY glLineStipple(GLint factor,GLushort pattern);
GLAPI  void  APIENTRY glLineWidth(GLfloat width);
GLAPI  void  APIENTRY glLineWidthx(GLfixed width);
GLAPI  void  APIENTRY glLineWidthxOES(GLfixed width);
GLAPI  void  APIENTRY glLinkProgram(GLuint program);
GLAPI  void  APIENTRY glLinkProgramARB(GLhandleARB programObj);
GLAPI  void  APIENTRY glListBase(GLuint base);
GLAPI  void  APIENTRY glListParameterfSGIX(GLuint list,GLenum pname,GLfloat param);
GLAPI  void  APIENTRY glListParameterfvSGIX(GLuint list,GLenum pname,const GLfloat *params);
GLAPI  void  APIENTRY glListParameteriSGIX(GLuint list,GLenum pname,GLint param);
GLAPI  void  APIENTRY glListParameterivSGIX(GLuint list,GLenum pname,const GLint *params);
GLAPI  void  APIENTRY glLoadIdentityDeformationMapSGIX(GLbitfield mask);
GLAPI  void  APIENTRY glLoadMatrixd(const GLdouble *m);
GLAPI  void  APIENTRY glLoadMatrixf(const GLfloat *m);
GLAPI  void  APIENTRY glLoadMatrixx(const GLfixed *m);
GLAPI  void  APIENTRY glLoadMatrixxOES(const GLfixed *m);
GLAPI  void  APIENTRY glLoadName(GLuint name);
GLAPI  void  APIENTRY glLoadProgramNV(GLenum target,GLuint id,GLsizei len,const GLubyte *program);
GLAPI  void  APIENTRY glLoadTransposeMatrixd(const GLdouble *m);
GLAPI  void  APIENTRY glLoadTransposeMatrixdARB(const GLdouble *m);
GLAPI  void  APIENTRY glLoadTransposeMatrixf(const GLfloat *m);
GLAPI  void  APIENTRY glLoadTransposeMatrixfARB(const GLfloat *m);
GLAPI  void  APIENTRY glLoadTransposeMatrixxOES(const GLfixed *m);
GLAPI  void  APIENTRY glLockArraysEXT(GLint first,GLsizei count);
GLAPI  void  APIENTRY glLogicOp(GLenum opcode);
GLAPI  void  APIENTRY glMakeBufferNonResidentNV(GLenum target);
GLAPI  void  APIENTRY glMakeBufferResidentNV(GLenum target,GLenum access);
GLAPI  void  APIENTRY glMakeImageHandleNonResidentARB(GLuint64 handle);
GLAPI  void  APIENTRY glMakeImageHandleNonResidentNV(GLuint64 handle);
GLAPI  void  APIENTRY glMakeImageHandleResidentARB(GLuint64 handle,GLenum access);
GLAPI  void  APIENTRY glMakeImageHandleResidentNV(GLuint64 handle,GLenum access);
GLAPI  void  APIENTRY glMakeNamedBufferNonResidentNV(GLuint buffer);
GLAPI  void  APIENTRY glMakeNamedBufferResidentNV(GLuint buffer,GLenum access);
GLAPI  void  APIENTRY glMakeTextureHandleNonResidentARB(GLuint64 handle);
GLAPI  void  APIENTRY glMakeTextureHandleNonResidentNV(GLuint64 handle);
GLAPI  void  APIENTRY glMakeTextureHandleResidentARB(GLuint64 handle);
GLAPI  void  APIENTRY glMakeTextureHandleResidentNV(GLuint64 handle);
GLAPI  void  APIENTRY glMap1d(GLenum target,GLdouble u1,GLdouble u2,GLint stride,GLint order,const GLdouble *points);
GLAPI  void  APIENTRY glMap1f(GLenum target,GLfloat u1,GLfloat u2,GLint stride,GLint order,const GLfloat *points);
GLAPI  void  APIENTRY glMap1xOES(GLenum target,GLfixed u1,GLfixed u2,GLint stride,GLint order,GLfixed points);
GLAPI  void  APIENTRY glMap2d(GLenum target,GLdouble u1,GLdouble u2,GLint ustride,GLint uorder,GLdouble v1,GLdouble v2,GLint vstride,GLint vorder,const GLdouble *points);
GLAPI  void  APIENTRY glMap2f(GLenum target,GLfloat u1,GLfloat u2,GLint ustride,GLint uorder,GLfloat v1,GLfloat v2,GLint vstride,GLint vorder,const GLfloat *points);
GLAPI  void  APIENTRY glMap2xOES(GLenum target,GLfixed u1,GLfixed u2,GLint ustride,GLint uorder,GLfixed v1,GLfixed v2,GLint vstride,GLint vorder,GLfixed points);
GLAPI  void * APIENTRY glMapBuffer(GLenum target,GLenum access);
GLAPI  void * APIENTRY glMapBufferARB(GLenum target,GLenum access);
GLAPI  void * APIENTRY glMapBufferOES(GLenum target,GLenum access);
GLAPI  void * APIENTRY glMapBufferRange(GLenum target,GLintptr offset,GLsizeiptr length,GLbitfield access);
GLAPI  void * APIENTRY glMapBufferRangeEXT(GLenum target,GLintptr offset,GLsizeiptr length,GLbitfield access);
GLAPI  void  APIENTRY glMapControlPointsNV(GLenum target,GLuint index,GLenum type,GLsizei ustride,GLsizei vstride,GLint uorder,GLint vorder,GLboolean packed,const void *points);
GLAPI  void  APIENTRY glMapGrid1d(GLint un,GLdouble u1,GLdouble u2);
GLAPI  void  APIENTRY glMapGrid1f(GLint un,GLfloat u1,GLfloat u2);
GLAPI  void  APIENTRY glMapGrid1xOES(GLint n,GLfixed u1,GLfixed u2);
GLAPI  void  APIENTRY glMapGrid2d(GLint un,GLdouble u1,GLdouble u2,GLint vn,GLdouble v1,GLdouble v2);
GLAPI  void  APIENTRY glMapGrid2f(GLint un,GLfloat u1,GLfloat u2,GLint vn,GLfloat v1,GLfloat v2);
GLAPI  void  APIENTRY glMapGrid2xOES(GLint n,GLfixed u1,GLfixed u2,GLfixed v1,GLfixed v2);
GLAPI  void * APIENTRY glMapNamedBufferEXT(GLuint buffer,GLenum access);
GLAPI  void * APIENTRY glMapNamedBufferRangeEXT(GLuint buffer,GLintptr offset,GLsizeiptr length,GLbitfield access);
GLAPI  void * APIENTRY glMapObjectBufferATI(GLuint buffer);
GLAPI  void  APIENTRY glMapParameterfvNV(GLenum target,GLenum pname,const GLfloat *params);
GLAPI  void  APIENTRY glMapParameterivNV(GLenum target,GLenum pname,const GLint *params);
GLAPI  void * APIENTRY glMapTexture2DINTEL(GLuint texture,GLint level,GLbitfield access,GLint *stride,GLenum *layout);
GLAPI  void  APIENTRY glMapVertexAttrib1dAPPLE(GLuint index,GLuint size,GLdouble u1,GLdouble u2,GLint stride,GLint order,const GLdouble *points);
GLAPI  void  APIENTRY glMapVertexAttrib1fAPPLE(GLuint index,GLuint size,GLfloat u1,GLfloat u2,GLint stride,GLint order,const GLfloat *points);
GLAPI  void  APIENTRY glMapVertexAttrib2dAPPLE(GLuint index,GLuint size,GLdouble u1,GLdouble u2,GLint ustride,GLint uorder,GLdouble v1,GLdouble v2,GLint vstride,GLint vorder,const GLdouble *points);
GLAPI  void  APIENTRY glMapVertexAttrib2fAPPLE(GLuint index,GLuint size,GLfloat u1,GLfloat u2,GLint ustride,GLint uorder,GLfloat v1,GLfloat v2,GLint vstride,GLint vorder,const GLfloat *points);
GLAPI  void  APIENTRY glMaterialf(GLenum face,GLenum pname,GLfloat param);
GLAPI  void  APIENTRY glMaterialfv(GLenum face,GLenum pname,const GLfloat *params);
GLAPI  void  APIENTRY glMateriali(GLenum face,GLenum pname,GLint param);
GLAPI  void  APIENTRY glMaterialiv(GLenum face,GLenum pname,const GLint *params);
GLAPI  void  APIENTRY glMaterialx(GLenum face,GLenum pname,GLfixed param);
GLAPI  void  APIENTRY glMaterialxOES(GLenum face,GLenum pname,GLfixed param);
GLAPI  void  APIENTRY glMaterialxv(GLenum face,GLenum pname,const GLfixed *param);
GLAPI  void  APIENTRY glMaterialxvOES(GLenum face,GLenum pname,const GLfixed *param);
GLAPI  void  APIENTRY glMatrixFrustumEXT(GLenum mode,GLdouble left,GLdouble right,GLdouble bottom,GLdouble top,GLdouble zNear,GLdouble zFar);
GLAPI  void  APIENTRY glMatrixIndexPointerARB(GLint size,GLenum type,GLsizei stride,const void *pointer);
GLAPI  void  APIENTRY glMatrixIndexPointerOES(GLint size,GLenum type,GLsizei stride,const void *pointer);
GLAPI  void  APIENTRY glMatrixIndexubvARB(GLint size,const GLubyte *indices);
GLAPI  void  APIENTRY glMatrixIndexuivARB(GLint size,const GLuint *indices);
GLAPI  void  APIENTRY glMatrixIndexusvARB(GLint size,const GLushort *indices);
GLAPI  void  APIENTRY glMatrixLoadIdentityEXT(GLenum mode);
GLAPI  void  APIENTRY glMatrixLoadTransposedEXT(GLenum mode,const GLdouble *m);
GLAPI  void  APIENTRY glMatrixLoadTransposefEXT(GLenum mode,const GLfloat *m);
GLAPI  void  APIENTRY glMatrixLoaddEXT(GLenum mode,const GLdouble *m);
GLAPI  void  APIENTRY glMatrixLoadfEXT(GLenum mode,const GLfloat *m);
GLAPI  void  APIENTRY glMatrixMode(GLenum mode);
GLAPI  void  APIENTRY glMatrixMultTransposedEXT(GLenum mode,const GLdouble *m);
GLAPI  void  APIENTRY glMatrixMultTransposefEXT(GLenum mode,const GLfloat *m);
GLAPI  void  APIENTRY glMatrixMultdEXT(GLenum mode,const GLdouble *m);
GLAPI  void  APIENTRY glMatrixMultfEXT(GLenum mode,const GLfloat *m);
GLAPI  void  APIENTRY glMatrixOrthoEXT(GLenum mode,GLdouble left,GLdouble right,GLdouble bottom,GLdouble top,GLdouble zNear,GLdouble zFar);
GLAPI  void  APIENTRY glMatrixPopEXT(GLenum mode);
GLAPI  void  APIENTRY glMatrixPushEXT(GLenum mode);
GLAPI  void  APIENTRY glMatrixRotatedEXT(GLenum mode,GLdouble angle,GLdouble x,GLdouble y,GLdouble z);
GLAPI  void  APIENTRY glMatrixRotatefEXT(GLenum mode,GLfloat angle,GLfloat x,GLfloat y,GLfloat z);
GLAPI  void  APIENTRY glMatrixScaledEXT(GLenum mode,GLdouble x,GLdouble y,GLdouble z);
GLAPI  void  APIENTRY glMatrixScalefEXT(GLenum mode,GLfloat x,GLfloat y,GLfloat z);
GLAPI  void  APIENTRY glMatrixTranslatedEXT(GLenum mode,GLdouble x,GLdouble y,GLdouble z);
GLAPI  void  APIENTRY glMatrixTranslatefEXT(GLenum mode,GLfloat x,GLfloat y,GLfloat z);
GLAPI  void  APIENTRY glMemoryBarrier(GLbitfield barriers);
GLAPI  void  APIENTRY glMemoryBarrierByRegion(GLbitfield barriers);
GLAPI  void  APIENTRY glMemoryBarrierEXT(GLbitfield barriers);
GLAPI  void  APIENTRY glMinSampleShading(GLfloat value);
GLAPI  void  APIENTRY glMinSampleShadingARB(GLfloat value);
GLAPI  void  APIENTRY glMinSampleShadingOES(GLfloat value);
GLAPI  void  APIENTRY glMinmax(GLenum target,GLenum internalformat,GLboolean sink);
GLAPI  void  APIENTRY glMinmaxEXT(GLenum target,GLenum internalformat,GLboolean sink);
GLAPI  void  APIENTRY glMultMatrixd(const GLdouble *m);
GLAPI  void  APIENTRY glMultMatrixf(const GLfloat *m);
GLAPI  void  APIENTRY glMultMatrixx(const GLfixed *m);
GLAPI  void  APIENTRY glMultMatrixxOES(const GLfixed *m);
GLAPI  void  APIENTRY glMultTransposeMatrixd(const GLdouble *m);
GLAPI  void  APIENTRY glMultTransposeMatrixdARB(const GLdouble *m);
GLAPI  void  APIENTRY glMultTransposeMatrixf(const GLfloat *m);
GLAPI  void  APIENTRY glMultTransposeMatrixfARB(const GLfloat *m);
GLAPI  void  APIENTRY glMultTransposeMatrixxOES(const GLfixed *m);
GLAPI  void  APIENTRY glMultiDrawArrays(GLenum mode,const GLint *first,const GLsizei *count,GLsizei drawcount);
GLAPI  void  APIENTRY glMultiDrawArraysEXT(GLenum mode,const GLint *first,const GLsizei *count,GLsizei primcount);
GLAPI  void  APIENTRY glMultiDrawArraysIndirect(GLenum mode,const void *indirect,GLsizei drawcount,GLsizei stride);
GLAPI  void  APIENTRY glMultiDrawArraysIndirectAMD(GLenum mode,const void *indirect,GLsizei primcount,GLsizei stride);
GLAPI  void  APIENTRY glMultiDrawArraysIndirectBindlessNV(GLenum mode,const void *indirect,GLsizei drawCount,GLsizei stride,GLint vertexBufferCount);
GLAPI  void  APIENTRY glMultiDrawArraysIndirectCountARB(GLenum mode,GLintptr indirect,GLintptr drawcount,GLsizei maxdrawcount,GLsizei stride);
GLAPI  void  APIENTRY glMultiDrawElementArrayAPPLE(GLenum mode,const GLint *first,const GLsizei *count,GLsizei primcount);
GLAPI  void  APIENTRY glMultiDrawElements(GLenum mode,const GLsizei *count,GLenum type,const void *const*indices,GLsizei drawcount);
GLAPI  void  APIENTRY glMultiDrawElementsBaseVertex(GLenum mode,const GLsizei *count,GLenum type,const void *const*indices,GLsizei drawcount,const GLint *basevertex);
GLAPI  void  APIENTRY glMultiDrawElementsEXT(GLenum mode,const GLsizei *count,GLenum type,const void *const*indices,GLsizei primcount);
GLAPI  void  APIENTRY glMultiDrawElementsIndirect(GLenum mode,GLenum type,const void *indirect,GLsizei drawcount,GLsizei stride);
GLAPI  void  APIENTRY glMultiDrawElementsIndirectAMD(GLenum mode,GLenum type,const void *indirect,GLsizei primcount,GLsizei stride);
GLAPI  void  APIENTRY glMultiDrawElementsIndirectBindlessNV(GLenum mode,GLenum type,const void *indirect,GLsizei drawCount,GLsizei stride,GLint vertexBufferCount);
GLAPI  void  APIENTRY glMultiDrawElementsIndirectCountARB(GLenum mode,GLenum type,GLintptr indirect,GLintptr drawcount,GLsizei maxdrawcount,GLsizei stride);
GLAPI  void  APIENTRY glMultiDrawRangeElementArrayAPPLE(GLenum mode,GLuint start,GLuint end,const GLint *first,const GLsizei *count,GLsizei primcount);
GLAPI  void  APIENTRY glMultiModeDrawArraysIBM(const GLenum *mode,const GLint *first,const GLsizei *count,GLsizei primcount,GLint modestride);
GLAPI  void  APIENTRY glMultiModeDrawElementsIBM(const GLenum *mode,const GLsizei *count,GLenum type,const void *const*indices,GLsizei primcount,GLint modestride);
GLAPI  void  APIENTRY glMultiTexBufferEXT(GLenum texunit,GLenum target,GLenum internalformat,GLuint buffer);
GLAPI  void  APIENTRY glMultiTexCoord1bOES(GLenum texture,GLbyte s);
GLAPI  void  APIENTRY glMultiTexCoord1bvOES(GLenum texture,const GLbyte *coords);
GLAPI  void  APIENTRY glMultiTexCoord1d(GLenum target,GLdouble s);
GLAPI  void  APIENTRY glMultiTexCoord1dARB(GLenum target,GLdouble s);
GLAPI  void  APIENTRY glMultiTexCoord1dv(GLenum target,const GLdouble *v);
GLAPI  void  APIENTRY glMultiTexCoord1dvARB(GLenum target,const GLdouble *v);
GLAPI  void  APIENTRY glMultiTexCoord1f(GLenum target,GLfloat s);
GLAPI  void  APIENTRY glMultiTexCoord1fARB(GLenum target,GLfloat s);
GLAPI  void  APIENTRY glMultiTexCoord1fv(GLenum target,const GLfloat *v);
GLAPI  void  APIENTRY glMultiTexCoord1fvARB(GLenum target,const GLfloat *v);
GLAPI  void  APIENTRY glMultiTexCoord1hNV(GLenum target,GLhalfNV s);
GLAPI  void  APIENTRY glMultiTexCoord1hvNV(GLenum target,const GLhalfNV *v);
GLAPI  void  APIENTRY glMultiTexCoord1i(GLenum target,GLint s);
GLAPI  void  APIENTRY glMultiTexCoord1iARB(GLenum target,GLint s);
GLAPI  void  APIENTRY glMultiTexCoord1iv(GLenum target,const GLint *v);
GLAPI  void  APIENTRY glMultiTexCoord1ivARB(GLenum target,const GLint *v);
GLAPI  void  APIENTRY glMultiTexCoord1s(GLenum target,GLshort s);
GLAPI  void  APIENTRY glMultiTexCoord1sARB(GLenum target,GLshort s);
GLAPI  void  APIENTRY glMultiTexCoord1sv(GLenum target,const GLshort *v);
GLAPI  void  APIENTRY glMultiTexCoord1svARB(GLenum target,const GLshort *v);
GLAPI  void  APIENTRY glMultiTexCoord1xOES(GLenum texture,GLfixed s);
GLAPI  void  APIENTRY glMultiTexCoord1xvOES(GLenum texture,const GLfixed *coords);
GLAPI  void  APIENTRY glMultiTexCoord2bOES(GLenum texture,GLbyte s,GLbyte t);
GLAPI  void  APIENTRY glMultiTexCoord2bvOES(GLenum texture,const GLbyte *coords);
GLAPI  void  APIENTRY glMultiTexCoord2d(GLenum target,GLdouble s,GLdouble t);
GLAPI  void  APIENTRY glMultiTexCoord2dARB(GLenum target,GLdouble s,GLdouble t);
GLAPI  void  APIENTRY glMultiTexCoord2dv(GLenum target,const GLdouble *v);
GLAPI  void  APIENTRY glMultiTexCoord2dvARB(GLenum target,const GLdouble *v);
GLAPI  void  APIENTRY glMultiTexCoord2f(GLenum target,GLfloat s,GLfloat t);
GLAPI  void  APIENTRY glMultiTexCoord2fARB(GLenum target,GLfloat s,GLfloat t);
GLAPI  void  APIENTRY glMultiTexCoord2fv(GLenum target,const GLfloat *v);
GLAPI  void  APIENTRY glMultiTexCoord2fvARB(GLenum target,const GLfloat *v);
GLAPI  void  APIENTRY glMultiTexCoord2hNV(GLenum target,GLhalfNV s,GLhalfNV t);
GLAPI  void  APIENTRY glMultiTexCoord2hvNV(GLenum target,const GLhalfNV *v);
GLAPI  void  APIENTRY glMultiTexCoord2i(GLenum target,GLint s,GLint t);
GLAPI  void  APIENTRY glMultiTexCoord2iARB(GLenum target,GLint s,GLint t);
GLAPI  void  APIENTRY glMultiTexCoord2iv(GLenum target,const GLint *v);
GLAPI  void  APIENTRY glMultiTexCoord2ivARB(GLenum target,const GLint *v);
GLAPI  void  APIENTRY glMultiTexCoord2s(GLenum target,GLshort s,GLshort t);
GLAPI  void  APIENTRY glMultiTexCoord2sARB(GLenum target,GLshort s,GLshort t);
GLAPI  void  APIENTRY glMultiTexCoord2sv(GLenum target,const GLshort *v);
GLAPI  void  APIENTRY glMultiTexCoord2svARB(GLenum target,const GLshort *v);
GLAPI  void  APIENTRY glMultiTexCoord2xOES(GLenum texture,GLfixed s,GLfixed t);
GLAPI  void  APIENTRY glMultiTexCoord2xvOES(GLenum texture,const GLfixed *coords);
GLAPI  void  APIENTRY glMultiTexCoord3bOES(GLenum texture,GLbyte s,GLbyte t,GLbyte r);
GLAPI  void  APIENTRY glMultiTexCoord3bvOES(GLenum texture,const GLbyte *coords);
GLAPI  void  APIENTRY glMultiTexCoord3d(GLenum target,GLdouble s,GLdouble t,GLdouble r);
GLAPI  void  APIENTRY glMultiTexCoord3dARB(GLenum target,GLdouble s,GLdouble t,GLdouble r);
GLAPI  void  APIENTRY glMultiTexCoord3dv(GLenum target,const GLdouble *v);
GLAPI  void  APIENTRY glMultiTexCoord3dvARB(GLenum target,const GLdouble *v);
GLAPI  void  APIENTRY glMultiTexCoord3f(GLenum target,GLfloat s,GLfloat t,GLfloat r);
GLAPI  void  APIENTRY glMultiTexCoord3fARB(GLenum target,GLfloat s,GLfloat t,GLfloat r);
GLAPI  void  APIENTRY glMultiTexCoord3fv(GLenum target,const GLfloat *v);
GLAPI  void  APIENTRY glMultiTexCoord3fvARB(GLenum target,const GLfloat *v);
GLAPI  void  APIENTRY glMultiTexCoord3hNV(GLenum target,GLhalfNV s,GLhalfNV t,GLhalfNV r);
GLAPI  void  APIENTRY glMultiTexCoord3hvNV(GLenum target,const GLhalfNV *v);
GLAPI  void  APIENTRY glMultiTexCoord3i(GLenum target,GLint s,GLint t,GLint r);
GLAPI  void  APIENTRY glMultiTexCoord3iARB(GLenum target,GLint s,GLint t,GLint r);
GLAPI  void  APIENTRY glMultiTexCoord3iv(GLenum target,const GLint *v);
GLAPI  void  APIENTRY glMultiTexCoord3ivARB(GLenum target,const GLint *v);
GLAPI  void  APIENTRY glMultiTexCoord3s(GLenum target,GLshort s,GLshort t,GLshort r);
GLAPI  void  APIENTRY glMultiTexCoord3sARB(GLenum target,GLshort s,GLshort t,GLshort r);
GLAPI  void  APIENTRY glMultiTexCoord3sv(GLenum target,const GLshort *v);
GLAPI  void  APIENTRY glMultiTexCoord3svARB(GLenum target,const GLshort *v);
GLAPI  void  APIENTRY glMultiTexCoord3xOES(GLenum texture,GLfixed s,GLfixed t,GLfixed r);
GLAPI  void  APIENTRY glMultiTexCoord3xvOES(GLenum texture,const GLfixed *coords);
GLAPI  void  APIENTRY glMultiTexCoord4bOES(GLenum texture,GLbyte s,GLbyte t,GLbyte r,GLbyte q);
GLAPI  void  APIENTRY glMultiTexCoord4bvOES(GLenum texture,const GLbyte *coords);
GLAPI  void  APIENTRY glMultiTexCoord4d(GLenum target,GLdouble s,GLdouble t,GLdouble r,GLdouble q);
GLAPI  void  APIENTRY glMultiTexCoord4dARB(GLenum target,GLdouble s,GLdouble t,GLdouble r,GLdouble q);
GLAPI  void  APIENTRY glMultiTexCoord4dv(GLenum target,const GLdouble *v);
GLAPI  void  APIENTRY glMultiTexCoord4dvARB(GLenum target,const GLdouble *v);
GLAPI  void  APIENTRY glMultiTexCoord4f(GLenum target,GLfloat s,GLfloat t,GLfloat r,GLfloat q);
GLAPI  void  APIENTRY glMultiTexCoord4fARB(GLenum target,GLfloat s,GLfloat t,GLfloat r,GLfloat q);
GLAPI  void  APIENTRY glMultiTexCoord4fv(GLenum target,const GLfloat *v);
GLAPI  void  APIENTRY glMultiTexCoord4fvARB(GLenum target,const GLfloat *v);
GLAPI  void  APIENTRY glMultiTexCoord4hNV(GLenum target,GLhalfNV s,GLhalfNV t,GLhalfNV r,GLhalfNV q);
GLAPI  void  APIENTRY glMultiTexCoord4hvNV(GLenum target,const GLhalfNV *v);
GLAPI  void  APIENTRY glMultiTexCoord4i(GLenum target,GLint s,GLint t,GLint r,GLint q);
GLAPI  void  APIENTRY glMultiTexCoord4iARB(GLenum target,GLint s,GLint t,GLint r,GLint q);
GLAPI  void  APIENTRY glMultiTexCoord4iv(GLenum target,const GLint *v);
GLAPI  void  APIENTRY glMultiTexCoord4ivARB(GLenum target,const GLint *v);
GLAPI  void  APIENTRY glMultiTexCoord4s(GLenum target,GLshort s,GLshort t,GLshort r,GLshort q);
GLAPI  void  APIENTRY glMultiTexCoord4sARB(GLenum target,GLshort s,GLshort t,GLshort r,GLshort q);
GLAPI  void  APIENTRY glMultiTexCoord4sv(GLenum target,const GLshort *v);
GLAPI  void  APIENTRY glMultiTexCoord4svARB(GLenum target,const GLshort *v);
GLAPI  void  APIENTRY glMultiTexCoord4x(GLenum texture,GLfixed s,GLfixed t,GLfixed r,GLfixed q);
GLAPI  void  APIENTRY glMultiTexCoord4xOES(GLenum texture,GLfixed s,GLfixed t,GLfixed r,GLfixed q);
GLAPI  void  APIENTRY glMultiTexCoord4xvOES(GLenum texture,const GLfixed *coords);
GLAPI  void  APIENTRY glMultiTexCoordP1ui(GLenum texture,GLenum type,GLuint coords);
GLAPI  void  APIENTRY glMultiTexCoordP1uiv(GLenum texture,GLenum type,const GLuint *coords);
GLAPI  void  APIENTRY glMultiTexCoordP2ui(GLenum texture,GLenum type,GLuint coords);
GLAPI  void  APIENTRY glMultiTexCoordP2uiv(GLenum texture,GLenum type,const GLuint *coords);
GLAPI  void  APIENTRY glMultiTexCoordP3ui(GLenum texture,GLenum type,GLuint coords);
GLAPI  void  APIENTRY glMultiTexCoordP3uiv(GLenum texture,GLenum type,const GLuint *coords);
GLAPI  void  APIENTRY glMultiTexCoordP4ui(GLenum texture,GLenum type,GLuint coords);
GLAPI  void  APIENTRY glMultiTexCoordP4uiv(GLenum texture,GLenum type,const GLuint *coords);
GLAPI  void  APIENTRY glMultiTexCoordPointerEXT(GLenum texunit,GLint size,GLenum type,GLsizei stride,const void *pointer);
GLAPI  void  APIENTRY glMultiTexEnvfEXT(GLenum texunit,GLenum target,GLenum pname,GLfloat param);
GLAPI  void  APIENTRY glMultiTexEnvfvEXT(GLenum texunit,GLenum target,GLenum pname,const GLfloat *params);
GLAPI  void  APIENTRY glMultiTexEnviEXT(GLenum texunit,GLenum target,GLenum pname,GLint param);
GLAPI  void  APIENTRY glMultiTexEnvivEXT(GLenum texunit,GLenum target,GLenum pname,const GLint *params);
GLAPI  void  APIENTRY glMultiTexGendEXT(GLenum texunit,GLenum coord,GLenum pname,GLdouble param);
GLAPI  void  APIENTRY glMultiTexGendvEXT(GLenum texunit,GLenum coord,GLenum pname,const GLdouble *params);
GLAPI  void  APIENTRY glMultiTexGenfEXT(GLenum texunit,GLenum coord,GLenum pname,GLfloat param);
GLAPI  void  APIENTRY glMultiTexGenfvEXT(GLenum texunit,GLenum coord,GLenum pname,const GLfloat *params);
GLAPI  void  APIENTRY glMultiTexGeniEXT(GLenum texunit,GLenum coord,GLenum pname,GLint param);
GLAPI  void  APIENTRY glMultiTexGenivEXT(GLenum texunit,GLenum coord,GLenum pname,const GLint *params);
GLAPI  void  APIENTRY glMultiTexImage1DEXT(GLenum texunit,GLenum target,GLint level,GLint internalformat,GLsizei width,GLint border,GLenum format,GLenum type,const void *pixels);
GLAPI  void  APIENTRY glMultiTexImage2DEXT(GLenum texunit,GLenum target,GLint level,GLint internalformat,GLsizei width,GLsizei height,GLint border,GLenum format,GLenum type,const void *pixels);
GLAPI  void  APIENTRY glMultiTexImage3DEXT(GLenum texunit,GLenum target,GLint level,GLint internalformat,GLsizei width,GLsizei height,GLsizei depth,GLint border,GLenum format,GLenum type,const void *pixels);
GLAPI  void  APIENTRY glMultiTexParameterIivEXT(GLenum texunit,GLenum target,GLenum pname,const GLint *params);
GLAPI  void  APIENTRY glMultiTexParameterIuivEXT(GLenum texunit,GLenum target,GLenum pname,const GLuint *params);
GLAPI  void  APIENTRY glMultiTexParameterfEXT(GLenum texunit,GLenum target,GLenum pname,GLfloat param);
GLAPI  void  APIENTRY glMultiTexParameterfvEXT(GLenum texunit,GLenum target,GLenum pname,const GLfloat *params);
GLAPI  void  APIENTRY glMultiTexParameteriEXT(GLenum texunit,GLenum target,GLenum pname,GLint param);
GLAPI  void  APIENTRY glMultiTexParameterivEXT(GLenum texunit,GLenum target,GLenum pname,const GLint *params);
GLAPI  void  APIENTRY glMultiTexRenderbufferEXT(GLenum texunit,GLenum target,GLuint renderbuffer);
GLAPI  void  APIENTRY glMultiTexSubImage1DEXT(GLenum texunit,GLenum target,GLint level,GLint xoffset,GLsizei width,GLenum format,GLenum type,const void *pixels);
GLAPI  void  APIENTRY glMultiTexSubImage2DEXT(GLenum texunit,GLenum target,GLint level,GLint xoffset,GLint yoffset,GLsizei width,GLsizei height,GLenum format,GLenum type,const void *pixels);
GLAPI  void  APIENTRY glMultiTexSubImage3DEXT(GLenum texunit,GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLsizei width,GLsizei height,GLsizei depth,GLenum format,GLenum type,const void *pixels);
GLAPI  void  APIENTRY glNamedBufferDataEXT(GLuint buffer,GLsizeiptr size,const void *data,GLenum usage);
GLAPI  void  APIENTRY glNamedBufferStorageEXT(GLuint buffer,GLsizeiptr size,const void *data,GLbitfield flags);
GLAPI  void  APIENTRY glNamedBufferSubDataEXT(GLuint buffer,GLintptr offset,GLsizeiptr size,const void *data);
GLAPI  void  APIENTRY glNamedCopyBufferSubDataEXT(GLuint readBuffer,GLuint writeBuffer,GLintptr readOffset,GLintptr writeOffset,GLsizeiptr size);
GLAPI  void  APIENTRY glNamedFramebufferParameteriEXT(GLuint framebuffer,GLenum pname,GLint param);
GLAPI  void  APIENTRY glNamedFramebufferRenderbufferEXT(GLuint framebuffer,GLenum attachment,GLenum renderbuffertarget,GLuint renderbuffer);
GLAPI  void  APIENTRY glNamedFramebufferTexture1DEXT(GLuint framebuffer,GLenum attachment,GLenum textarget,GLuint texture,GLint level);
GLAPI  void  APIENTRY glNamedFramebufferTexture2DEXT(GLuint framebuffer,GLenum attachment,GLenum textarget,GLuint texture,GLint level);
GLAPI  void  APIENTRY glNamedFramebufferTexture3DEXT(GLuint framebuffer,GLenum attachment,GLenum textarget,GLuint texture,GLint level,GLint zoffset);
GLAPI  void  APIENTRY glNamedFramebufferTextureEXT(GLuint framebuffer,GLenum attachment,GLuint texture,GLint level);
GLAPI  void  APIENTRY glNamedFramebufferTextureFaceEXT(GLuint framebuffer,GLenum attachment,GLuint texture,GLint level,GLenum face);
GLAPI  void  APIENTRY glNamedFramebufferTextureLayerEXT(GLuint framebuffer,GLenum attachment,GLuint texture,GLint level,GLint layer);
GLAPI  void  APIENTRY glNamedProgramLocalParameter4dEXT(GLuint program,GLenum target,GLuint index,GLdouble x,GLdouble y,GLdouble z,GLdouble w);
GLAPI  void  APIENTRY glNamedProgramLocalParameter4dvEXT(GLuint program,GLenum target,GLuint index,const GLdouble *params);
GLAPI  void  APIENTRY glNamedProgramLocalParameter4fEXT(GLuint program,GLenum target,GLuint index,GLfloat x,GLfloat y,GLfloat z,GLfloat w);
GLAPI  void  APIENTRY glNamedProgramLocalParameter4fvEXT(GLuint program,GLenum target,GLuint index,const GLfloat *params);
GLAPI  void  APIENTRY glNamedProgramLocalParameterI4iEXT(GLuint program,GLenum target,GLuint index,GLint x,GLint y,GLint z,GLint w);
GLAPI  void  APIENTRY glNamedProgramLocalParameterI4ivEXT(GLuint program,GLenum target,GLuint index,const GLint *params);
GLAPI  void  APIENTRY glNamedProgramLocalParameterI4uiEXT(GLuint program,GLenum target,GLuint index,GLuint x,GLuint y,GLuint z,GLuint w);
GLAPI  void  APIENTRY glNamedProgramLocalParameterI4uivEXT(GLuint program,GLenum target,GLuint index,const GLuint *params);
GLAPI  void  APIENTRY glNamedProgramLocalParameters4fvEXT(GLuint program,GLenum target,GLuint index,GLsizei count,const GLfloat *params);
GLAPI  void  APIENTRY glNamedProgramLocalParametersI4ivEXT(GLuint program,GLenum target,GLuint index,GLsizei count,const GLint *params);
GLAPI  void  APIENTRY glNamedProgramLocalParametersI4uivEXT(GLuint program,GLenum target,GLuint index,GLsizei count,const GLuint *params);
GLAPI  void  APIENTRY glNamedProgramStringEXT(GLuint program,GLenum target,GLenum format,GLsizei len,const void *string);
GLAPI  void  APIENTRY glNamedRenderbufferStorageEXT(GLuint renderbuffer,GLenum internalformat,GLsizei width,GLsizei height);
GLAPI  void  APIENTRY glNamedRenderbufferStorageMultisampleCoverageEXT(GLuint renderbuffer,GLsizei coverageSamples,GLsizei colorSamples,GLenum internalformat,GLsizei width,GLsizei height);
GLAPI  void  APIENTRY glNamedRenderbufferStorageMultisampleEXT(GLuint renderbuffer,GLsizei samples,GLenum internalformat,GLsizei width,GLsizei height);
GLAPI  void  APIENTRY glNamedStringARB(GLenum type,GLint namelen,const GLchar *name,GLint stringlen,const GLchar *string);
GLAPI  void  APIENTRY glNewList(GLuint list,GLenum mode);
GLAPI  GLuint  APIENTRY glNewObjectBufferATI(GLsizei size,const void *pointer,GLenum usage);
GLAPI  void  APIENTRY glNormal3b(GLbyte nx,GLbyte ny,GLbyte nz);
GLAPI  void  APIENTRY glNormal3bv(const GLbyte *v);
GLAPI  void  APIENTRY glNormal3d(GLdouble nx,GLdouble ny,GLdouble nz);
GLAPI  void  APIENTRY glNormal3dv(const GLdouble *v);
GLAPI  void  APIENTRY glNormal3f(GLfloat nx,GLfloat ny,GLfloat nz);
GLAPI  void  APIENTRY glNormal3fVertex3fSUN(GLfloat nx,GLfloat ny,GLfloat nz,GLfloat x,GLfloat y,GLfloat z);
GLAPI  void  APIENTRY glNormal3fVertex3fvSUN(const GLfloat *n,const GLfloat *v);
GLAPI  void  APIENTRY glNormal3fv(const GLfloat *v);
GLAPI  void  APIENTRY glNormal3hNV(GLhalfNV nx,GLhalfNV ny,GLhalfNV nz);
GLAPI  void  APIENTRY glNormal3hvNV(const GLhalfNV *v);
GLAPI  void  APIENTRY glNormal3i(GLint nx,GLint ny,GLint nz);
GLAPI  void  APIENTRY glNormal3iv(const GLint *v);
GLAPI  void  APIENTRY glNormal3s(GLshort nx,GLshort ny,GLshort nz);
GLAPI  void  APIENTRY glNormal3sv(const GLshort *v);
GLAPI  void  APIENTRY glNormal3x(GLfixed nx,GLfixed ny,GLfixed nz);
GLAPI  void  APIENTRY glNormal3xOES(GLfixed nx,GLfixed ny,GLfixed nz);
GLAPI  void  APIENTRY glNormal3xvOES(const GLfixed *coords);
GLAPI  void  APIENTRY glNormalFormatNV(GLenum type,GLsizei stride);
GLAPI  void  APIENTRY glNormalP3ui(GLenum type,GLuint coords);
GLAPI  void  APIENTRY glNormalP3uiv(GLenum type,const GLuint *coords);
GLAPI  void  APIENTRY glNormalPointer(GLenum type,GLsizei stride,const void *pointer);
GLAPI  void  APIENTRY glNormalPointerEXT(GLenum type,GLsizei stride,GLsizei count,const void *pointer);
GLAPI  void  APIENTRY glNormalPointerListIBM(GLenum type,GLint stride,const void **pointer,GLint ptrstride);
GLAPI  void  APIENTRY glNormalPointervINTEL(GLenum type,const void **pointer);
GLAPI  void  APIENTRY glNormalStream3bATI(GLenum stream,GLbyte nx,GLbyte ny,GLbyte nz);
GLAPI  void  APIENTRY glNormalStream3bvATI(GLenum stream,const GLbyte *coords);
GLAPI  void  APIENTRY glNormalStream3dATI(GLenum stream,GLdouble nx,GLdouble ny,GLdouble nz);
GLAPI  void  APIENTRY glNormalStream3dvATI(GLenum stream,const GLdouble *coords);
GLAPI  void  APIENTRY glNormalStream3fATI(GLenum stream,GLfloat nx,GLfloat ny,GLfloat nz);
GLAPI  void  APIENTRY glNormalStream3fvATI(GLenum stream,const GLfloat *coords);
GLAPI  void  APIENTRY glNormalStream3iATI(GLenum stream,GLint nx,GLint ny,GLint nz);
GLAPI  void  APIENTRY glNormalStream3ivATI(GLenum stream,const GLint *coords);
GLAPI  void  APIENTRY glNormalStream3sATI(GLenum stream,GLshort nx,GLshort ny,GLshort nz);
GLAPI  void  APIENTRY glNormalStream3svATI(GLenum stream,const GLshort *coords);
GLAPI  void  APIENTRY glObjectLabel(GLenum identifier,GLuint name,GLsizei length,const GLchar *label);
GLAPI  void  APIENTRY glObjectLabelKHR(GLenum identifier,GLuint name,GLsizei length,const GLchar *label);
GLAPI  void  APIENTRY glObjectPtrLabel(const void *ptr,GLsizei length,const GLchar *label);
GLAPI  void  APIENTRY glObjectPtrLabelKHR(const void *ptr,GLsizei length,const GLchar *label);
GLAPI  GLenum  APIENTRY glObjectPurgeableAPPLE(GLenum objectType,GLuint name,GLenum option);
GLAPI  GLenum  APIENTRY glObjectUnpurgeableAPPLE(GLenum objectType,GLuint name,GLenum option);
GLAPI  void  APIENTRY glOrtho(GLdouble left,GLdouble right,GLdouble bottom,GLdouble top,GLdouble zNear,GLdouble zFar);
GLAPI  void  APIENTRY glOrthof(GLfloat l,GLfloat r,GLfloat b,GLfloat t,GLfloat n,GLfloat f);
GLAPI  void  APIENTRY glOrthofOES(GLfloat l,GLfloat r,GLfloat b,GLfloat t,GLfloat n,GLfloat f);
GLAPI  void  APIENTRY glOrthox(GLfixed l,GLfixed r,GLfixed b,GLfixed t,GLfixed n,GLfixed f);
GLAPI  void  APIENTRY glOrthoxOES(GLfixed l,GLfixed r,GLfixed b,GLfixed t,GLfixed n,GLfixed f);
GLAPI  void  APIENTRY glPNTrianglesfATI(GLenum pname,GLfloat param);
GLAPI  void  APIENTRY glPNTrianglesiATI(GLenum pname,GLint param);
GLAPI  void  APIENTRY glPassTexCoordATI(GLuint dst,GLuint coord,GLenum swizzle);
GLAPI  void  APIENTRY glPassThrough(GLfloat token);
GLAPI  void  APIENTRY glPassThroughxOES(GLfixed token);
GLAPI  void  APIENTRY glPatchParameterfv(GLenum pname,const GLfloat *values);
GLAPI  void  APIENTRY glPatchParameteri(GLenum pname,GLint value);
GLAPI  void  APIENTRY glPatchParameteriEXT(GLenum pname,GLint value);
GLAPI  void  APIENTRY glPathColorGenNV(GLenum color,GLenum genMode,GLenum colorFormat,const GLfloat *coeffs);
GLAPI  void  APIENTRY glPathCommandsNV(GLuint path,GLsizei numCommands,const GLubyte *commands,GLsizei numCoords,GLenum coordType,const void *coords);
GLAPI  void  APIENTRY glPathCoordsNV(GLuint path,GLsizei numCoords,GLenum coordType,const void *coords);
GLAPI  void  APIENTRY glPathCoverDepthFuncNV(GLenum func);
GLAPI  void  APIENTRY glPathDashArrayNV(GLuint path,GLsizei dashCount,const GLfloat *dashArray);
GLAPI  void  APIENTRY glPathFogGenNV(GLenum genMode);
GLAPI  void  APIENTRY glPathGlyphRangeNV(GLuint firstPathName,GLenum fontTarget,const void *fontName,GLbitfield fontStyle,GLuint firstGlyph,GLsizei numGlyphs,GLenum handleMissingGlyphs,GLuint pathParameterTemplate,GLfloat emScale);
GLAPI  void  APIENTRY glPathGlyphsNV(GLuint firstPathName,GLenum fontTarget,const void *fontName,GLbitfield fontStyle,GLsizei numGlyphs,GLenum type,const void *charcodes,GLenum handleMissingGlyphs,GLuint pathParameterTemplate,GLfloat emScale);
GLAPI  void  APIENTRY glPathParameterfNV(GLuint path,GLenum pname,GLfloat value);
GLAPI  void  APIENTRY glPathParameterfvNV(GLuint path,GLenum pname,const GLfloat *value);
GLAPI  void  APIENTRY glPathParameteriNV(GLuint path,GLenum pname,GLint value);
GLAPI  void  APIENTRY glPathParameterivNV(GLuint path,GLenum pname,const GLint *value);
GLAPI  void  APIENTRY glPathStencilDepthOffsetNV(GLfloat factor,GLfloat units);
GLAPI  void  APIENTRY glPathStencilFuncNV(GLenum func,GLint ref,GLuint mask);
GLAPI  void  APIENTRY glPathStringNV(GLuint path,GLenum format,GLsizei length,const void *pathString);
GLAPI  void  APIENTRY glPathSubCommandsNV(GLuint path,GLsizei commandStart,GLsizei commandsToDelete,GLsizei numCommands,const GLubyte *commands,GLsizei numCoords,GLenum coordType,const void *coords);
GLAPI  void  APIENTRY glPathSubCoordsNV(GLuint path,GLsizei coordStart,GLsizei numCoords,GLenum coordType,const void *coords);
GLAPI  void  APIENTRY glPathTexGenNV(GLenum texCoordSet,GLenum genMode,GLint components,const GLfloat *coeffs);
GLAPI  void  APIENTRY glPixelDataRangeNV(GLenum target,GLsizei length,const void *pointer);
GLAPI  void  APIENTRY glPixelMapfv(GLenum map,GLsizei mapsize,const GLfloat *values);
GLAPI  void  APIENTRY glPixelMapuiv(GLenum map,GLsizei mapsize,const GLuint *values);
GLAPI  void  APIENTRY glPixelMapusv(GLenum map,GLsizei mapsize,const GLushort *values);
GLAPI  void  APIENTRY glPixelMapx(GLenum map,GLint size,const GLfixed *values);
GLAPI  void  APIENTRY glPixelStoref(GLenum pname,GLfloat param);
GLAPI  void  APIENTRY glPixelStorei(GLenum pname,GLint param);
GLAPI  void  APIENTRY glPixelStorex(GLenum pname,GLfixed param);
GLAPI  void  APIENTRY glPixelTexGenParameterfSGIS(GLenum pname,GLfloat param);
GLAPI  void  APIENTRY glPixelTexGenParameterfvSGIS(GLenum pname,const GLfloat *params);
GLAPI  void  APIENTRY glPixelTexGenParameteriSGIS(GLenum pname,GLint param);
GLAPI  void  APIENTRY glPixelTexGenParameterivSGIS(GLenum pname,const GLint *params);
GLAPI  void  APIENTRY glPixelTexGenSGIX(GLenum mode);
GLAPI  void  APIENTRY glPixelTransferf(GLenum pname,GLfloat param);
GLAPI  void  APIENTRY glPixelTransferi(GLenum pname,GLint param);
GLAPI  void  APIENTRY glPixelTransferxOES(GLenum pname,GLfixed param);
GLAPI  void  APIENTRY glPixelTransformParameterfEXT(GLenum target,GLenum pname,GLfloat param);
GLAPI  void  APIENTRY glPixelTransformParameterfvEXT(GLenum target,GLenum pname,const GLfloat *params);
GLAPI  void  APIENTRY glPixelTransformParameteriEXT(GLenum target,GLenum pname,GLint param);
GLAPI  void  APIENTRY glPixelTransformParameterivEXT(GLenum target,GLenum pname,const GLint *params);
GLAPI  void  APIENTRY glPixelZoom(GLfloat xfactor,GLfloat yfactor);
GLAPI  void  APIENTRY glPixelZoomxOES(GLfixed xfactor,GLfixed yfactor);
GLAPI  GLboolean  APIENTRY glPointAlongPathNV(GLuint path,GLsizei startSegment,GLsizei numSegments,GLfloat distance,GLfloat *x,GLfloat *y,GLfloat *tangentX,GLfloat *tangentY);
GLAPI  void  APIENTRY glPointParameterf(GLenum pname,GLfloat param);
GLAPI  void  APIENTRY glPointParameterfARB(GLenum pname,GLfloat param);
GLAPI  void  APIENTRY glPointParameterfEXT(GLenum pname,GLfloat param);
GLAPI  void  APIENTRY glPointParameterfSGIS(GLenum pname,GLfloat param);
GLAPI  void  APIENTRY glPointParameterfv(GLenum pname,const GLfloat *params);
GLAPI  void  APIENTRY glPointParameterfvARB(GLenum pname,const GLfloat *params);
GLAPI  void  APIENTRY glPointParameterfvEXT(GLenum pname,const GLfloat *params);
GLAPI  void  APIENTRY glPointParameterfvSGIS(GLenum pname,const GLfloat *params);
GLAPI  void  APIENTRY glPointParameteri(GLenum pname,GLint param);
GLAPI  void  APIENTRY glPointParameteriNV(GLenum pname,GLint param);
GLAPI  void  APIENTRY glPointParameteriv(GLenum pname,const GLint *params);
GLAPI  void  APIENTRY glPointParameterivNV(GLenum pname,const GLint *params);
GLAPI  void  APIENTRY glPointParameterx(GLenum pname,GLfixed param);
GLAPI  void  APIENTRY glPointParameterxOES(GLenum pname,GLfixed param);
GLAPI  void  APIENTRY glPointParameterxv(GLenum pname,const GLfixed *params);
GLAPI  void  APIENTRY glPointParameterxvOES(GLenum pname,const GLfixed *params);
GLAPI  void  APIENTRY glPointSize(GLfloat size);
GLAPI  void  APIENTRY glPointSizePointerOES(GLenum type,GLsizei stride,const void *pointer);
GLAPI  void  APIENTRY glPointSizex(GLfixed size);
GLAPI  void  APIENTRY glPointSizexOES(GLfixed size);
GLAPI  GLint  APIENTRY glPollAsyncSGIX(GLuint *markerp);
GLAPI  GLint  APIENTRY glPollInstrumentsSGIX(GLint *marker_p);
GLAPI  void  APIENTRY glPolygonMode(GLenum face,GLenum mode);
GLAPI  void  APIENTRY glPolygonOffset(GLfloat factor,GLfloat units);
GLAPI  void  APIENTRY glPolygonOffsetEXT(GLfloat factor,GLfloat bias);
GLAPI  void  APIENTRY glPolygonOffsetx(GLfixed factor,GLfixed units);
GLAPI  void  APIENTRY glPolygonOffsetxOES(GLfixed factor,GLfixed units);
GLAPI  void  APIENTRY glPolygonStipple(const GLubyte *mask);
GLAPI  void  APIENTRY glPresentFrameDualFillNV(GLuint video_slot,GLuint64EXT minPresentTime,GLuint beginPresentTimeId,GLuint presentDurationId,GLenum type,GLenum target0,GLuint fill0,GLenum target1,GLuint fill1,GLenum target2,GLuint fill2,GLenum target3,GLuint fill3);
GLAPI  void  APIENTRY glPresentFrameKeyedNV(GLuint video_slot,GLuint64EXT minPresentTime,GLuint beginPresentTimeId,GLuint presentDurationId,GLenum type,GLenum target0,GLuint fill0,GLuint key0,GLenum target1,GLuint fill1,GLuint key1);
GLAPI  void  APIENTRY glPrimitiveRestartIndex(GLuint index);
GLAPI  void  APIENTRY glPrimitiveRestartIndexNV(GLuint index);
GLAPI  void  APIENTRY glPrioritizeTextures(GLsizei n,const GLuint *textures,const GLfloat *priorities);
GLAPI  void  APIENTRY glPrimitiveBoundingBoxEXT(GLfloat minX,GLfloat minY,GLfloat minZ,GLfloat minW,GLfloat maxX,GLfloat maxY,GLfloat maxZ,GLfloat maxW);
GLAPI  void  APIENTRY glPrioritizeTexturesEXT(GLsizei n,const GLuint *textures,const GLclampf *priorities);
GLAPI  void  APIENTRY glPrioritizeTexturesxOES(GLsizei n,const GLuint *textures,const GLfixed *priorities);
GLAPI  void  APIENTRY glProgramBinary(GLuint program,GLenum binaryFormat,const void *binary,GLsizei length);
GLAPI  void  APIENTRY glProgramBinaryOES(GLuint program,GLenum binaryFormat,const void *binary,GLint length);
GLAPI  void  APIENTRY glProgramBufferParametersIivNV(GLenum target,GLuint bindingIndex,GLuint wordIndex,GLsizei count,const GLint *params);
GLAPI  void  APIENTRY glProgramBufferParametersIuivNV(GLenum target,GLuint bindingIndex,GLuint wordIndex,GLsizei count,const GLuint *params);
GLAPI  void  APIENTRY glProgramBufferParametersfvNV(GLenum target,GLuint bindingIndex,GLuint wordIndex,GLsizei count,const GLfloat *params);
GLAPI  void  APIENTRY glProgramEnvParameter4dARB(GLenum target,GLuint index,GLdouble x,GLdouble y,GLdouble z,GLdouble w);
GLAPI  void  APIENTRY glProgramEnvParameter4dvARB(GLenum target,GLuint index,const GLdouble *params);
GLAPI  void  APIENTRY glProgramEnvParameter4fARB(GLenum target,GLuint index,GLfloat x,GLfloat y,GLfloat z,GLfloat w);
GLAPI  void  APIENTRY glProgramEnvParameter4fvARB(GLenum target,GLuint index,const GLfloat *params);
GLAPI  void  APIENTRY glProgramEnvParameterI4iNV(GLenum target,GLuint index,GLint x,GLint y,GLint z,GLint w);
GLAPI  void  APIENTRY glProgramEnvParameterI4ivNV(GLenum target,GLuint index,const GLint *params);
GLAPI  void  APIENTRY glProgramEnvParameterI4uiNV(GLenum target,GLuint index,GLuint x,GLuint y,GLuint z,GLuint w);
GLAPI  void  APIENTRY glProgramEnvParameterI4uivNV(GLenum target,GLuint index,const GLuint *params);
GLAPI  void  APIENTRY glProgramEnvParameters4fvEXT(GLenum target,GLuint index,GLsizei count,const GLfloat *params);
GLAPI  void  APIENTRY glProgramEnvParametersI4ivNV(GLenum target,GLuint index,GLsizei count,const GLint *params);
GLAPI  void  APIENTRY glProgramEnvParametersI4uivNV(GLenum target,GLuint index,GLsizei count,const GLuint *params);
GLAPI  void  APIENTRY glProgramLocalParameter4dARB(GLenum target,GLuint index,GLdouble x,GLdouble y,GLdouble z,GLdouble w);
GLAPI  void  APIENTRY glProgramLocalParameter4dvARB(GLenum target,GLuint index,const GLdouble *params);
GLAPI  void  APIENTRY glProgramLocalParameter4fARB(GLenum target,GLuint index,GLfloat x,GLfloat y,GLfloat z,GLfloat w);
GLAPI  void  APIENTRY glProgramLocalParameter4fvARB(GLenum target,GLuint index,const GLfloat *params);
GLAPI  void  APIENTRY glProgramLocalParameterI4iNV(GLenum target,GLuint index,GLint x,GLint y,GLint z,GLint w);
GLAPI  void  APIENTRY glProgramLocalParameterI4ivNV(GLenum target,GLuint index,const GLint *params);
GLAPI  void  APIENTRY glProgramLocalParameterI4uiNV(GLenum target,GLuint index,GLuint x,GLuint y,GLuint z,GLuint w);
GLAPI  void  APIENTRY glProgramLocalParameterI4uivNV(GLenum target,GLuint index,const GLuint *params);
GLAPI  void  APIENTRY glProgramLocalParameters4fvEXT(GLenum target,GLuint index,GLsizei count,const GLfloat *params);
GLAPI  void  APIENTRY glProgramLocalParametersI4ivNV(GLenum target,GLuint index,GLsizei count,const GLint *params);
GLAPI  void  APIENTRY glProgramLocalParametersI4uivNV(GLenum target,GLuint index,GLsizei count,const GLuint *params);
GLAPI  void  APIENTRY glProgramNamedParameter4dNV(GLuint id,GLsizei len,const GLubyte *name,GLdouble x,GLdouble y,GLdouble z,GLdouble w);
GLAPI  void  APIENTRY glProgramNamedParameter4dvNV(GLuint id,GLsizei len,const GLubyte *name,const GLdouble *v);
GLAPI  void  APIENTRY glProgramNamedParameter4fNV(GLuint id,GLsizei len,const GLubyte *name,GLfloat x,GLfloat y,GLfloat z,GLfloat w);
GLAPI  void  APIENTRY glProgramNamedParameter4fvNV(GLuint id,GLsizei len,const GLubyte *name,const GLfloat *v);
GLAPI  void  APIENTRY glProgramParameter4dNV(GLenum target,GLuint index,GLdouble x,GLdouble y,GLdouble z,GLdouble w);
GLAPI  void  APIENTRY glProgramParameter4dvNV(GLenum target,GLuint index,const GLdouble *v);
GLAPI  void  APIENTRY glProgramParameter4fNV(GLenum target,GLuint index,GLfloat x,GLfloat y,GLfloat z,GLfloat w);
GLAPI  void  APIENTRY glProgramParameter4fvNV(GLenum target,GLuint index,const GLfloat *v);
GLAPI  void  APIENTRY glProgramParameteri(GLuint program,GLenum pname,GLint value);
GLAPI  void  APIENTRY glProgramParameteriARB(GLuint program,GLenum pname,GLint value);
GLAPI  void  APIENTRY glProgramParameteriEXT(GLuint program,GLenum pname,GLint value);
GLAPI  void  APIENTRY glProgramParameters4dvNV(GLenum target,GLuint index,GLsizei count,const GLdouble *v);
GLAPI  void  APIENTRY glProgramParameters4fvNV(GLenum target,GLuint index,GLsizei count,const GLfloat *v);
GLAPI  void  APIENTRY glProgramStringARB(GLenum target,GLenum format,GLsizei len,const void *string);
GLAPI  void  APIENTRY glProgramSubroutineParametersuivNV(GLenum target,GLsizei count,const GLuint *params);
GLAPI  void  APIENTRY glProgramUniform1d(GLuint program,GLint location,GLdouble v0);
GLAPI  void  APIENTRY glProgramUniform1dEXT(GLuint program,GLint location,GLdouble x);
GLAPI  void  APIENTRY glProgramUniform1dv(GLuint program,GLint location,GLsizei count,const GLdouble *value);
GLAPI  void  APIENTRY glProgramUniform1dvEXT(GLuint program,GLint location,GLsizei count,const GLdouble *value);
GLAPI  void  APIENTRY glProgramUniform1f(GLuint program,GLint location,GLfloat v0);
GLAPI  void  APIENTRY glProgramUniform1fEXT(GLuint program,GLint location,GLfloat v0);
GLAPI  void  APIENTRY glProgramUniform1fv(GLuint program,GLint location,GLsizei count,const GLfloat *value);
GLAPI  void  APIENTRY glProgramUniform1fvEXT(GLuint program,GLint location,GLsizei count,const GLfloat *value);
GLAPI  void  APIENTRY glProgramUniform1i(GLuint program,GLint location,GLint v0);
GLAPI  void  APIENTRY glProgramUniform1i64NV(GLuint program,GLint location,GLint64EXT x);
GLAPI  void  APIENTRY glProgramUniform1i64vNV(GLuint program,GLint location,GLsizei count,const GLint64EXT *value);
GLAPI  void  APIENTRY glProgramUniform1iEXT(GLuint program,GLint location,GLint v0);
GLAPI  void  APIENTRY glProgramUniform1iv(GLuint program,GLint location,GLsizei count,const GLint *value);
GLAPI  void  APIENTRY glProgramUniform1ivEXT(GLuint program,GLint location,GLsizei count,const GLint *value);
GLAPI  void  APIENTRY glProgramUniform1ui(GLuint program,GLint location,GLuint v0);
GLAPI  void  APIENTRY glProgramUniform1ui64NV(GLuint program,GLint location,GLuint64EXT x);
GLAPI  void  APIENTRY glProgramUniform1ui64vNV(GLuint program,GLint location,GLsizei count,const GLuint64EXT *value);
GLAPI  void  APIENTRY glProgramUniform1uiEXT(GLuint program,GLint location,GLuint v0);
GLAPI  void  APIENTRY glProgramUniform1uiv(GLuint program,GLint location,GLsizei count,const GLuint *value);
GLAPI  void  APIENTRY glProgramUniform1uivEXT(GLuint program,GLint location,GLsizei count,const GLuint *value);
GLAPI  void  APIENTRY glProgramUniform2d(GLuint program,GLint location,GLdouble v0,GLdouble v1);
GLAPI  void  APIENTRY glProgramUniform2dEXT(GLuint program,GLint location,GLdouble x,GLdouble y);
GLAPI  void  APIENTRY glProgramUniform2dv(GLuint program,GLint location,GLsizei count,const GLdouble *value);
GLAPI  void  APIENTRY glProgramUniform2dvEXT(GLuint program,GLint location,GLsizei count,const GLdouble *value);
GLAPI  void  APIENTRY glProgramUniform2f(GLuint program,GLint location,GLfloat v0,GLfloat v1);
GLAPI  void  APIENTRY glProgramUniform2fEXT(GLuint program,GLint location,GLfloat v0,GLfloat v1);
GLAPI  void  APIENTRY glProgramUniform2fv(GLuint program,GLint location,GLsizei count,const GLfloat *value);
GLAPI  void  APIENTRY glProgramUniform2fvEXT(GLuint program,GLint location,GLsizei count,const GLfloat *value);
GLAPI  void  APIENTRY glProgramUniform2i(GLuint program,GLint location,GLint v0,GLint v1);
GLAPI  void  APIENTRY glProgramUniform2i64NV(GLuint program,GLint location,GLint64EXT x,GLint64EXT y);
GLAPI  void  APIENTRY glProgramUniform2i64vNV(GLuint program,GLint location,GLsizei count,const GLint64EXT *value);
GLAPI  void  APIENTRY glProgramUniform2iEXT(GLuint program,GLint location,GLint v0,GLint v1);
GLAPI  void  APIENTRY glProgramUniform2iv(GLuint program,GLint location,GLsizei count,const GLint *value);
GLAPI  void  APIENTRY glProgramUniform2ivEXT(GLuint program,GLint location,GLsizei count,const GLint *value);
GLAPI  void  APIENTRY glProgramUniform2ui(GLuint program,GLint location,GLuint v0,GLuint v1);
GLAPI  void  APIENTRY glProgramUniform2ui64NV(GLuint program,GLint location,GLuint64EXT x,GLuint64EXT y);
GLAPI  void  APIENTRY glProgramUniform2ui64vNV(GLuint program,GLint location,GLsizei count,const GLuint64EXT *value);
GLAPI  void  APIENTRY glProgramUniform2uiEXT(GLuint program,GLint location,GLuint v0,GLuint v1);
GLAPI  void  APIENTRY glProgramUniform2uiv(GLuint program,GLint location,GLsizei count,const GLuint *value);
GLAPI  void  APIENTRY glProgramUniform2uivEXT(GLuint program,GLint location,GLsizei count,const GLuint *value);
GLAPI  void  APIENTRY glProgramUniform3d(GLuint program,GLint location,GLdouble v0,GLdouble v1,GLdouble v2);
GLAPI  void  APIENTRY glProgramUniform3dEXT(GLuint program,GLint location,GLdouble x,GLdouble y,GLdouble z);
GLAPI  void  APIENTRY glProgramUniform3dv(GLuint program,GLint location,GLsizei count,const GLdouble *value);
GLAPI  void  APIENTRY glProgramUniform3dvEXT(GLuint program,GLint location,GLsizei count,const GLdouble *value);
GLAPI  void  APIENTRY glProgramUniform3f(GLuint program,GLint location,GLfloat v0,GLfloat v1,GLfloat v2);
GLAPI  void  APIENTRY glProgramUniform3fEXT(GLuint program,GLint location,GLfloat v0,GLfloat v1,GLfloat v2);
GLAPI  void  APIENTRY glProgramUniform3fv(GLuint program,GLint location,GLsizei count,const GLfloat *value);
GLAPI  void  APIENTRY glProgramUniform3fvEXT(GLuint program,GLint location,GLsizei count,const GLfloat *value);
GLAPI  void  APIENTRY glProgramUniform3i(GLuint program,GLint location,GLint v0,GLint v1,GLint v2);
GLAPI  void  APIENTRY glProgramUniform3i64NV(GLuint program,GLint location,GLint64EXT x,GLint64EXT y,GLint64EXT z);
GLAPI  void  APIENTRY glProgramUniform3i64vNV(GLuint program,GLint location,GLsizei count,const GLint64EXT *value);
GLAPI  void  APIENTRY glProgramUniform3iEXT(GLuint program,GLint location,GLint v0,GLint v1,GLint v2);
GLAPI  void  APIENTRY glProgramUniform3iv(GLuint program,GLint location,GLsizei count,const GLint *value);
GLAPI  void  APIENTRY glProgramUniform3ivEXT(GLuint program,GLint location,GLsizei count,const GLint *value);
GLAPI  void  APIENTRY glProgramUniform3ui(GLuint program,GLint location,GLuint v0,GLuint v1,GLuint v2);
GLAPI  void  APIENTRY glProgramUniform3ui64NV(GLuint program,GLint location,GLuint64EXT x,GLuint64EXT y,GLuint64EXT z);
GLAPI  void  APIENTRY glProgramUniform3ui64vNV(GLuint program,GLint location,GLsizei count,const GLuint64EXT *value);
GLAPI  void  APIENTRY glProgramUniform3uiEXT(GLuint program,GLint location,GLuint v0,GLuint v1,GLuint v2);
GLAPI  void  APIENTRY glProgramUniform3uiv(GLuint program,GLint location,GLsizei count,const GLuint *value);
GLAPI  void  APIENTRY glProgramUniform3uivEXT(GLuint program,GLint location,GLsizei count,const GLuint *value);
GLAPI  void  APIENTRY glProgramUniform4d(GLuint program,GLint location,GLdouble v0,GLdouble v1,GLdouble v2,GLdouble v3);
GLAPI  void  APIENTRY glProgramUniform4dEXT(GLuint program,GLint location,GLdouble x,GLdouble y,GLdouble z,GLdouble w);
GLAPI  void  APIENTRY glProgramUniform4dv(GLuint program,GLint location,GLsizei count,const GLdouble *value);
GLAPI  void  APIENTRY glProgramUniform4dvEXT(GLuint program,GLint location,GLsizei count,const GLdouble *value);
GLAPI  void  APIENTRY glProgramUniform4f(GLuint program,GLint location,GLfloat v0,GLfloat v1,GLfloat v2,GLfloat v3);
GLAPI  void  APIENTRY glProgramUniform4fEXT(GLuint program,GLint location,GLfloat v0,GLfloat v1,GLfloat v2,GLfloat v3);
GLAPI  void  APIENTRY glProgramUniform4fv(GLuint program,GLint location,GLsizei count,const GLfloat *value);
GLAPI  void  APIENTRY glProgramUniform4fvEXT(GLuint program,GLint location,GLsizei count,const GLfloat *value);
GLAPI  void  APIENTRY glProgramUniform4i(GLuint program,GLint location,GLint v0,GLint v1,GLint v2,GLint v3);
GLAPI  void  APIENTRY glProgramUniform4i64NV(GLuint program,GLint location,GLint64EXT x,GLint64EXT y,GLint64EXT z,GLint64EXT w);
GLAPI  void  APIENTRY glProgramUniform4i64vNV(GLuint program,GLint location,GLsizei count,const GLint64EXT *value);
GLAPI  void  APIENTRY glProgramUniform4iEXT(GLuint program,GLint location,GLint v0,GLint v1,GLint v2,GLint v3);
GLAPI  void  APIENTRY glProgramUniform4iv(GLuint program,GLint location,GLsizei count,const GLint *value);
GLAPI  void  APIENTRY glProgramUniform4ivEXT(GLuint program,GLint location,GLsizei count,const GLint *value);
GLAPI  void  APIENTRY glProgramUniform4ui(GLuint program,GLint location,GLuint v0,GLuint v1,GLuint v2,GLuint v3);
GLAPI  void  APIENTRY glProgramUniform4ui64NV(GLuint program,GLint location,GLuint64EXT x,GLuint64EXT y,GLuint64EXT z,GLuint64EXT w);
GLAPI  void  APIENTRY glProgramUniform4ui64vNV(GLuint program,GLint location,GLsizei count,const GLuint64EXT *value);
GLAPI  void  APIENTRY glProgramUniform4uiEXT(GLuint program,GLint location,GLuint v0,GLuint v1,GLuint v2,GLuint v3);
GLAPI  void  APIENTRY glProgramUniform4uiv(GLuint program,GLint location,GLsizei count,const GLuint *value);
GLAPI  void  APIENTRY glProgramUniform4uivEXT(GLuint program,GLint location,GLsizei count,const GLuint *value);
GLAPI  void  APIENTRY glProgramUniformHandleui64ARB(GLuint program,GLint location,GLuint64 value);
GLAPI  void  APIENTRY glProgramUniformHandleui64NV(GLuint program,GLint location,GLuint64 value);
GLAPI  void  APIENTRY glProgramUniformHandleui64vARB(GLuint program,GLint location,GLsizei count,const GLuint64 *values);
GLAPI  void  APIENTRY glProgramUniformHandleui64vNV(GLuint program,GLint location,GLsizei count,const GLuint64 *values);
GLAPI  void  APIENTRY glProgramUniformMatrix2dv(GLuint program,GLint location,GLsizei count,GLboolean transpose,const GLdouble *value);
GLAPI  void  APIENTRY glProgramUniformMatrix2dvEXT(GLuint program,GLint location,GLsizei count,GLboolean transpose,const GLdouble *value);
GLAPI  void  APIENTRY glProgramUniformMatrix2fv(GLuint program,GLint location,GLsizei count,GLboolean transpose,const GLfloat *value);
GLAPI  void  APIENTRY glProgramUniformMatrix2fvEXT(GLuint program,GLint location,GLsizei count,GLboolean transpose,const GLfloat *value);
GLAPI  void  APIENTRY glProgramUniformMatrix2x3dv(GLuint program,GLint location,GLsizei count,GLboolean transpose,const GLdouble *value);
GLAPI  void  APIENTRY glProgramUniformMatrix2x3dvEXT(GLuint program,GLint location,GLsizei count,GLboolean transpose,const GLdouble *value);
GLAPI  void  APIENTRY glProgramUniformMatrix2x3fv(GLuint program,GLint location,GLsizei count,GLboolean transpose,const GLfloat *value);
GLAPI  void  APIENTRY glProgramUniformMatrix2x3fvEXT(GLuint program,GLint location,GLsizei count,GLboolean transpose,const GLfloat *value);
GLAPI  void  APIENTRY glProgramUniformMatrix2x4dv(GLuint program,GLint location,GLsizei count,GLboolean transpose,const GLdouble *value);
GLAPI  void  APIENTRY glProgramUniformMatrix2x4dvEXT(GLuint program,GLint location,GLsizei count,GLboolean transpose,const GLdouble *value);
GLAPI  void  APIENTRY glProgramUniformMatrix2x4fv(GLuint program,GLint location,GLsizei count,GLboolean transpose,const GLfloat *value);
GLAPI  void  APIENTRY glProgramUniformMatrix2x4fvEXT(GLuint program,GLint location,GLsizei count,GLboolean transpose,const GLfloat *value);
GLAPI  void  APIENTRY glProgramUniformMatrix3dv(GLuint program,GLint location,GLsizei count,GLboolean transpose,const GLdouble *value);
GLAPI  void  APIENTRY glProgramUniformMatrix3dvEXT(GLuint program,GLint location,GLsizei count,GLboolean transpose,const GLdouble *value);
GLAPI  void  APIENTRY glProgramUniformMatrix3fv(GLuint program,GLint location,GLsizei count,GLboolean transpose,const GLfloat *value);
GLAPI  void  APIENTRY glProgramUniformMatrix3fvEXT(GLuint program,GLint location,GLsizei count,GLboolean transpose,const GLfloat *value);
GLAPI  void  APIENTRY glProgramUniformMatrix3x2dv(GLuint program,GLint location,GLsizei count,GLboolean transpose,const GLdouble *value);
GLAPI  void  APIENTRY glProgramUniformMatrix3x2dvEXT(GLuint program,GLint location,GLsizei count,GLboolean transpose,const GLdouble *value);
GLAPI  void  APIENTRY glProgramUniformMatrix3x2fv(GLuint program,GLint location,GLsizei count,GLboolean transpose,const GLfloat *value);
GLAPI  void  APIENTRY glProgramUniformMatrix3x2fvEXT(GLuint program,GLint location,GLsizei count,GLboolean transpose,const GLfloat *value);
GLAPI  void  APIENTRY glProgramUniformMatrix3x4dv(GLuint program,GLint location,GLsizei count,GLboolean transpose,const GLdouble *value);
GLAPI  void  APIENTRY glProgramUniformMatrix3x4dvEXT(GLuint program,GLint location,GLsizei count,GLboolean transpose,const GLdouble *value);
GLAPI  void  APIENTRY glProgramUniformMatrix3x4fv(GLuint program,GLint location,GLsizei count,GLboolean transpose,const GLfloat *value);
GLAPI  void  APIENTRY glProgramUniformMatrix3x4fvEXT(GLuint program,GLint location,GLsizei count,GLboolean transpose,const GLfloat *value);
GLAPI  void  APIENTRY glProgramUniformMatrix4dv(GLuint program,GLint location,GLsizei count,GLboolean transpose,const GLdouble *value);
GLAPI  void  APIENTRY glProgramUniformMatrix4dvEXT(GLuint program,GLint location,GLsizei count,GLboolean transpose,const GLdouble *value);
GLAPI  void  APIENTRY glProgramUniformMatrix4fv(GLuint program,GLint location,GLsizei count,GLboolean transpose,const GLfloat *value);
GLAPI  void  APIENTRY glProgramUniformMatrix4fvEXT(GLuint program,GLint location,GLsizei count,GLboolean transpose,const GLfloat *value);
GLAPI  void  APIENTRY glProgramUniformMatrix4x2dv(GLuint program,GLint location,GLsizei count,GLboolean transpose,const GLdouble *value);
GLAPI  void  APIENTRY glProgramUniformMatrix4x2dvEXT(GLuint program,GLint location,GLsizei count,GLboolean transpose,const GLdouble *value);
GLAPI  void  APIENTRY glProgramUniformMatrix4x2fv(GLuint program,GLint location,GLsizei count,GLboolean transpose,const GLfloat *value);
GLAPI  void  APIENTRY glProgramUniformMatrix4x2fvEXT(GLuint program,GLint location,GLsizei count,GLboolean transpose,const GLfloat *value);
GLAPI  void  APIENTRY glProgramUniformMatrix4x3dv(GLuint program,GLint location,GLsizei count,GLboolean transpose,const GLdouble *value);
GLAPI  void  APIENTRY glProgramUniformMatrix4x3dvEXT(GLuint program,GLint location,GLsizei count,GLboolean transpose,const GLdouble *value);
GLAPI  void  APIENTRY glProgramUniformMatrix4x3fv(GLuint program,GLint location,GLsizei count,GLboolean transpose,const GLfloat *value);
GLAPI  void  APIENTRY glProgramUniformMatrix4x3fvEXT(GLuint program,GLint location,GLsizei count,GLboolean transpose,const GLfloat *value);
GLAPI  void  APIENTRY glProgramUniformui64NV(GLuint program,GLint location,GLuint64EXT value);
GLAPI  void  APIENTRY glProgramUniformui64vNV(GLuint program,GLint location,GLsizei count,const GLuint64EXT *value);
GLAPI  void  APIENTRY glProgramVertexLimitNV(GLenum target,GLint limit);
GLAPI  void  APIENTRY glProvokingVertex(GLenum mode);
GLAPI  void  APIENTRY glProvokingVertexEXT(GLenum mode);
GLAPI  void  APIENTRY glPushAttrib(GLbitfield mask);
GLAPI  void  APIENTRY glPushClientAttrib(GLbitfield mask);
GLAPI  void  APIENTRY glPushClientAttribDefaultEXT(GLbitfield mask);
GLAPI  void  APIENTRY glPushDebugGroup(GLenum source,GLuint id,GLsizei length,const GLchar *message);
GLAPI  void  APIENTRY glPushDebugGroupKHR(GLenum source,GLuint id,GLsizei length,const GLchar *message);
GLAPI  void  APIENTRY glPushGroupMarkerEXT(GLsizei length,const GLchar *marker);
GLAPI  void  APIENTRY glPushName(GLuint name);
GLAPI  void  APIENTRY glQueryCounter(GLuint id,GLenum target);
GLAPI  void  APIENTRY glQueryCounterEXT(GLuint id,GLenum target);
GLAPI  GLbitfield  APIENTRY glQueryMatrixxOES(GLfixed *mantissa,GLint *exponent);
GLAPI  void  APIENTRY glQueryObjectParameteruiAMD(GLenum target,GLuint id,GLenum pname,GLuint param);
GLAPI  void  APIENTRY glRasterPos2d(GLdouble x,GLdouble y);
GLAPI  void  APIENTRY glRasterPos2dv(const GLdouble *v);
GLAPI  void  APIENTRY glRasterPos2f(GLfloat x,GLfloat y);
GLAPI  void  APIENTRY glRasterPos2fv(const GLfloat *v);
GLAPI  void  APIENTRY glRasterPos2i(GLint x,GLint y);
GLAPI  void  APIENTRY glRasterPos2iv(const GLint *v);
GLAPI  void  APIENTRY glRasterPos2s(GLshort x,GLshort y);
GLAPI  void  APIENTRY glRasterPos2sv(const GLshort *v);
GLAPI  void  APIENTRY glRasterPos2xOES(GLfixed x,GLfixed y);
GLAPI  void  APIENTRY glRasterPos2xvOES(const GLfixed *coords);
GLAPI  void  APIENTRY glRasterPos3d(GLdouble x,GLdouble y,GLdouble z);
GLAPI  void  APIENTRY glRasterPos3dv(const GLdouble *v);
GLAPI  void  APIENTRY glRasterPos3f(GLfloat x,GLfloat y,GLfloat z);
GLAPI  void  APIENTRY glRasterPos3fv(const GLfloat *v);
GLAPI  void  APIENTRY glRasterPos3i(GLint x,GLint y,GLint z);
GLAPI  void  APIENTRY glRasterPos3iv(const GLint *v);
GLAPI  void  APIENTRY glRasterPos3s(GLshort x,GLshort y,GLshort z);
GLAPI  void  APIENTRY glRasterPos3sv(const GLshort *v);
GLAPI  void  APIENTRY glRasterPos3xOES(GLfixed x,GLfixed y,GLfixed z);
GLAPI  void  APIENTRY glRasterPos3xvOES(const GLfixed *coords);
GLAPI  void  APIENTRY glRasterPos4d(GLdouble x,GLdouble y,GLdouble z,GLdouble w);
GLAPI  void  APIENTRY glRasterPos4dv(const GLdouble *v);
GLAPI  void  APIENTRY glRasterPos4f(GLfloat x,GLfloat y,GLfloat z,GLfloat w);
GLAPI  void  APIENTRY glRasterPos4fv(const GLfloat *v);
GLAPI  void  APIENTRY glRasterPos4i(GLint x,GLint y,GLint z,GLint w);
GLAPI  void  APIENTRY glRasterPos4iv(const GLint *v);
GLAPI  void  APIENTRY glRasterPos4s(GLshort x,GLshort y,GLshort z,GLshort w);
GLAPI  void  APIENTRY glRasterPos4sv(const GLshort *v);
GLAPI  void  APIENTRY glRasterPos4xOES(GLfixed x,GLfixed y,GLfixed z,GLfixed w);
GLAPI  void  APIENTRY glRasterPos4xvOES(const GLfixed *coords);
GLAPI  void  APIENTRY glReadBuffer(GLenum mode);
GLAPI  void  APIENTRY glReadBufferIndexedEXT(GLenum src,GLint index);
GLAPI  void  APIENTRY glReadBufferNV(GLenum mode);
GLAPI  void  APIENTRY glReadInstrumentsSGIX(GLint marker);
GLAPI  void  APIENTRY glReadPixels(GLint x,GLint y,GLsizei width,GLsizei height,GLenum format,GLenum type,void *pixels);
GLAPI  void  APIENTRY glReadnPixelsARB(GLint x,GLint y,GLsizei width,GLsizei height,GLenum format,GLenum type,GLsizei bufSize,void *data);
GLAPI  void  APIENTRY glReadnPixelsEXT(GLint x,GLint y,GLsizei width,GLsizei height,GLenum format,GLenum type,GLsizei bufSize,void *data);
GLAPI  void  APIENTRY glRectd(GLdouble x1,GLdouble y1,GLdouble x2,GLdouble y2);
GLAPI  void  APIENTRY glRectdv(const GLdouble *v1,const GLdouble *v2);
GLAPI  void  APIENTRY glRectf(GLfloat x1,GLfloat y1,GLfloat x2,GLfloat y2);
GLAPI  void  APIENTRY glRectfv(const GLfloat *v1,const GLfloat *v2);
GLAPI  void  APIENTRY glRecti(GLint x1,GLint y1,GLint x2,GLint y2);
GLAPI  void  APIENTRY glRectiv(const GLint *v1,const GLint *v2);
GLAPI  void  APIENTRY glRects(GLshort x1,GLshort y1,GLshort x2,GLshort y2);
GLAPI  void  APIENTRY glRectsv(const GLshort *v1,const GLshort *v2);
GLAPI  void  APIENTRY glRectxOES(GLfixed x1,GLfixed y1,GLfixed x2,GLfixed y2);
GLAPI  void  APIENTRY glRectxvOES(const GLfixed *v1,const GLfixed *v2);
GLAPI  void  APIENTRY glReferencePlaneSGIX(const GLdouble *equation);
GLAPI  GLint  APIENTRY glRenderMode(GLenum mode);
GLAPI  void  APIENTRY glRenderbufferStorage(GLenum target,GLenum internalformat,GLsizei width,GLsizei height);
GLAPI  void  APIENTRY glRenderbufferStorageEXT(GLenum target,GLenum internalformat,GLsizei width,GLsizei height);
GLAPI  void  APIENTRY glRenderbufferStorageMultisample(GLenum target,GLsizei samples,GLenum internalformat,GLsizei width,GLsizei height);
GLAPI  void  APIENTRY glRenderbufferStorageMultisampleANGLE(GLenum target,GLsizei samples,GLenum internalformat,GLsizei width,GLsizei height);
GLAPI  void  APIENTRY glRenderbufferStorageMultisampleAPPLE(GLenum target,GLsizei samples,GLenum internalformat,GLsizei width,GLsizei height);
GLAPI  void  APIENTRY glRenderbufferStorageMultisampleCoverageNV(GLenum target,GLsizei coverageSamples,GLsizei colorSamples,GLenum internalformat,GLsizei width,GLsizei height);
GLAPI  void  APIENTRY glRenderbufferStorageMultisampleEXT(GLenum target,GLsizei samples,GLenum internalformat,GLsizei width,GLsizei height);
GLAPI  void  APIENTRY glRenderbufferStorageMultisampleIMG(GLenum target,GLsizei samples,GLenum internalformat,GLsizei width,GLsizei height);
GLAPI  void  APIENTRY glRenderbufferStorageMultisampleNV(GLenum target,GLsizei samples,GLenum internalformat,GLsizei width,GLsizei height);
GLAPI  void  APIENTRY glRenderbufferStorageOES(GLenum target,GLenum internalformat,GLsizei width,GLsizei height);
GLAPI  void  APIENTRY glReplacementCodePointerSUN(GLenum type,GLsizei stride,const void **pointer);
GLAPI  void  APIENTRY glReplacementCodeubSUN(GLubyte code);
GLAPI  void  APIENTRY glReplacementCodeubvSUN(const GLubyte *code);
GLAPI  void  APIENTRY glReplacementCodeuiColor3fVertex3fSUN(GLuint rc,GLfloat r,GLfloat g,GLfloat b,GLfloat x,GLfloat y,GLfloat z);
GLAPI  void  APIENTRY glReplacementCodeuiColor3fVertex3fvSUN(const GLuint *rc,const GLfloat *c,const GLfloat *v);
GLAPI  void  APIENTRY glReplacementCodeuiColor4fNormal3fVertex3fSUN(GLuint rc,GLfloat r,GLfloat g,GLfloat b,GLfloat a,GLfloat nx,GLfloat ny,GLfloat nz,GLfloat x,GLfloat y,GLfloat z);
GLAPI  void  APIENTRY glReplacementCodeuiColor4fNormal3fVertex3fvSUN(const GLuint *rc,const GLfloat *c,const GLfloat *n,const GLfloat *v);
GLAPI  void  APIENTRY glReplacementCodeuiColor4ubVertex3fSUN(GLuint rc,GLubyte r,GLubyte g,GLubyte b,GLubyte a,GLfloat x,GLfloat y,GLfloat z);
GLAPI  void  APIENTRY glReplacementCodeuiColor4ubVertex3fvSUN(const GLuint *rc,const GLubyte *c,const GLfloat *v);
GLAPI  void  APIENTRY glReplacementCodeuiNormal3fVertex3fSUN(GLuint rc,GLfloat nx,GLfloat ny,GLfloat nz,GLfloat x,GLfloat y,GLfloat z);
GLAPI  void  APIENTRY glReplacementCodeuiNormal3fVertex3fvSUN(const GLuint *rc,const GLfloat *n,const GLfloat *v);
GLAPI  void  APIENTRY glReplacementCodeuiSUN(GLuint code);
GLAPI  void  APIENTRY glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN(GLuint rc,GLfloat s,GLfloat t,GLfloat r,GLfloat g,GLfloat b,GLfloat a,GLfloat nx,GLfloat ny,GLfloat nz,GLfloat x,GLfloat y,GLfloat z);
GLAPI  void  APIENTRY glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN(const GLuint *rc,const GLfloat *tc,const GLfloat *c,const GLfloat *n,const GLfloat *v);
GLAPI  void  APIENTRY glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN(GLuint rc,GLfloat s,GLfloat t,GLfloat nx,GLfloat ny,GLfloat nz,GLfloat x,GLfloat y,GLfloat z);
GLAPI  void  APIENTRY glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN(const GLuint *rc,const GLfloat *tc,const GLfloat *n,const GLfloat *v);
GLAPI  void  APIENTRY glReplacementCodeuiTexCoord2fVertex3fSUN(GLuint rc,GLfloat s,GLfloat t,GLfloat x,GLfloat y,GLfloat z);
GLAPI  void  APIENTRY glReplacementCodeuiTexCoord2fVertex3fvSUN(const GLuint *rc,const GLfloat *tc,const GLfloat *v);
GLAPI  void  APIENTRY glReplacementCodeuiVertex3fSUN(GLuint rc,GLfloat x,GLfloat y,GLfloat z);
GLAPI  void  APIENTRY glReplacementCodeuiVertex3fvSUN(const GLuint *rc,const GLfloat *v);
GLAPI  void  APIENTRY glReplacementCodeuivSUN(const GLuint *code);
GLAPI  void  APIENTRY glReplacementCodeusSUN(GLushort code);
GLAPI  void  APIENTRY glReplacementCodeusvSUN(const GLushort *code);
GLAPI  void  APIENTRY glRequestResidentProgramsNV(GLsizei n,const GLuint *programs);
GLAPI  void  APIENTRY glResetHistogram(GLenum target);
GLAPI  void  APIENTRY glResetHistogramEXT(GLenum target);
GLAPI  void  APIENTRY glResetMinmax(GLenum target);
GLAPI  void  APIENTRY glResetMinmaxEXT(GLenum target);
GLAPI  void  APIENTRY glRotated(GLdouble angle,GLdouble x,GLdouble y,GLdouble z);
GLAPI  void  APIENTRY glRotatef(GLfloat angle,GLfloat x,GLfloat y,GLfloat z);
GLAPI  void  APIENTRY glRotatex(GLfixed angle,GLfixed x,GLfixed y,GLfixed z);
GLAPI  void  APIENTRY glRotatexOES(GLfixed angle,GLfixed x,GLfixed y,GLfixed z);
GLAPI  void  APIENTRY glSampleCoverage(GLfloat value,GLboolean invert);
GLAPI  void  APIENTRY glSampleCoverageARB(GLfloat value,GLboolean invert);
GLAPI  void  APIENTRY glSampleCoverageOES(GLfixed value,GLboolean invert);
GLAPI  void  APIENTRY glSampleMapATI(GLuint dst,GLuint interp,GLenum swizzle);
GLAPI  void  APIENTRY glSampleMaskEXT(GLclampf value,GLboolean invert);
GLAPI  void  APIENTRY glSampleMaskIndexedNV(GLuint index,GLbitfield mask);
GLAPI  void  APIENTRY glSampleMaskSGIS(GLclampf value,GLboolean invert);
GLAPI  void  APIENTRY glSampleMaski(GLuint maskNumber,GLbitfield mask);
GLAPI  void  APIENTRY glSamplePatternEXT(GLenum pattern);
GLAPI  void  APIENTRY glSamplePatternSGIS(GLenum pattern);
GLAPI  void  APIENTRY glSamplerParameterIiv(GLuint sampler,GLenum pname,const GLint *param);
GLAPI  void  APIENTRY glSamplerParameterIivEXT(GLuint sampler,GLenum pname,const GLint *param);
GLAPI  void  APIENTRY glSamplerParameterIuiv(GLuint sampler,GLenum pname,const GLuint *param);
GLAPI  void  APIENTRY glSamplerParameterIuivEXT(GLuint sampler,GLenum pname,const GLuint *param);
GLAPI  void  APIENTRY glSamplerParameterf(GLuint sampler,GLenum pname,GLfloat param);
GLAPI  void  APIENTRY glSamplerParameterfv(GLuint sampler,GLenum pname,const GLfloat *param);
GLAPI  void  APIENTRY glSamplerParameteri(GLuint sampler,GLenum pname,GLint param);
GLAPI  void  APIENTRY glSamplerParameteriv(GLuint sampler,GLenum pname,const GLint *param);
GLAPI  void  APIENTRY glScaled(GLdouble x,GLdouble y,GLdouble z);
GLAPI  void  APIENTRY glScalef(GLfloat x,GLfloat y,GLfloat z);
GLAPI  void  APIENTRY glScalex(GLfixed x,GLfixed y,GLfixed z);
GLAPI  void  APIENTRY glScalexOES(GLfixed x,GLfixed y,GLfixed z);
GLAPI  void  APIENTRY glScissor(GLint x,GLint y,GLsizei width,GLsizei height);
GLAPI  void  APIENTRY glScissorArrayv(GLuint first,GLsizei count,const GLint *v);
GLAPI  void  APIENTRY glScissorIndexed(GLuint index,GLint left,GLint bottom,GLsizei width,GLsizei height);
GLAPI  void  APIENTRY glScissorIndexedv(GLuint index,const GLint *v);
GLAPI  void  APIENTRY glSecondaryColor3b(GLbyte red,GLbyte green,GLbyte blue);
GLAPI  void  APIENTRY glSecondaryColor3bEXT(GLbyte red,GLbyte green,GLbyte blue);
GLAPI  void  APIENTRY glSecondaryColor3bv(const GLbyte *v);
GLAPI  void  APIENTRY glSecondaryColor3bvEXT(const GLbyte *v);
GLAPI  void  APIENTRY glSecondaryColor3d(GLdouble red,GLdouble green,GLdouble blue);
GLAPI  void  APIENTRY glSecondaryColor3dEXT(GLdouble red,GLdouble green,GLdouble blue);
GLAPI  void  APIENTRY glSecondaryColor3dv(const GLdouble *v);
GLAPI  void  APIENTRY glSecondaryColor3dvEXT(const GLdouble *v);
GLAPI  void  APIENTRY glSecondaryColor3f(GLfloat red,GLfloat green,GLfloat blue);
GLAPI  void  APIENTRY glSecondaryColor3fEXT(GLfloat red,GLfloat green,GLfloat blue);
GLAPI  void  APIENTRY glSecondaryColor3fv(const GLfloat *v);
GLAPI  void  APIENTRY glSecondaryColor3fvEXT(const GLfloat *v);
GLAPI  void  APIENTRY glSecondaryColor3hNV(GLhalfNV red,GLhalfNV green,GLhalfNV blue);
GLAPI  void  APIENTRY glSecondaryColor3hvNV(const GLhalfNV *v);
GLAPI  void  APIENTRY glSecondaryColor3i(GLint red,GLint green,GLint blue);
GLAPI  void  APIENTRY glSecondaryColor3iEXT(GLint red,GLint green,GLint blue);
GLAPI  void  APIENTRY glSecondaryColor3iv(const GLint *v);
GLAPI  void  APIENTRY glSecondaryColor3ivEXT(const GLint *v);
GLAPI  void  APIENTRY glSecondaryColor3s(GLshort red,GLshort green,GLshort blue);
GLAPI  void  APIENTRY glSecondaryColor3sEXT(GLshort red,GLshort green,GLshort blue);
GLAPI  void  APIENTRY glSecondaryColor3sv(const GLshort *v);
GLAPI  void  APIENTRY glSecondaryColor3svEXT(const GLshort *v);
GLAPI  void  APIENTRY glSecondaryColor3ub(GLubyte red,GLubyte green,GLubyte blue);
GLAPI  void  APIENTRY glSecondaryColor3ubEXT(GLubyte red,GLubyte green,GLubyte blue);
GLAPI  void  APIENTRY glSecondaryColor3ubv(const GLubyte *v);
GLAPI  void  APIENTRY glSecondaryColor3ubvEXT(const GLubyte *v);
GLAPI  void  APIENTRY glSecondaryColor3ui(GLuint red,GLuint green,GLuint blue);
GLAPI  void  APIENTRY glSecondaryColor3uiEXT(GLuint red,GLuint green,GLuint blue);
GLAPI  void  APIENTRY glSecondaryColor3uiv(const GLuint *v);
GLAPI  void  APIENTRY glSecondaryColor3uivEXT(const GLuint *v);
GLAPI  void  APIENTRY glSecondaryColor3us(GLushort red,GLushort green,GLushort blue);
GLAPI  void  APIENTRY glSecondaryColor3usEXT(GLushort red,GLushort green,GLushort blue);
GLAPI  void  APIENTRY glSecondaryColor3usv(const GLushort *v);
GLAPI  void  APIENTRY glSecondaryColor3usvEXT(const GLushort *v);
GLAPI  void  APIENTRY glSecondaryColorFormatNV(GLint size,GLenum type,GLsizei stride);
GLAPI  void  APIENTRY glSecondaryColorP3ui(GLenum type,GLuint color);
GLAPI  void  APIENTRY glSecondaryColorP3uiv(GLenum type,const GLuint *color);
GLAPI  void  APIENTRY glSecondaryColorPointer(GLint size,GLenum type,GLsizei stride,const void *pointer);
GLAPI  void  APIENTRY glSecondaryColorPointerEXT(GLint size,GLenum type,GLsizei stride,const void *pointer);
GLAPI  void  APIENTRY glSecondaryColorPointerListIBM(GLint size,GLenum type,GLint stride,const void **pointer,GLint ptrstride);
GLAPI  void  APIENTRY glSelectBuffer(GLsizei size,GLuint *buffer);
GLAPI  void  APIENTRY glSelectPerfMonitorCountersAMD(GLuint monitor,GLboolean enable,GLuint group,GLint numCounters,GLuint *counterList);
GLAPI  void  APIENTRY glSeparableFilter2D(GLenum target,GLenum internalformat,GLsizei width,GLsizei height,GLenum format,GLenum type,const void *row,const void *column);
GLAPI  void  APIENTRY glSeparableFilter2DEXT(GLenum target,GLenum internalformat,GLsizei width,GLsizei height,GLenum format,GLenum type,const void *row,const void *column);
GLAPI  void  APIENTRY glSetFenceAPPLE(GLuint fence);
GLAPI  void  APIENTRY glSetFenceNV(GLuint fence,GLenum condition);
GLAPI  void  APIENTRY glSetFragmentShaderConstantATI(GLuint dst,const GLfloat *value);
GLAPI  void  APIENTRY glSetInvariantEXT(GLuint id,GLenum type,const void *addr);
GLAPI  void  APIENTRY glSetLocalConstantEXT(GLuint id,GLenum type,const void *addr);
GLAPI  void  APIENTRY glSetMultisamplefvAMD(GLenum pname,GLuint index,const GLfloat *val);
GLAPI  void  APIENTRY glShadeModel(GLenum mode);
GLAPI  void  APIENTRY glShaderBinary(GLsizei count,const GLuint *shaders,GLenum binaryformat,const void *binary,GLsizei length);
GLAPI  void  APIENTRY glShaderOp1EXT(GLenum op,GLuint res,GLuint arg1);
GLAPI  void  APIENTRY glShaderOp2EXT(GLenum op,GLuint res,GLuint arg1,GLuint arg2);
GLAPI  void  APIENTRY glShaderOp3EXT(GLenum op,GLuint res,GLuint arg1,GLuint arg2,GLuint arg3);
GLAPI  void  APIENTRY glShaderSource(GLuint shader,GLsizei count,const GLchar *const*string,const GLint *length);
GLAPI  void  APIENTRY glShaderSourceARB(GLhandleARB shaderObj,GLsizei count,const GLcharARB **string,const GLint *length);
GLAPI  void  APIENTRY glShaderStorageBlockBinding(GLuint program,GLuint storageBlockIndex,GLuint storageBlockBinding);
GLAPI  void  APIENTRY glSharpenTexFuncSGIS(GLenum target,GLsizei n,const GLfloat *points);
GLAPI  void  APIENTRY glSpriteParameterfSGIX(GLenum pname,GLfloat param);
GLAPI  void  APIENTRY glSpriteParameterfvSGIX(GLenum pname,const GLfloat *params);
GLAPI  void  APIENTRY glSpriteParameteriSGIX(GLenum pname,GLint param);
GLAPI  void  APIENTRY glSpriteParameterivSGIX(GLenum pname,const GLint *params);
GLAPI  void  APIENTRY glStartTilingQCOM(GLuint x,GLuint y,GLuint width,GLuint height,GLbitfield preserveMask);
GLAPI  void  APIENTRY glStencilClearTagEXT(GLsizei stencilTagBits,GLuint stencilClearTag);
GLAPI  void  APIENTRY glStencilFillPathInstancedNV(GLsizei numPaths,GLenum pathNameType,const void *paths,GLuint pathBase,GLenum fillMode,GLuint mask,GLenum transformType,const GLfloat *transformValues);
GLAPI  void  APIENTRY glStencilFillPathNV(GLuint path,GLenum fillMode,GLuint mask);
GLAPI  void  APIENTRY glStencilFunc(GLenum func,GLint ref,GLuint mask);
GLAPI  void  APIENTRY glStencilFuncSeparate(GLenum face,GLenum func,GLint ref,GLuint mask);
GLAPI  void  APIENTRY glStencilFuncSeparateATI(GLenum frontfunc,GLenum backfunc,GLint ref,GLuint mask);
GLAPI  void  APIENTRY glStencilMask(GLuint mask);
GLAPI  void  APIENTRY glStencilMaskSeparate(GLenum face,GLuint mask);
GLAPI  void  APIENTRY glStencilOp(GLenum fail,GLenum zfail,GLenum zpass);
GLAPI  void  APIENTRY glStencilOpSeparate(GLenum face,GLenum sfail,GLenum dpfail,GLenum dppass);
GLAPI  void  APIENTRY glStencilOpSeparateATI(GLenum face,GLenum sfail,GLenum dpfail,GLenum dppass);
GLAPI  void  APIENTRY glStencilOpValueAMD(GLenum face,GLuint value);
GLAPI  void  APIENTRY glStencilStrokePathInstancedNV(GLsizei numPaths,GLenum pathNameType,const void *paths,GLuint pathBase,GLint reference,GLuint mask,GLenum transformType,const GLfloat *transformValues);
GLAPI  void  APIENTRY glStencilStrokePathNV(GLuint path,GLint reference,GLuint mask);
GLAPI  void  APIENTRY glStopInstrumentsSGIX(GLint marker);
GLAPI  void  APIENTRY glStringMarkerGREMEDY(GLsizei len,const void *string);
GLAPI  void  APIENTRY glSwizzleEXT(GLuint res,GLuint in,GLenum outX,GLenum outY,GLenum outZ,GLenum outW);
GLAPI  void  APIENTRY glSyncTextureINTEL(GLuint texture);
GLAPI  void  APIENTRY glTangent3bEXT(GLbyte tx,GLbyte ty,GLbyte tz);
GLAPI  void  APIENTRY glTangent3bvEXT(const GLbyte *v);
GLAPI  void  APIENTRY glTangent3dEXT(GLdouble tx,GLdouble ty,GLdouble tz);
GLAPI  void  APIENTRY glTangent3dvEXT(const GLdouble *v);
GLAPI  void  APIENTRY glTangent3fEXT(GLfloat tx,GLfloat ty,GLfloat tz);
GLAPI  void  APIENTRY glTangent3fvEXT(const GLfloat *v);
GLAPI  void  APIENTRY glTangent3iEXT(GLint tx,GLint ty,GLint tz);
GLAPI  void  APIENTRY glTangent3ivEXT(const GLint *v);
GLAPI  void  APIENTRY glTangent3sEXT(GLshort tx,GLshort ty,GLshort tz);
GLAPI  void  APIENTRY glTangent3svEXT(const GLshort *v);
GLAPI  void  APIENTRY glTangentPointerEXT(GLenum type,GLsizei stride,const void *pointer);
GLAPI  void  APIENTRY glTbufferMask3DFX(GLuint mask);
GLAPI  void  APIENTRY glTessellationFactorAMD(GLfloat factor);
GLAPI  void  APIENTRY glTessellationModeAMD(GLenum mode);
GLAPI  GLboolean  APIENTRY glTestFenceAPPLE(GLuint fence);
GLAPI  GLboolean  APIENTRY glTestFenceNV(GLuint fence);
GLAPI  GLboolean  APIENTRY glTestObjectAPPLE(GLenum object,GLuint name);
GLAPI  void  APIENTRY glTexBuffer(GLenum target,GLenum internalformat,GLuint buffer);
GLAPI  void  APIENTRY glTexBufferARB(GLenum target,GLenum internalformat,GLuint buffer);
GLAPI  void  APIENTRY glTexBufferEXT(GLenum target,GLenum internalformat,GLuint buffer);
GLAPI  void  APIENTRY glTexBufferRange(GLenum target,GLenum internalformat,GLuint buffer,GLintptr offset,GLsizeiptr size);
GLAPI  void  APIENTRY glTexBufferRangeEXT(GLenum target,GLenum internalformat,GLuint buffer,GLintptr offset,GLsizeiptr size);
GLAPI  void  APIENTRY glTexBumpParameterfvATI(GLenum pname,const GLfloat *param);
GLAPI  void  APIENTRY glTexBumpParameterivATI(GLenum pname,const GLint *param);
GLAPI  void  APIENTRY glTexCoord1bOES(GLbyte s);
GLAPI  void  APIENTRY glTexCoord1bvOES(const GLbyte *coords);
GLAPI  void  APIENTRY glTexCoord1d(GLdouble s);
GLAPI  void  APIENTRY glTexCoord1dv(const GLdouble *v);
GLAPI  void  APIENTRY glTexCoord1f(GLfloat s);
GLAPI  void  APIENTRY glTexCoord1fv(const GLfloat *v);
GLAPI  void  APIENTRY glTexCoord1hNV(GLhalfNV s);
GLAPI  void  APIENTRY glTexCoord1hvNV(const GLhalfNV *v);
GLAPI  void  APIENTRY glTexCoord1i(GLint s);
GLAPI  void  APIENTRY glTexCoord1iv(const GLint *v);
GLAPI  void  APIENTRY glTexCoord1s(GLshort s);
GLAPI  void  APIENTRY glTexCoord1sv(const GLshort *v);
GLAPI  void  APIENTRY glTexCoord1xOES(GLfixed s);
GLAPI  void  APIENTRY glTexCoord1xvOES(const GLfixed *coords);
GLAPI  void  APIENTRY glTexCoord2bOES(GLbyte s,GLbyte t);
GLAPI  void  APIENTRY glTexCoord2bvOES(const GLbyte *coords);
GLAPI  void  APIENTRY glTexCoord2d(GLdouble s,GLdouble t);
GLAPI  void  APIENTRY glTexCoord2dv(const GLdouble *v);
GLAPI  void  APIENTRY glTexCoord2f(GLfloat s,GLfloat t);
GLAPI  void  APIENTRY glTexCoord2fColor3fVertex3fSUN(GLfloat s,GLfloat t,GLfloat r,GLfloat g,GLfloat b,GLfloat x,GLfloat y,GLfloat z);
GLAPI  void  APIENTRY glTexCoord2fColor3fVertex3fvSUN(const GLfloat *tc,const GLfloat *c,const GLfloat *v);
GLAPI  void  APIENTRY glTexCoord2fColor4fNormal3fVertex3fSUN(GLfloat s,GLfloat t,GLfloat r,GLfloat g,GLfloat b,GLfloat a,GLfloat nx,GLfloat ny,GLfloat nz,GLfloat x,GLfloat y,GLfloat z);
GLAPI  void  APIENTRY glTexCoord2fColor4fNormal3fVertex3fvSUN(const GLfloat *tc,const GLfloat *c,const GLfloat *n,const GLfloat *v);
GLAPI  void  APIENTRY glTexCoord2fColor4ubVertex3fSUN(GLfloat s,GLfloat t,GLubyte r,GLubyte g,GLubyte b,GLubyte a,GLfloat x,GLfloat y,GLfloat z);
GLAPI  void  APIENTRY glTexCoord2fColor4ubVertex3fvSUN(const GLfloat *tc,const GLubyte *c,const GLfloat *v);
GLAPI  void  APIENTRY glTexCoord2fNormal3fVertex3fSUN(GLfloat s,GLfloat t,GLfloat nx,GLfloat ny,GLfloat nz,GLfloat x,GLfloat y,GLfloat z);
GLAPI  void  APIENTRY glTexCoord2fNormal3fVertex3fvSUN(const GLfloat *tc,const GLfloat *n,const GLfloat *v);
GLAPI  void  APIENTRY glTexCoord2fVertex3fSUN(GLfloat s,GLfloat t,GLfloat x,GLfloat y,GLfloat z);
GLAPI  void  APIENTRY glTexCoord2fVertex3fvSUN(const GLfloat *tc,const GLfloat *v);
GLAPI  void  APIENTRY glTexCoord2fv(const GLfloat *v);
GLAPI  void  APIENTRY glTexCoord2hNV(GLhalfNV s,GLhalfNV t);
GLAPI  void  APIENTRY glTexCoord2hvNV(const GLhalfNV *v);
GLAPI  void  APIENTRY glTexCoord2i(GLint s,GLint t);
GLAPI  void  APIENTRY glTexCoord2iv(const GLint *v);
GLAPI  void  APIENTRY glTexCoord2s(GLshort s,GLshort t);
GLAPI  void  APIENTRY glTexCoord2sv(const GLshort *v);
GLAPI  void  APIENTRY glTexCoord2xOES(GLfixed s,GLfixed t);
GLAPI  void  APIENTRY glTexCoord2xvOES(const GLfixed *coords);
GLAPI  void  APIENTRY glTexCoord3bOES(GLbyte s,GLbyte t,GLbyte r);
GLAPI  void  APIENTRY glTexCoord3bvOES(const GLbyte *coords);
GLAPI  void  APIENTRY glTexCoord3d(GLdouble s,GLdouble t,GLdouble r);
GLAPI  void  APIENTRY glTexCoord3dv(const GLdouble *v);
GLAPI  void  APIENTRY glTexCoord3f(GLfloat s,GLfloat t,GLfloat r);
GLAPI  void  APIENTRY glTexCoord3fv(const GLfloat *v);
GLAPI  void  APIENTRY glTexCoord3hNV(GLhalfNV s,GLhalfNV t,GLhalfNV r);
GLAPI  void  APIENTRY glTexCoord3hvNV(const GLhalfNV *v);
GLAPI  void  APIENTRY glTexCoord3i(GLint s,GLint t,GLint r);
GLAPI  void  APIENTRY glTexCoord3iv(const GLint *v);
GLAPI  void  APIENTRY glTexCoord3s(GLshort s,GLshort t,GLshort r);
GLAPI  void  APIENTRY glTexCoord3sv(const GLshort *v);
GLAPI  void  APIENTRY glTexCoord3xOES(GLfixed s,GLfixed t,GLfixed r);
GLAPI  void  APIENTRY glTexCoord3xvOES(const GLfixed *coords);
GLAPI  void  APIENTRY glTexCoord4bOES(GLbyte s,GLbyte t,GLbyte r,GLbyte q);
GLAPI  void  APIENTRY glTexCoord4bvOES(const GLbyte *coords);
GLAPI  void  APIENTRY glTexCoord4d(GLdouble s,GLdouble t,GLdouble r,GLdouble q);
GLAPI  void  APIENTRY glTexCoord4dv(const GLdouble *v);
GLAPI  void  APIENTRY glTexCoord4f(GLfloat s,GLfloat t,GLfloat r,GLfloat q);
GLAPI  void  APIENTRY glTexCoord4fColor4fNormal3fVertex4fSUN(GLfloat s,GLfloat t,GLfloat p,GLfloat q,GLfloat r,GLfloat g,GLfloat b,GLfloat a,GLfloat nx,GLfloat ny,GLfloat nz,GLfloat x,GLfloat y,GLfloat z,GLfloat w);
GLAPI  void  APIENTRY glTexCoord4fColor4fNormal3fVertex4fvSUN(const GLfloat *tc,const GLfloat *c,const GLfloat *n,const GLfloat *v);
GLAPI  void  APIENTRY glTexCoord4fVertex4fSUN(GLfloat s,GLfloat t,GLfloat p,GLfloat q,GLfloat x,GLfloat y,GLfloat z,GLfloat w);
GLAPI  void  APIENTRY glTexCoord4fVertex4fvSUN(const GLfloat *tc,const GLfloat *v);
GLAPI  void  APIENTRY glTexCoord4fv(const GLfloat *v);
GLAPI  void  APIENTRY glTexCoord4hNV(GLhalfNV s,GLhalfNV t,GLhalfNV r,GLhalfNV q);
GLAPI  void  APIENTRY glTexCoord4hvNV(const GLhalfNV *v);
GLAPI  void  APIENTRY glTexCoord4i(GLint s,GLint t,GLint r,GLint q);
GLAPI  void  APIENTRY glTexCoord4iv(const GLint *v);
GLAPI  void  APIENTRY glTexCoord4s(GLshort s,GLshort t,GLshort r,GLshort q);
GLAPI  void  APIENTRY glTexCoord4sv(const GLshort *v);
GLAPI  void  APIENTRY glTexCoord4xOES(GLfixed s,GLfixed t,GLfixed r,GLfixed q);
GLAPI  void  APIENTRY glTexCoord4xvOES(const GLfixed *coords);
GLAPI  void  APIENTRY glTexCoordFormatNV(GLint size,GLenum type,GLsizei stride);
GLAPI  void  APIENTRY glTexCoordP1ui(GLenum type,GLuint coords);
GLAPI  void  APIENTRY glTexCoordP1uiv(GLenum type,const GLuint *coords);
GLAPI  void  APIENTRY glTexCoordP2ui(GLenum type,GLuint coords);
GLAPI  void  APIENTRY glTexCoordP2uiv(GLenum type,const GLuint *coords);
GLAPI  void  APIENTRY glTexCoordP3ui(GLenum type,GLuint coords);
GLAPI  void  APIENTRY glTexCoordP3uiv(GLenum type,const GLuint *coords);
GLAPI  void  APIENTRY glTexCoordP4ui(GLenum type,GLuint coords);
GLAPI  void  APIENTRY glTexCoordP4uiv(GLenum type,const GLuint *coords);
GLAPI  void  APIENTRY glTexCoordPointer(GLint size,GLenum type,GLsizei stride,const void *pointer);
GLAPI  void  APIENTRY glTexCoordPointerEXT(GLint size,GLenum type,GLsizei stride,GLsizei count,const void *pointer);
GLAPI  void  APIENTRY glTexCoordPointerListIBM(GLint size,GLenum type,GLint stride,const void **pointer,GLint ptrstride);
GLAPI  void  APIENTRY glTexCoordPointervINTEL(GLint size,GLenum type,const void **pointer);
GLAPI  void  APIENTRY glTexEnvf(GLenum target,GLenum pname,GLfloat param);
GLAPI  void  APIENTRY glTexEnvfv(GLenum target,GLenum pname,const GLfloat *params);
GLAPI  void  APIENTRY glTexEnvi(GLenum target,GLenum pname,GLint param);
GLAPI  void  APIENTRY glTexEnviv(GLenum target,GLenum pname,const GLint *params);
GLAPI  void  APIENTRY glTexEnvx(GLenum target,GLenum pname,GLfixed param);
GLAPI  void  APIENTRY glTexEnvxOES(GLenum target,GLenum pname,GLfixed param);
GLAPI  void  APIENTRY glTexEnvxv(GLenum target,GLenum pname,const GLfixed *params);
GLAPI  void  APIENTRY glTexEnvxvOES(GLenum target,GLenum pname,const GLfixed *params);
GLAPI  void  APIENTRY glTexFilterFuncSGIS(GLenum target,GLenum filter,GLsizei n,const GLfloat *weights);
GLAPI  void  APIENTRY glTexGend(GLenum coord,GLenum pname,GLdouble param);
GLAPI  void  APIENTRY glTexGendv(GLenum coord,GLenum pname,const GLdouble *params);
GLAPI  void  APIENTRY glTexGenf(GLenum coord,GLenum pname,GLfloat param);
GLAPI  void  APIENTRY glTexGenfOES(GLenum coord,GLenum pname,GLfloat param);
GLAPI  void  APIENTRY glTexGenfv(GLenum coord,GLenum pname,const GLfloat *params);
GLAPI  void  APIENTRY glTexGenfvOES(GLenum coord,GLenum pname,const GLfloat *params);
GLAPI  void  APIENTRY glTexGeni(GLenum coord,GLenum pname,GLint param);
GLAPI  void  APIENTRY glTexGeniOES(GLenum coord,GLenum pname,GLint param);
GLAPI  void  APIENTRY glTexGeniv(GLenum coord,GLenum pname,const GLint *params);
GLAPI  void  APIENTRY glTexGenivOES(GLenum coord,GLenum pname,const GLint *params);
GLAPI  void  APIENTRY glTexGenxOES(GLenum coord,GLenum pname,GLfixed param);
GLAPI  void  APIENTRY glTexGenxvOES(GLenum coord,GLenum pname,const GLfixed *params);
GLAPI  void  APIENTRY glTexImage1D(GLenum target,GLint level,GLint internalformat,GLsizei width,GLint border,GLenum format,GLenum type,const void *pixels);
GLAPI  void  APIENTRY glTexImage2D(GLenum target,GLint level,GLint internalformat,GLsizei width,GLsizei height,GLint border,GLenum format,GLenum type,const void *pixels);
GLAPI  void  APIENTRY glTexImage2DMultisample(GLenum target,GLsizei samples,GLenum internalformat,GLsizei width,GLsizei height,GLboolean fixedsamplelocations);
GLAPI  void  APIENTRY glTexImage2DMultisampleCoverageNV(GLenum target,GLsizei coverageSamples,GLsizei colorSamples,GLint internalFormat,GLsizei width,GLsizei height,GLboolean fixedSampleLocations);
GLAPI  void  APIENTRY glTexImage3D(GLenum target,GLint level,GLint internalformat,GLsizei width,GLsizei height,GLsizei depth,GLint border,GLenum format,GLenum type,const void *pixels);
GLAPI  void  APIENTRY glTexImage3DEXT(GLenum target,GLint level,GLenum internalformat,GLsizei width,GLsizei height,GLsizei depth,GLint border,GLenum format,GLenum type,const void *pixels);
GLAPI  void  APIENTRY glTexImage3DMultisample(GLenum target,GLsizei samples,GLenum internalformat,GLsizei width,GLsizei height,GLsizei depth,GLboolean fixedsamplelocations);
GLAPI  void  APIENTRY glTexImage3DMultisampleCoverageNV(GLenum target,GLsizei coverageSamples,GLsizei colorSamples,GLint internalFormat,GLsizei width,GLsizei height,GLsizei depth,GLboolean fixedSampleLocations);
GLAPI  void  APIENTRY glTexImage3DOES(GLenum target,GLint level,GLenum internalformat,GLsizei width,GLsizei height,GLsizei depth,GLint border,GLenum format,GLenum type,const void *pixels);
GLAPI  void  APIENTRY glTexImage4DSGIS(GLenum target,GLint level,GLenum internalformat,GLsizei width,GLsizei height,GLsizei depth,GLsizei size4d,GLint border,GLenum format,GLenum type,const void *pixels);
GLAPI  void  APIENTRY glTexPageCommitmentARB(GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLsizei width,GLsizei height,GLsizei depth,GLboolean resident);
GLAPI  void  APIENTRY glTexParameterIiv(GLenum target,GLenum pname,const GLint *params);
GLAPI  void  APIENTRY glTexParameterIivEXT(GLenum target,GLenum pname,const GLint *params);
GLAPI  void  APIENTRY glTexParameterIuiv(GLenum target,GLenum pname,const GLuint *params);
GLAPI  void  APIENTRY glTexParameterIuivEXT(GLenum target,GLenum pname,const GLuint *params);
GLAPI  void  APIENTRY glTexParameterf(GLenum target,GLenum pname,GLfloat param);
GLAPI  void  APIENTRY glTexParameterfv(GLenum target,GLenum pname,const GLfloat *params);
GLAPI  void  APIENTRY glTexParameteri(GLenum target,GLenum pname,GLint param);
GLAPI  void  APIENTRY glTexParameteriv(GLenum target,GLenum pname,const GLint *params);
GLAPI  void  APIENTRY glTexParameterx(GLenum target,GLenum pname,GLfixed param);
GLAPI  void  APIENTRY glTexParameterxOES(GLenum target,GLenum pname,GLfixed param);
GLAPI  void  APIENTRY glTexParameterxv(GLenum target,GLenum pname,const GLfixed *params);
GLAPI  void  APIENTRY glTexParameterxvOES(GLenum target,GLenum pname,const GLfixed *params);
GLAPI  void  APIENTRY glTexRenderbufferNV(GLenum target,GLuint renderbuffer);
GLAPI  void  APIENTRY glTexStorage1D(GLenum target,GLsizei levels,GLenum internalformat,GLsizei width);
GLAPI  void  APIENTRY glTexStorage1DEXT(GLenum target,GLsizei levels,GLenum internalformat,GLsizei width);
GLAPI  void  APIENTRY glTexStorage2D(GLenum target,GLsizei levels,GLenum internalformat,GLsizei width,GLsizei height);
GLAPI  void  APIENTRY glTexStorage2DEXT(GLenum target,GLsizei levels,GLenum internalformat,GLsizei width,GLsizei height);
GLAPI  void  APIENTRY glTexStorage2DMultisample(GLenum target,GLsizei samples,GLenum internalformat,GLsizei width,GLsizei height,GLboolean fixedsamplelocations);
GLAPI  void  APIENTRY glTexStorage3D(GLenum target,GLsizei levels,GLenum internalformat,GLsizei width,GLsizei height,GLsizei depth);
GLAPI  void  APIENTRY glTexStorage3DEXT(GLenum target,GLsizei levels,GLenum internalformat,GLsizei width,GLsizei height,GLsizei depth);
GLAPI  void  APIENTRY glTexStorage3DMultisample(GLenum target,GLsizei samples,GLenum internalformat,GLsizei width,GLsizei height,GLsizei depth,GLboolean fixedsamplelocations);
GLAPI  void  APIENTRY glTexStorage3DMultisampleOES(GLenum target,GLsizei samples,GLenum internalformat,GLsizei width,GLsizei height,GLsizei depth,GLboolean fixedsamplelocations);
GLAPI  void  APIENTRY glTexStorageSparseAMD(GLenum target,GLenum internalFormat,GLsizei width,GLsizei height,GLsizei depth,GLsizei layers,GLbitfield flags);
GLAPI  void  APIENTRY glTexSubImage1D(GLenum target,GLint level,GLint xoffset,GLsizei width,GLenum format,GLenum type,const void *pixels);
GLAPI  void  APIENTRY glTexSubImage1DEXT(GLenum target,GLint level,GLint xoffset,GLsizei width,GLenum format,GLenum type,const void *pixels);
GLAPI  void  APIENTRY glTexSubImage2D(GLenum target,GLint level,GLint xoffset,GLint yoffset,GLsizei width,GLsizei height,GLenum format,GLenum type,const void *pixels);
GLAPI  void  APIENTRY glTexSubImage2DEXT(GLenum target,GLint level,GLint xoffset,GLint yoffset,GLsizei width,GLsizei height,GLenum format,GLenum type,const void *pixels);
GLAPI  void  APIENTRY glTexSubImage3D(GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLsizei width,GLsizei height,GLsizei depth,GLenum format,GLenum type,const void *pixels);
GLAPI  void  APIENTRY glTexSubImage3DEXT(GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLsizei width,GLsizei height,GLsizei depth,GLenum format,GLenum type,const void *pixels);
GLAPI  void  APIENTRY glTexSubImage3DOES(GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLsizei width,GLsizei height,GLsizei depth,GLenum format,GLenum type,const void *pixels);
GLAPI  void  APIENTRY glTexSubImage4DSGIS(GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLint woffset,GLsizei width,GLsizei height,GLsizei depth,GLsizei size4d,GLenum format,GLenum type,const void *pixels);
GLAPI  void  APIENTRY glTextureBufferEXT(GLuint texture,GLenum target,GLenum internalformat,GLuint buffer);
GLAPI  void  APIENTRY glTextureBufferRangeEXT(GLuint texture,GLenum target,GLenum internalformat,GLuint buffer,GLintptr offset,GLsizeiptr size);
GLAPI  void  APIENTRY glTextureColorMaskSGIS(GLboolean red,GLboolean green,GLboolean blue,GLboolean alpha);
GLAPI  void  APIENTRY glTextureImage1DEXT(GLuint texture,GLenum target,GLint level,GLint internalformat,GLsizei width,GLint border,GLenum format,GLenum type,const void *pixels);
GLAPI  void  APIENTRY glTextureImage2DEXT(GLuint texture,GLenum target,GLint level,GLint internalformat,GLsizei width,GLsizei height,GLint border,GLenum format,GLenum type,const void *pixels);
GLAPI  void  APIENTRY glTextureImage2DMultisampleCoverageNV(GLuint texture,GLenum target,GLsizei coverageSamples,GLsizei colorSamples,GLint internalFormat,GLsizei width,GLsizei height,GLboolean fixedSampleLocations);
GLAPI  void  APIENTRY glTextureImage2DMultisampleNV(GLuint texture,GLenum target,GLsizei samples,GLint internalFormat,GLsizei width,GLsizei height,GLboolean fixedSampleLocations);
GLAPI  void  APIENTRY glTextureImage3DEXT(GLuint texture,GLenum target,GLint level,GLint internalformat,GLsizei width,GLsizei height,GLsizei depth,GLint border,GLenum format,GLenum type,const void *pixels);
GLAPI  void  APIENTRY glTextureImage3DMultisampleCoverageNV(GLuint texture,GLenum target,GLsizei coverageSamples,GLsizei colorSamples,GLint internalFormat,GLsizei width,GLsizei height,GLsizei depth,GLboolean fixedSampleLocations);
GLAPI  void  APIENTRY glTextureImage3DMultisampleNV(GLuint texture,GLenum target,GLsizei samples,GLint internalFormat,GLsizei width,GLsizei height,GLsizei depth,GLboolean fixedSampleLocations);
GLAPI  void  APIENTRY glTextureLightEXT(GLenum pname);
GLAPI  void  APIENTRY glTextureMaterialEXT(GLenum face,GLenum mode);
GLAPI  void  APIENTRY glTextureNormalEXT(GLenum mode);
GLAPI  void  APIENTRY glTexturePageCommitmentEXT(GLuint texture,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLsizei width,GLsizei height,GLsizei depth,GLboolean resident);
GLAPI  void  APIENTRY glTextureParameterIivEXT(GLuint texture,GLenum target,GLenum pname,const GLint *params);
GLAPI  void  APIENTRY glTextureParameterIuivEXT(GLuint texture,GLenum target,GLenum pname,const GLuint *params);
GLAPI  void  APIENTRY glTextureParameterfEXT(GLuint texture,GLenum target,GLenum pname,GLfloat param);
GLAPI  void  APIENTRY glTextureParameterfvEXT(GLuint texture,GLenum target,GLenum pname,const GLfloat *params);
GLAPI  void  APIENTRY glTextureParameteriEXT(GLuint texture,GLenum target,GLenum pname,GLint param);
GLAPI  void  APIENTRY glTextureParameterivEXT(GLuint texture,GLenum target,GLenum pname,const GLint *params);
GLAPI  void  APIENTRY glTextureRangeAPPLE(GLenum target,GLsizei length,const void *pointer);
GLAPI  void  APIENTRY glTextureRenderbufferEXT(GLuint texture,GLenum target,GLuint renderbuffer);
GLAPI  void  APIENTRY glTextureStorage1DEXT(GLuint texture,GLenum target,GLsizei levels,GLenum internalformat,GLsizei width);
GLAPI  void  APIENTRY glTextureStorage2DEXT(GLuint texture,GLenum target,GLsizei levels,GLenum internalformat,GLsizei width,GLsizei height);
GLAPI  void  APIENTRY glTextureStorage2DMultisampleEXT(GLuint texture,GLenum target,GLsizei samples,GLenum internalformat,GLsizei width,GLsizei height,GLboolean fixedsamplelocations);
GLAPI  void  APIENTRY glTextureStorage3DEXT(GLuint texture,GLenum target,GLsizei levels,GLenum internalformat,GLsizei width,GLsizei height,GLsizei depth);
GLAPI  void  APIENTRY glTextureStorage3DMultisampleEXT(GLuint texture,GLenum target,GLsizei samples,GLenum internalformat,GLsizei width,GLsizei height,GLsizei depth,GLboolean fixedsamplelocations);
GLAPI  void  APIENTRY glTextureStorageSparseAMD(GLuint texture,GLenum target,GLenum internalFormat,GLsizei width,GLsizei height,GLsizei depth,GLsizei layers,GLbitfield flags);
GLAPI  void  APIENTRY glTextureSubImage1DEXT(GLuint texture,GLenum target,GLint level,GLint xoffset,GLsizei width,GLenum format,GLenum type,const void *pixels);
GLAPI  void  APIENTRY glTextureSubImage2DEXT(GLuint texture,GLenum target,GLint level,GLint xoffset,GLint yoffset,GLsizei width,GLsizei height,GLenum format,GLenum type,const void *pixels);
GLAPI  void  APIENTRY glTextureSubImage3DEXT(GLuint texture,GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLsizei width,GLsizei height,GLsizei depth,GLenum format,GLenum type,const void *pixels);
GLAPI  void  APIENTRY glTextureView(GLuint texture,GLenum target,GLuint origtexture,GLenum internalformat,GLuint minlevel,GLuint numlevels,GLuint minlayer,GLuint numlayers);
GLAPI  void  APIENTRY glTextureViewEXT(GLuint texture,GLenum target,GLuint origtexture,GLenum internalformat,GLuint minlevel,GLuint numlevels,GLuint minlayer,GLuint numlayers);
GLAPI  void  APIENTRY glTrackMatrixNV(GLenum target,GLuint address,GLenum matrix,GLenum transform);
GLAPI  void  APIENTRY glTransformFeedbackAttribsNV(GLsizei count,const GLint *attribs,GLenum bufferMode);
GLAPI  void  APIENTRY glTransformFeedbackStreamAttribsNV(GLsizei count,const GLint *attribs,GLsizei nbuffers,const GLint *bufstreams,GLenum bufferMode);
GLAPI  void  APIENTRY glTransformFeedbackVaryings(GLuint program,GLsizei count,const GLchar *const*varyings,GLenum bufferMode);
GLAPI  void  APIENTRY glTransformFeedbackVaryingsEXT(GLuint program,GLsizei count,const GLchar *const*varyings,GLenum bufferMode);
GLAPI  void  APIENTRY glTransformFeedbackVaryingsNV(GLuint program,GLsizei count,const GLint *locations,GLenum bufferMode);
GLAPI  void  APIENTRY glTransformPathNV(GLuint resultPath,GLuint srcPath,GLenum transformType,const GLfloat *transformValues);
GLAPI  void  APIENTRY glTranslated(GLdouble x,GLdouble y,GLdouble z);
GLAPI  void  APIENTRY glTranslatef(GLfloat x,GLfloat y,GLfloat z);
GLAPI  void  APIENTRY glTranslatex(GLfixed x,GLfixed y,GLfixed z);
GLAPI  void  APIENTRY glTranslatexOES(GLfixed x,GLfixed y,GLfixed z);
GLAPI  void  APIENTRY glUniform1d(GLint location,GLdouble x);
GLAPI  void  APIENTRY glUniform1dv(GLint location,GLsizei count,const GLdouble *value);
GLAPI  void  APIENTRY glUniform1f(GLint location,GLfloat v0);
GLAPI  void  APIENTRY glUniform1fARB(GLint location,GLfloat v0);
GLAPI  void  APIENTRY glUniform1fv(GLint location,GLsizei count,const GLfloat *value);
GLAPI  void  APIENTRY glUniform1fvARB(GLint location,GLsizei count,const GLfloat *value);
GLAPI  void  APIENTRY glUniform1i(GLint location,GLint v0);
GLAPI  void  APIENTRY glUniform1i64NV(GLint location,GLint64EXT x);
GLAPI  void  APIENTRY glUniform1i64vNV(GLint location,GLsizei count,const GLint64EXT *value);
GLAPI  void  APIENTRY glUniform1iARB(GLint location,GLint v0);
GLAPI  void  APIENTRY glUniform1iv(GLint location,GLsizei count,const GLint *value);
GLAPI  void  APIENTRY glUniform1ivARB(GLint location,GLsizei count,const GLint *value);
GLAPI  void  APIENTRY glUniform1ui(GLint location,GLuint v0);
GLAPI  void  APIENTRY glUniform1ui64NV(GLint location,GLuint64EXT x);
GLAPI  void  APIENTRY glUniform1ui64vNV(GLint location,GLsizei count,const GLuint64EXT *value);
GLAPI  void  APIENTRY glUniform1uiEXT(GLint location,GLuint v0);
GLAPI  void  APIENTRY glUniform1uiv(GLint location,GLsizei count,const GLuint *value);
GLAPI  void  APIENTRY glUniform1uivEXT(GLint location,GLsizei count,const GLuint *value);
GLAPI  void  APIENTRY glUniform2d(GLint location,GLdouble x,GLdouble y);
GLAPI  void  APIENTRY glUniform2dv(GLint location,GLsizei count,const GLdouble *value);
GLAPI  void  APIENTRY glUniform2f(GLint location,GLfloat v0,GLfloat v1);
GLAPI  void  APIENTRY glUniform2fARB(GLint location,GLfloat v0,GLfloat v1);
GLAPI  void  APIENTRY glUniform2fv(GLint location,GLsizei count,const GLfloat *value);
GLAPI  void  APIENTRY glUniform2fvARB(GLint location,GLsizei count,const GLfloat *value);
GLAPI  void  APIENTRY glUniform2i(GLint location,GLint v0,GLint v1);
GLAPI  void  APIENTRY glUniform2i64NV(GLint location,GLint64EXT x,GLint64EXT y);
GLAPI  void  APIENTRY glUniform2i64vNV(GLint location,GLsizei count,const GLint64EXT *value);
GLAPI  void  APIENTRY glUniform2iARB(GLint location,GLint v0,GLint v1);
GLAPI  void  APIENTRY glUniform2iv(GLint location,GLsizei count,const GLint *value);
GLAPI  void  APIENTRY glUniform2ivARB(GLint location,GLsizei count,const GLint *value);
GLAPI  void  APIENTRY glUniform2ui(GLint location,GLuint v0,GLuint v1);
GLAPI  void  APIENTRY glUniform2ui64NV(GLint location,GLuint64EXT x,GLuint64EXT y);
GLAPI  void  APIENTRY glUniform2ui64vNV(GLint location,GLsizei count,const GLuint64EXT *value);
GLAPI  void  APIENTRY glUniform2uiEXT(GLint location,GLuint v0,GLuint v1);
GLAPI  void  APIENTRY glUniform2uiv(GLint location,GLsizei count,const GLuint *value);
GLAPI  void  APIENTRY glUniform2uivEXT(GLint location,GLsizei count,const GLuint *value);
GLAPI  void  APIENTRY glUniform3d(GLint location,GLdouble x,GLdouble y,GLdouble z);
GLAPI  void  APIENTRY glUniform3dv(GLint location,GLsizei count,const GLdouble *value);
GLAPI  void  APIENTRY glUniform3f(GLint location,GLfloat v0,GLfloat v1,GLfloat v2);
GLAPI  void  APIENTRY glUniform3fARB(GLint location,GLfloat v0,GLfloat v1,GLfloat v2);
GLAPI  void  APIENTRY glUniform3fv(GLint location,GLsizei count,const GLfloat *value);
GLAPI  void  APIENTRY glUniform3fvARB(GLint location,GLsizei count,const GLfloat *value);
GLAPI  void  APIENTRY glUniform3i(GLint location,GLint v0,GLint v1,GLint v2);
GLAPI  void  APIENTRY glUniform3i64NV(GLint location,GLint64EXT x,GLint64EXT y,GLint64EXT z);
GLAPI  void  APIENTRY glUniform3i64vNV(GLint location,GLsizei count,const GLint64EXT *value);
GLAPI  void  APIENTRY glUniform3iARB(GLint location,GLint v0,GLint v1,GLint v2);
GLAPI  void  APIENTRY glUniform3iv(GLint location,GLsizei count,const GLint *value);
GLAPI  void  APIENTRY glUniform3ivARB(GLint location,GLsizei count,const GLint *value);
GLAPI  void  APIENTRY glUniform3ui(GLint location,GLuint v0,GLuint v1,GLuint v2);
GLAPI  void  APIENTRY glUniform3ui64NV(GLint location,GLuint64EXT x,GLuint64EXT y,GLuint64EXT z);
GLAPI  void  APIENTRY glUniform3ui64vNV(GLint location,GLsizei count,const GLuint64EXT *value);
GLAPI  void  APIENTRY glUniform3uiEXT(GLint location,GLuint v0,GLuint v1,GLuint v2);
GLAPI  void  APIENTRY glUniform3uiv(GLint location,GLsizei count,const GLuint *value);
GLAPI  void  APIENTRY glUniform3uivEXT(GLint location,GLsizei count,const GLuint *value);
GLAPI  void  APIENTRY glUniform4d(GLint location,GLdouble x,GLdouble y,GLdouble z,GLdouble w);
GLAPI  void  APIENTRY glUniform4dv(GLint location,GLsizei count,const GLdouble *value);
GLAPI  void  APIENTRY glUniform4f(GLint location,GLfloat v0,GLfloat v1,GLfloat v2,GLfloat v3);
GLAPI  void  APIENTRY glUniform4fARB(GLint location,GLfloat v0,GLfloat v1,GLfloat v2,GLfloat v3);
GLAPI  void  APIENTRY glUniform4fv(GLint location,GLsizei count,const GLfloat *value);
GLAPI  void  APIENTRY glUniform4fvARB(GLint location,GLsizei count,const GLfloat *value);
GLAPI  void  APIENTRY glUniform4i(GLint location,GLint v0,GLint v1,GLint v2,GLint v3);
GLAPI  void  APIENTRY glUniform4i64NV(GLint location,GLint64EXT x,GLint64EXT y,GLint64EXT z,GLint64EXT w);
GLAPI  void  APIENTRY glUniform4i64vNV(GLint location,GLsizei count,const GLint64EXT *value);
GLAPI  void  APIENTRY glUniform4iARB(GLint location,GLint v0,GLint v1,GLint v2,GLint v3);
GLAPI  void  APIENTRY glUniform4iv(GLint location,GLsizei count,const GLint *value);
GLAPI  void  APIENTRY glUniform4ivARB(GLint location,GLsizei count,const GLint *value);
GLAPI  void  APIENTRY glUniform4ui(GLint location,GLuint v0,GLuint v1,GLuint v2,GLuint v3);
GLAPI  void  APIENTRY glUniform4ui64NV(GLint location,GLuint64EXT x,GLuint64EXT y,GLuint64EXT z,GLuint64EXT w);
GLAPI  void  APIENTRY glUniform4ui64vNV(GLint location,GLsizei count,const GLuint64EXT *value);
GLAPI  void  APIENTRY glUniform4uiEXT(GLint location,GLuint v0,GLuint v1,GLuint v2,GLuint v3);
GLAPI  void  APIENTRY glUniform4uiv(GLint location,GLsizei count,const GLuint *value);
GLAPI  void  APIENTRY glUniform4uivEXT(GLint location,GLsizei count,const GLuint *value);
GLAPI  void  APIENTRY glUniformBlockBinding(GLuint program,GLuint uniformBlockIndex,GLuint uniformBlockBinding);
GLAPI  void  APIENTRY glUniformBufferEXT(GLuint program,GLint location,GLuint buffer);
GLAPI  void  APIENTRY glUniformHandleui64ARB(GLint location,GLuint64 value);
GLAPI  void  APIENTRY glUniformHandleui64NV(GLint location,GLuint64 value);
GLAPI  void  APIENTRY glUniformHandleui64vARB(GLint location,GLsizei count,const GLuint64 *value);
GLAPI  void  APIENTRY glUniformHandleui64vNV(GLint location,GLsizei count,const GLuint64 *value);
GLAPI  void  APIENTRY glUniformMatrix2dv(GLint location,GLsizei count,GLboolean transpose,const GLdouble *value);
GLAPI  void  APIENTRY glUniformMatrix2fv(GLint location,GLsizei count,GLboolean transpose,const GLfloat *value);
GLAPI  void  APIENTRY glUniformMatrix2fvARB(GLint location,GLsizei count,GLboolean transpose,const GLfloat *value);
GLAPI  void  APIENTRY glUniformMatrix2x3dv(GLint location,GLsizei count,GLboolean transpose,const GLdouble *value);
GLAPI  void  APIENTRY glUniformMatrix2x3fv(GLint location,GLsizei count,GLboolean transpose,const GLfloat *value);
GLAPI  void  APIENTRY glUniformMatrix2x3fvNV(GLint location,GLsizei count,GLboolean transpose,const GLfloat *value);
GLAPI  void  APIENTRY glUniformMatrix2x4dv(GLint location,GLsizei count,GLboolean transpose,const GLdouble *value);
GLAPI  void  APIENTRY glUniformMatrix2x4fv(GLint location,GLsizei count,GLboolean transpose,const GLfloat *value);
GLAPI  void  APIENTRY glUniformMatrix2x4fvNV(GLint location,GLsizei count,GLboolean transpose,const GLfloat *value);
GLAPI  void  APIENTRY glUniformMatrix3dv(GLint location,GLsizei count,GLboolean transpose,const GLdouble *value);
GLAPI  void  APIENTRY glUniformMatrix3fv(GLint location,GLsizei count,GLboolean transpose,const GLfloat *value);
GLAPI  void  APIENTRY glUniformMatrix3fvARB(GLint location,GLsizei count,GLboolean transpose,const GLfloat *value);
GLAPI  void  APIENTRY glUniformMatrix3x2dv(GLint location,GLsizei count,GLboolean transpose,const GLdouble *value);
GLAPI  void  APIENTRY glUniformMatrix3x2fv(GLint location,GLsizei count,GLboolean transpose,const GLfloat *value);
GLAPI  void  APIENTRY glUniformMatrix3x2fvNV(GLint location,GLsizei count,GLboolean transpose,const GLfloat *value);
GLAPI  void  APIENTRY glUniformMatrix3x4dv(GLint location,GLsizei count,GLboolean transpose,const GLdouble *value);
GLAPI  void  APIENTRY glUniformMatrix3x4fv(GLint location,GLsizei count,GLboolean transpose,const GLfloat *value);
GLAPI  void  APIENTRY glUniformMatrix3x4fvNV(GLint location,GLsizei count,GLboolean transpose,const GLfloat *value);
GLAPI  void  APIENTRY glUniformMatrix4dv(GLint location,GLsizei count,GLboolean transpose,const GLdouble *value);
GLAPI  void  APIENTRY glUniformMatrix4fv(GLint location,GLsizei count,GLboolean transpose,const GLfloat *value);
GLAPI  void  APIENTRY glUniformMatrix4fvARB(GLint location,GLsizei count,GLboolean transpose,const GLfloat *value);
GLAPI  void  APIENTRY glUniformMatrix4x2dv(GLint location,GLsizei count,GLboolean transpose,const GLdouble *value);
GLAPI  void  APIENTRY glUniformMatrix4x2fv(GLint location,GLsizei count,GLboolean transpose,const GLfloat *value);
GLAPI  void  APIENTRY glUniformMatrix4x2fvNV(GLint location,GLsizei count,GLboolean transpose,const GLfloat *value);
GLAPI  void  APIENTRY glUniformMatrix4x3dv(GLint location,GLsizei count,GLboolean transpose,const GLdouble *value);
GLAPI  void  APIENTRY glUniformMatrix4x3fv(GLint location,GLsizei count,GLboolean transpose,const GLfloat *value);
GLAPI  void  APIENTRY glUniformMatrix4x3fvNV(GLint location,GLsizei count,GLboolean transpose,const GLfloat *value);
GLAPI  void  APIENTRY glUniformSubroutinesuiv(GLenum shadertype,GLsizei count,const GLuint *indices);
GLAPI  void  APIENTRY glUniformui64NV(GLint location,GLuint64EXT value);
GLAPI  void  APIENTRY glUniformui64vNV(GLint location,GLsizei count,const GLuint64EXT *value);
GLAPI  GLboolean  APIENTRY glUnmapBuffer(GLenum target);
GLAPI  GLboolean  APIENTRY glUnmapBufferARB(GLenum target);
GLAPI  GLboolean  APIENTRY glUnmapBufferOES(GLenum target);
GLAPI  GLboolean  APIENTRY glUnmapNamedBufferEXT(GLuint buffer);
GLAPI  void  APIENTRY glUnmapObjectBufferATI(GLuint buffer);
GLAPI  void  APIENTRY glUnmapTexture2DINTEL(GLuint texture,GLint level);
GLAPI  void  APIENTRY glUpdateObjectBufferATI(GLuint buffer,GLuint offset,GLsizei size,const void *pointer,GLenum preserve);
GLAPI  void  APIENTRY glUseProgram(GLuint program);
GLAPI  void  APIENTRY glUseProgramObjectARB(GLhandleARB programObj);
GLAPI  void  APIENTRY glUseProgramStages(GLuint pipeline,GLbitfield stages,GLuint program);
GLAPI  void  APIENTRY glUseProgramStagesEXT(GLuint pipeline,GLbitfield stages,GLuint program);
GLAPI  void  APIENTRY glUseShaderProgramEXT(GLenum type,GLuint program);
GLAPI  void  APIENTRY glVDPAUGetSurfaceivNV(GLvdpauSurfaceNV surface,GLenum pname,GLsizei bufSize,GLsizei *length,GLint *values);
GLAPI  void  APIENTRY glVDPAUInitNV(const void *vdpDevice,const void *getProcAddress);
GLAPI  GLboolean  APIENTRY glVDPAUIsSurfaceNV(GLvdpauSurfaceNV surface);
GLAPI  void  APIENTRY glVDPAUMapSurfacesNV(GLsizei numSurfaces,const GLvdpauSurfaceNV *surfaces);
GLAPI  GLvdpauSurfaceNV  APIENTRY glVDPAURegisterOutputSurfaceNV(const void *vdpSurface,GLenum target,GLsizei numTextureNames,const GLuint *textureNames);
GLAPI  GLvdpauSurfaceNV  APIENTRY glVDPAURegisterVideoSurfaceNV(const void *vdpSurface,GLenum target,GLsizei numTextureNames,const GLuint *textureNames);
GLAPI  void  APIENTRY glVDPAUSurfaceAccessNV(GLvdpauSurfaceNV surface,GLenum access);
GLAPI  void  APIENTRY glVDPAUUnmapSurfacesNV(GLsizei numSurface,const GLvdpauSurfaceNV *surfaces);
GLAPI  void  APIENTRY glVDPAUUnregisterSurfaceNV(GLvdpauSurfaceNV surface);
GLAPI  void  APIENTRY glValidateProgram(GLuint program);
GLAPI  void  APIENTRY glValidateProgramARB(GLhandleARB programObj);
GLAPI  void  APIENTRY glValidateProgramPipeline(GLuint pipeline);
GLAPI  void  APIENTRY glValidateProgramPipelineEXT(GLuint pipeline);
GLAPI  void  APIENTRY glVariantArrayObjectATI(GLuint id,GLenum type,GLsizei stride,GLuint buffer,GLuint offset);
GLAPI  void  APIENTRY glVariantPointerEXT(GLuint id,GLenum type,GLuint stride,const void *addr);
GLAPI  void  APIENTRY glVariantbvEXT(GLuint id,const GLbyte *addr);
GLAPI  void  APIENTRY glVariantdvEXT(GLuint id,const GLdouble *addr);
GLAPI  void  APIENTRY glVariantfvEXT(GLuint id,const GLfloat *addr);
GLAPI  void  APIENTRY glVariantivEXT(GLuint id,const GLint *addr);
GLAPI  void  APIENTRY glVariantsvEXT(GLuint id,const GLshort *addr);
GLAPI  void  APIENTRY glVariantubvEXT(GLuint id,const GLubyte *addr);
GLAPI  void  APIENTRY glVariantuivEXT(GLuint id,const GLuint *addr);
GLAPI  void  APIENTRY glVariantusvEXT(GLuint id,const GLushort *addr);
GLAPI  void  APIENTRY glVertex2bOES(GLbyte x);
GLAPI  void  APIENTRY glVertex2bvOES(const GLbyte *coords);
GLAPI  void  APIENTRY glVertex2d(GLdouble x,GLdouble y);
GLAPI  void  APIENTRY glVertex2dv(const GLdouble *v);
GLAPI  void  APIENTRY glVertex2f(GLfloat x,GLfloat y);
GLAPI  void  APIENTRY glVertex2fv(const GLfloat *v);
GLAPI  void  APIENTRY glVertex2hNV(GLhalfNV x,GLhalfNV y);
GLAPI  void  APIENTRY glVertex2hvNV(const GLhalfNV *v);
GLAPI  void  APIENTRY glVertex2i(GLint x,GLint y);
GLAPI  void  APIENTRY glVertex2iv(const GLint *v);
GLAPI  void  APIENTRY glVertex2s(GLshort x,GLshort y);
GLAPI  void  APIENTRY glVertex2sv(const GLshort *v);
GLAPI  void  APIENTRY glVertex2xOES(GLfixed x);
GLAPI  void  APIENTRY glVertex2xvOES(const GLfixed *coords);
GLAPI  void  APIENTRY glVertex3bOES(GLbyte x,GLbyte y);
GLAPI  void  APIENTRY glVertex3bvOES(const GLbyte *coords);
GLAPI  void  APIENTRY glVertex3d(GLdouble x,GLdouble y,GLdouble z);
GLAPI  void  APIENTRY glVertex3dv(const GLdouble *v);
GLAPI  void  APIENTRY glVertex3f(GLfloat x,GLfloat y,GLfloat z);
GLAPI  void  APIENTRY glVertex3fv(const GLfloat *v);
GLAPI  void  APIENTRY glVertex3hNV(GLhalfNV x,GLhalfNV y,GLhalfNV z);
GLAPI  void  APIENTRY glVertex3hvNV(const GLhalfNV *v);
GLAPI  void  APIENTRY glVertex3i(GLint x,GLint y,GLint z);
GLAPI  void  APIENTRY glVertex3iv(const GLint *v);
GLAPI  void  APIENTRY glVertex3s(GLshort x,GLshort y,GLshort z);
GLAPI  void  APIENTRY glVertex3sv(const GLshort *v);
GLAPI  void  APIENTRY glVertex3xOES(GLfixed x,GLfixed y);
GLAPI  void  APIENTRY glVertex3xvOES(const GLfixed *coords);
GLAPI  void  APIENTRY glVertex4bOES(GLbyte x,GLbyte y,GLbyte z);
GLAPI  void  APIENTRY glVertex4bvOES(const GLbyte *coords);
GLAPI  void  APIENTRY glVertex4d(GLdouble x,GLdouble y,GLdouble z,GLdouble w);
GLAPI  void  APIENTRY glVertex4dv(const GLdouble *v);
GLAPI  void  APIENTRY glVertex4f(GLfloat x,GLfloat y,GLfloat z,GLfloat w);
GLAPI  void  APIENTRY glVertex4fv(const GLfloat *v);
GLAPI  void  APIENTRY glVertex4hNV(GLhalfNV x,GLhalfNV y,GLhalfNV z,GLhalfNV w);
GLAPI  void  APIENTRY glVertex4hvNV(const GLhalfNV *v);
GLAPI  void  APIENTRY glVertex4i(GLint x,GLint y,GLint z,GLint w);
GLAPI  void  APIENTRY glVertex4iv(const GLint *v);
GLAPI  void  APIENTRY glVertex4s(GLshort x,GLshort y,GLshort z,GLshort w);
GLAPI  void  APIENTRY glVertex4sv(const GLshort *v);
GLAPI  void  APIENTRY glVertex4xOES(GLfixed x,GLfixed y,GLfixed z);
GLAPI  void  APIENTRY glVertex4xvOES(const GLfixed *coords);
GLAPI  void  APIENTRY glVertexArrayBindVertexBufferEXT(GLuint vaobj,GLuint bindingindex,GLuint buffer,GLintptr offset,GLsizei stride);
GLAPI  void  APIENTRY glVertexArrayColorOffsetEXT(GLuint vaobj,GLuint buffer,GLint size,GLenum type,GLsizei stride,GLintptr offset);
GLAPI  void  APIENTRY glVertexArrayEdgeFlagOffsetEXT(GLuint vaobj,GLuint buffer,GLsizei stride,GLintptr offset);
GLAPI  void  APIENTRY glVertexArrayFogCoordOffsetEXT(GLuint vaobj,GLuint buffer,GLenum type,GLsizei stride,GLintptr offset);
GLAPI  void  APIENTRY glVertexArrayIndexOffsetEXT(GLuint vaobj,GLuint buffer,GLenum type,GLsizei stride,GLintptr offset);
GLAPI  void  APIENTRY glVertexArrayMultiTexCoordOffsetEXT(GLuint vaobj,GLuint buffer,GLenum texunit,GLint size,GLenum type,GLsizei stride,GLintptr offset);
GLAPI  void  APIENTRY glVertexArrayNormalOffsetEXT(GLuint vaobj,GLuint buffer,GLenum type,GLsizei stride,GLintptr offset);
GLAPI  void  APIENTRY glVertexArrayParameteriAPPLE(GLenum pname,GLint param);
GLAPI  void  APIENTRY glVertexArrayRangeAPPLE(GLsizei length,void *pointer);
GLAPI  void  APIENTRY glVertexArrayRangeNV(GLsizei length,const void *pointer);
GLAPI  void  APIENTRY glVertexArraySecondaryColorOffsetEXT(GLuint vaobj,GLuint buffer,GLint size,GLenum type,GLsizei stride,GLintptr offset);
GLAPI  void  APIENTRY glVertexArrayTexCoordOffsetEXT(GLuint vaobj,GLuint buffer,GLint size,GLenum type,GLsizei stride,GLintptr offset);
GLAPI  void  APIENTRY glVertexArrayVertexAttribBindingEXT(GLuint vaobj,GLuint attribindex,GLuint bindingindex);
GLAPI  void  APIENTRY glVertexArrayVertexAttribDivisorEXT(GLuint vaobj,GLuint index,GLuint divisor);
GLAPI  void  APIENTRY glVertexArrayVertexAttribFormatEXT(GLuint vaobj,GLuint attribindex,GLint size,GLenum type,GLboolean normalized,GLuint relativeoffset);
GLAPI  void  APIENTRY glVertexArrayVertexAttribIFormatEXT(GLuint vaobj,GLuint attribindex,GLint size,GLenum type,GLuint relativeoffset);
GLAPI  void  APIENTRY glVertexArrayVertexAttribIOffsetEXT(GLuint vaobj,GLuint buffer,GLuint index,GLint size,GLenum type,GLsizei stride,GLintptr offset);
GLAPI  void  APIENTRY glVertexArrayVertexAttribLFormatEXT(GLuint vaobj,GLuint attribindex,GLint size,GLenum type,GLuint relativeoffset);
GLAPI  void  APIENTRY glVertexArrayVertexAttribLOffsetEXT(GLuint vaobj,GLuint buffer,GLuint index,GLint size,GLenum type,GLsizei stride,GLintptr offset);
GLAPI  void  APIENTRY glVertexArrayVertexAttribOffsetEXT(GLuint vaobj,GLuint buffer,GLuint index,GLint size,GLenum type,GLboolean normalized,GLsizei stride,GLintptr offset);
GLAPI  void  APIENTRY glVertexArrayVertexBindingDivisorEXT(GLuint vaobj,GLuint bindingindex,GLuint divisor);
GLAPI  void  APIENTRY glVertexArrayVertexOffsetEXT(GLuint vaobj,GLuint buffer,GLint size,GLenum type,GLsizei stride,GLintptr offset);
GLAPI  void  APIENTRY glVertexAttrib1d(GLuint index,GLdouble x);
GLAPI  void  APIENTRY glVertexAttrib1dARB(GLuint index,GLdouble x);
GLAPI  void  APIENTRY glVertexAttrib1dNV(GLuint index,GLdouble x);
GLAPI  void  APIENTRY glVertexAttrib1dv(GLuint index,const GLdouble *v);
GLAPI  void  APIENTRY glVertexAttrib1dvARB(GLuint index,const GLdouble *v);
GLAPI  void  APIENTRY glVertexAttrib1dvNV(GLuint index,const GLdouble *v);
GLAPI  void  APIENTRY glVertexAttrib1f(GLuint index,GLfloat x);
GLAPI  void  APIENTRY glVertexAttrib1fARB(GLuint index,GLfloat x);
GLAPI  void  APIENTRY glVertexAttrib1fNV(GLuint index,GLfloat x);
GLAPI  void  APIENTRY glVertexAttrib1fv(GLuint index,const GLfloat *v);
GLAPI  void  APIENTRY glVertexAttrib1fvARB(GLuint index,const GLfloat *v);
GLAPI  void  APIENTRY glVertexAttrib1fvNV(GLuint index,const GLfloat *v);
GLAPI  void  APIENTRY glVertexAttrib1hNV(GLuint index,GLhalfNV x);
GLAPI  void  APIENTRY glVertexAttrib1hvNV(GLuint index,const GLhalfNV *v);
GLAPI  void  APIENTRY glVertexAttrib1s(GLuint index,GLshort x);
GLAPI  void  APIENTRY glVertexAttrib1sARB(GLuint index,GLshort x);
GLAPI  void  APIENTRY glVertexAttrib1sNV(GLuint index,GLshort x);
GLAPI  void  APIENTRY glVertexAttrib1sv(GLuint index,const GLshort *v);
GLAPI  void  APIENTRY glVertexAttrib1svARB(GLuint index,const GLshort *v);
GLAPI  void  APIENTRY glVertexAttrib1svNV(GLuint index,const GLshort *v);
GLAPI  void  APIENTRY glVertexAttrib2d(GLuint index,GLdouble x,GLdouble y);
GLAPI  void  APIENTRY glVertexAttrib2dARB(GLuint index,GLdouble x,GLdouble y);
GLAPI  void  APIENTRY glVertexAttrib2dNV(GLuint index,GLdouble x,GLdouble y);
GLAPI  void  APIENTRY glVertexAttrib2dv(GLuint index,const GLdouble *v);
GLAPI  void  APIENTRY glVertexAttrib2dvARB(GLuint index,const GLdouble *v);
GLAPI  void  APIENTRY glVertexAttrib2dvNV(GLuint index,const GLdouble *v);
GLAPI  void  APIENTRY glVertexAttrib2f(GLuint index,GLfloat x,GLfloat y);
GLAPI  void  APIENTRY glVertexAttrib2fARB(GLuint index,GLfloat x,GLfloat y);
GLAPI  void  APIENTRY glVertexAttrib2fNV(GLuint index,GLfloat x,GLfloat y);
GLAPI  void  APIENTRY glVertexAttrib2fv(GLuint index,const GLfloat *v);
GLAPI  void  APIENTRY glVertexAttrib2fvARB(GLuint index,const GLfloat *v);
GLAPI  void  APIENTRY glVertexAttrib2fvNV(GLuint index,const GLfloat *v);
GLAPI  void  APIENTRY glVertexAttrib2hNV(GLuint index,GLhalfNV x,GLhalfNV y);
GLAPI  void  APIENTRY glVertexAttrib2hvNV(GLuint index,const GLhalfNV *v);
GLAPI  void  APIENTRY glVertexAttrib2s(GLuint index,GLshort x,GLshort y);
GLAPI  void  APIENTRY glVertexAttrib2sARB(GLuint index,GLshort x,GLshort y);
GLAPI  void  APIENTRY glVertexAttrib2sNV(GLuint index,GLshort x,GLshort y);
GLAPI  void  APIENTRY glVertexAttrib2sv(GLuint index,const GLshort *v);
GLAPI  void  APIENTRY glVertexAttrib2svARB(GLuint index,const GLshort *v);
GLAPI  void  APIENTRY glVertexAttrib2svNV(GLuint index,const GLshort *v);
GLAPI  void  APIENTRY glVertexAttrib3d(GLuint index,GLdouble x,GLdouble y,GLdouble z);
GLAPI  void  APIENTRY glVertexAttrib3dARB(GLuint index,GLdouble x,GLdouble y,GLdouble z);
GLAPI  void  APIENTRY glVertexAttrib3dNV(GLuint index,GLdouble x,GLdouble y,GLdouble z);
GLAPI  void  APIENTRY glVertexAttrib3dv(GLuint index,const GLdouble *v);
GLAPI  void  APIENTRY glVertexAttrib3dvARB(GLuint index,const GLdouble *v);
GLAPI  void  APIENTRY glVertexAttrib3dvNV(GLuint index,const GLdouble *v);
GLAPI  void  APIENTRY glVertexAttrib3f(GLuint index,GLfloat x,GLfloat y,GLfloat z);
GLAPI  void  APIENTRY glVertexAttrib3fARB(GLuint index,GLfloat x,GLfloat y,GLfloat z);
GLAPI  void  APIENTRY glVertexAttrib3fNV(GLuint index,GLfloat x,GLfloat y,GLfloat z);
GLAPI  void  APIENTRY glVertexAttrib3fv(GLuint index,const GLfloat *v);
GLAPI  void  APIENTRY glVertexAttrib3fvARB(GLuint index,const GLfloat *v);
GLAPI  void  APIENTRY glVertexAttrib3fvNV(GLuint index,const GLfloat *v);
GLAPI  void  APIENTRY glVertexAttrib3hNV(GLuint index,GLhalfNV x,GLhalfNV y,GLhalfNV z);
GLAPI  void  APIENTRY glVertexAttrib3hvNV(GLuint index,const GLhalfNV *v);
GLAPI  void  APIENTRY glVertexAttrib3s(GLuint index,GLshort x,GLshort y,GLshort z);
GLAPI  void  APIENTRY glVertexAttrib3sARB(GLuint index,GLshort x,GLshort y,GLshort z);
GLAPI  void  APIENTRY glVertexAttrib3sNV(GLuint index,GLshort x,GLshort y,GLshort z);
GLAPI  void  APIENTRY glVertexAttrib3sv(GLuint index,const GLshort *v);
GLAPI  void  APIENTRY glVertexAttrib3svARB(GLuint index,const GLshort *v);
GLAPI  void  APIENTRY glVertexAttrib3svNV(GLuint index,const GLshort *v);
GLAPI  void  APIENTRY glVertexAttrib4Nbv(GLuint index,const GLbyte *v);
GLAPI  void  APIENTRY glVertexAttrib4NbvARB(GLuint index,const GLbyte *v);
GLAPI  void  APIENTRY glVertexAttrib4Niv(GLuint index,const GLint *v);
GLAPI  void  APIENTRY glVertexAttrib4NivARB(GLuint index,const GLint *v);
GLAPI  void  APIENTRY glVertexAttrib4Nsv(GLuint index,const GLshort *v);
GLAPI  void  APIENTRY glVertexAttrib4NsvARB(GLuint index,const GLshort *v);
GLAPI  void  APIENTRY glVertexAttrib4Nub(GLuint index,GLubyte x,GLubyte y,GLubyte z,GLubyte w);
GLAPI  void  APIENTRY glVertexAttrib4NubARB(GLuint index,GLubyte x,GLubyte y,GLubyte z,GLubyte w);
GLAPI  void  APIENTRY glVertexAttrib4Nubv(GLuint index,const GLubyte *v);
GLAPI  void  APIENTRY glVertexAttrib4NubvARB(GLuint index,const GLubyte *v);
GLAPI  void  APIENTRY glVertexAttrib4Nuiv(GLuint index,const GLuint *v);
GLAPI  void  APIENTRY glVertexAttrib4NuivARB(GLuint index,const GLuint *v);
GLAPI  void  APIENTRY glVertexAttrib4Nusv(GLuint index,const GLushort *v);
GLAPI  void  APIENTRY glVertexAttrib4NusvARB(GLuint index,const GLushort *v);
GLAPI  void  APIENTRY glVertexAttrib4bv(GLuint index,const GLbyte *v);
GLAPI  void  APIENTRY glVertexAttrib4bvARB(GLuint index,const GLbyte *v);
GLAPI  void  APIENTRY glVertexAttrib4d(GLuint index,GLdouble x,GLdouble y,GLdouble z,GLdouble w);
GLAPI  void  APIENTRY glVertexAttrib4dARB(GLuint index,GLdouble x,GLdouble y,GLdouble z,GLdouble w);
GLAPI  void  APIENTRY glVertexAttrib4dNV(GLuint index,GLdouble x,GLdouble y,GLdouble z,GLdouble w);
GLAPI  void  APIENTRY glVertexAttrib4dv(GLuint index,const GLdouble *v);
GLAPI  void  APIENTRY glVertexAttrib4dvARB(GLuint index,const GLdouble *v);
GLAPI  void  APIENTRY glVertexAttrib4dvNV(GLuint index,const GLdouble *v);
GLAPI  void  APIENTRY glVertexAttrib4f(GLuint index,GLfloat x,GLfloat y,GLfloat z,GLfloat w);
GLAPI  void  APIENTRY glVertexAttrib4fARB(GLuint index,GLfloat x,GLfloat y,GLfloat z,GLfloat w);
GLAPI  void  APIENTRY glVertexAttrib4fNV(GLuint index,GLfloat x,GLfloat y,GLfloat z,GLfloat w);
GLAPI  void  APIENTRY glVertexAttrib4fv(GLuint index,const GLfloat *v);
GLAPI  void  APIENTRY glVertexAttrib4fvARB(GLuint index,const GLfloat *v);
GLAPI  void  APIENTRY glVertexAttrib4fvNV(GLuint index,const GLfloat *v);
GLAPI  void  APIENTRY glVertexAttrib4hNV(GLuint index,GLhalfNV x,GLhalfNV y,GLhalfNV z,GLhalfNV w);
GLAPI  void  APIENTRY glVertexAttrib4hvNV(GLuint index,const GLhalfNV *v);
GLAPI  void  APIENTRY glVertexAttrib4iv(GLuint index,const GLint *v);
GLAPI  void  APIENTRY glVertexAttrib4ivARB(GLuint index,const GLint *v);
GLAPI  void  APIENTRY glVertexAttrib4s(GLuint index,GLshort x,GLshort y,GLshort z,GLshort w);
GLAPI  void  APIENTRY glVertexAttrib4sARB(GLuint index,GLshort x,GLshort y,GLshort z,GLshort w);
GLAPI  void  APIENTRY glVertexAttrib4sNV(GLuint index,GLshort x,GLshort y,GLshort z,GLshort w);
GLAPI  void  APIENTRY glVertexAttrib4sv(GLuint index,const GLshort *v);
GLAPI  void  APIENTRY glVertexAttrib4svARB(GLuint index,const GLshort *v);
GLAPI  void  APIENTRY glVertexAttrib4svNV(GLuint index,const GLshort *v);
GLAPI  void  APIENTRY glVertexAttrib4ubNV(GLuint index,GLubyte x,GLubyte y,GLubyte z,GLubyte w);
GLAPI  void  APIENTRY glVertexAttrib4ubv(GLuint index,const GLubyte *v);
GLAPI  void  APIENTRY glVertexAttrib4ubvARB(GLuint index,const GLubyte *v);
GLAPI  void  APIENTRY glVertexAttrib4ubvNV(GLuint index,const GLubyte *v);
GLAPI  void  APIENTRY glVertexAttrib4uiv(GLuint index,const GLuint *v);
GLAPI  void  APIENTRY glVertexAttrib4uivARB(GLuint index,const GLuint *v);
GLAPI  void  APIENTRY glVertexAttrib4usv(GLuint index,const GLushort *v);
GLAPI  void  APIENTRY glVertexAttrib4usvARB(GLuint index,const GLushort *v);
GLAPI  void  APIENTRY glVertexAttribArrayObjectATI(GLuint index,GLint size,GLenum type,GLboolean normalized,GLsizei stride,GLuint buffer,GLuint offset);
GLAPI  void  APIENTRY glVertexAttribBinding(GLuint attribindex,GLuint bindingindex);
GLAPI  void  APIENTRY glVertexAttribDivisor(GLuint index,GLuint divisor);
GLAPI  void  APIENTRY glVertexAttribDivisorANGLE(GLuint index,GLuint divisor);
GLAPI  void  APIENTRY glVertexAttribDivisorARB(GLuint index,GLuint divisor);
GLAPI  void  APIENTRY glVertexAttribDivisorEXT(GLuint index,GLuint divisor);
GLAPI  void  APIENTRY glVertexAttribDivisorNV(GLuint index,GLuint divisor);
GLAPI  void  APIENTRY glVertexAttribFormat(GLuint attribindex,GLint size,GLenum type,GLboolean normalized,GLuint relativeoffset);
GLAPI  void  APIENTRY glVertexAttribFormatNV(GLuint index,GLint size,GLenum type,GLboolean normalized,GLsizei stride);
GLAPI  void  APIENTRY glVertexAttribI1i(GLuint index,GLint x);
GLAPI  void  APIENTRY glVertexAttribI1iEXT(GLuint index,GLint x);
GLAPI  void  APIENTRY glVertexAttribI1iv(GLuint index,const GLint *v);
GLAPI  void  APIENTRY glVertexAttribI1ivEXT(GLuint index,const GLint *v);
GLAPI  void  APIENTRY glVertexAttribI1ui(GLuint index,GLuint x);
GLAPI  void  APIENTRY glVertexAttribI1uiEXT(GLuint index,GLuint x);
GLAPI  void  APIENTRY glVertexAttribI1uiv(GLuint index,const GLuint *v);
GLAPI  void  APIENTRY glVertexAttribI1uivEXT(GLuint index,const GLuint *v);
GLAPI  void  APIENTRY glVertexAttribI2i(GLuint index,GLint x,GLint y);
GLAPI  void  APIENTRY glVertexAttribI2iEXT(GLuint index,GLint x,GLint y);
GLAPI  void  APIENTRY glVertexAttribI2iv(GLuint index,const GLint *v);
GLAPI  void  APIENTRY glVertexAttribI2ivEXT(GLuint index,const GLint *v);
GLAPI  void  APIENTRY glVertexAttribI2ui(GLuint index,GLuint x,GLuint y);
GLAPI  void  APIENTRY glVertexAttribI2uiEXT(GLuint index,GLuint x,GLuint y);
GLAPI  void  APIENTRY glVertexAttribI2uiv(GLuint index,const GLuint *v);
GLAPI  void  APIENTRY glVertexAttribI2uivEXT(GLuint index,const GLuint *v);
GLAPI  void  APIENTRY glVertexAttribI3i(GLuint index,GLint x,GLint y,GLint z);
GLAPI  void  APIENTRY glVertexAttribI3iEXT(GLuint index,GLint x,GLint y,GLint z);
GLAPI  void  APIENTRY glVertexAttribI3iv(GLuint index,const GLint *v);
GLAPI  void  APIENTRY glVertexAttribI3ivEXT(GLuint index,const GLint *v);
GLAPI  void  APIENTRY glVertexAttribI3ui(GLuint index,GLuint x,GLuint y,GLuint z);
GLAPI  void  APIENTRY glVertexAttribI3uiEXT(GLuint index,GLuint x,GLuint y,GLuint z);
GLAPI  void  APIENTRY glVertexAttribI3uiv(GLuint index,const GLuint *v);
GLAPI  void  APIENTRY glVertexAttribI3uivEXT(GLuint index,const GLuint *v);
GLAPI  void  APIENTRY glVertexAttribI4bv(GLuint index,const GLbyte *v);
GLAPI  void  APIENTRY glVertexAttribI4bvEXT(GLuint index,const GLbyte *v);
GLAPI  void  APIENTRY glVertexAttribI4i(GLuint index,GLint x,GLint y,GLint z,GLint w);
GLAPI  void  APIENTRY glVertexAttribI4iEXT(GLuint index,GLint x,GLint y,GLint z,GLint w);
GLAPI  void  APIENTRY glVertexAttribI4iv(GLuint index,const GLint *v);
GLAPI  void  APIENTRY glVertexAttribI4ivEXT(GLuint index,const GLint *v);
GLAPI  void  APIENTRY glVertexAttribI4sv(GLuint index,const GLshort *v);
GLAPI  void  APIENTRY glVertexAttribI4svEXT(GLuint index,const GLshort *v);
GLAPI  void  APIENTRY glVertexAttribI4ubv(GLuint index,const GLubyte *v);
GLAPI  void  APIENTRY glVertexAttribI4ubvEXT(GLuint index,const GLubyte *v);
GLAPI  void  APIENTRY glVertexAttribI4ui(GLuint index,GLuint x,GLuint y,GLuint z,GLuint w);
GLAPI  void  APIENTRY glVertexAttribI4uiEXT(GLuint index,GLuint x,GLuint y,GLuint z,GLuint w);
GLAPI  void  APIENTRY glVertexAttribI4uiv(GLuint index,const GLuint *v);
GLAPI  void  APIENTRY glVertexAttribI4uivEXT(GLuint index,const GLuint *v);
GLAPI  void  APIENTRY glVertexAttribI4usv(GLuint index,const GLushort *v);
GLAPI  void  APIENTRY glVertexAttribI4usvEXT(GLuint index,const GLushort *v);
GLAPI  void  APIENTRY glVertexAttribIFormat(GLuint attribindex,GLint size,GLenum type,GLuint relativeoffset);
GLAPI  void  APIENTRY glVertexAttribIFormatNV(GLuint index,GLint size,GLenum type,GLsizei stride);
GLAPI  void  APIENTRY glVertexAttribIPointer(GLuint index,GLint size,GLenum type,GLsizei stride,const void *pointer);
GLAPI  void  APIENTRY glVertexAttribIPointerEXT(GLuint index,GLint size,GLenum type,GLsizei stride,const void *pointer);
GLAPI  void  APIENTRY glVertexAttribL1d(GLuint index,GLdouble x);
GLAPI  void  APIENTRY glVertexAttribL1dEXT(GLuint index,GLdouble x);
GLAPI  void  APIENTRY glVertexAttribL1dv(GLuint index,const GLdouble *v);
GLAPI  void  APIENTRY glVertexAttribL1dvEXT(GLuint index,const GLdouble *v);
GLAPI  void  APIENTRY glVertexAttribL1i64NV(GLuint index,GLint64EXT x);
GLAPI  void  APIENTRY glVertexAttribL1i64vNV(GLuint index,const GLint64EXT *v);
GLAPI  void  APIENTRY glVertexAttribL1ui64ARB(GLuint index,GLuint64EXT x);
GLAPI  void  APIENTRY glVertexAttribL1ui64NV(GLuint index,GLuint64EXT x);
GLAPI  void  APIENTRY glVertexAttribL1ui64vARB(GLuint index,const GLuint64EXT *v);
GLAPI  void  APIENTRY glVertexAttribL1ui64vNV(GLuint index,const GLuint64EXT *v);
GLAPI  void  APIENTRY glVertexAttribL2d(GLuint index,GLdouble x,GLdouble y);
GLAPI  void  APIENTRY glVertexAttribL2dEXT(GLuint index,GLdouble x,GLdouble y);
GLAPI  void  APIENTRY glVertexAttribL2dv(GLuint index,const GLdouble *v);
GLAPI  void  APIENTRY glVertexAttribL2dvEXT(GLuint index,const GLdouble *v);
GLAPI  void  APIENTRY glVertexAttribL2i64NV(GLuint index,GLint64EXT x,GLint64EXT y);
GLAPI  void  APIENTRY glVertexAttribL2i64vNV(GLuint index,const GLint64EXT *v);
GLAPI  void  APIENTRY glVertexAttribL2ui64NV(GLuint index,GLuint64EXT x,GLuint64EXT y);
GLAPI  void  APIENTRY glVertexAttribL2ui64vNV(GLuint index,const GLuint64EXT *v);
GLAPI  void  APIENTRY glVertexAttribL3d(GLuint index,GLdouble x,GLdouble y,GLdouble z);
GLAPI  void  APIENTRY glVertexAttribL3dEXT(GLuint index,GLdouble x,GLdouble y,GLdouble z);
GLAPI  void  APIENTRY glVertexAttribL3dv(GLuint index,const GLdouble *v);
GLAPI  void  APIENTRY glVertexAttribL3dvEXT(GLuint index,const GLdouble *v);
GLAPI  void  APIENTRY glVertexAttribL3i64NV(GLuint index,GLint64EXT x,GLint64EXT y,GLint64EXT z);
GLAPI  void  APIENTRY glVertexAttribL3i64vNV(GLuint index,const GLint64EXT *v);
GLAPI  void  APIENTRY glVertexAttribL3ui64NV(GLuint index,GLuint64EXT x,GLuint64EXT y,GLuint64EXT z);
GLAPI  void  APIENTRY glVertexAttribL3ui64vNV(GLuint index,const GLuint64EXT *v);
GLAPI  void  APIENTRY glVertexAttribL4d(GLuint index,GLdouble x,GLdouble y,GLdouble z,GLdouble w);
GLAPI  void  APIENTRY glVertexAttribL4dEXT(GLuint index,GLdouble x,GLdouble y,GLdouble z,GLdouble w);
GLAPI  void  APIENTRY glVertexAttribL4dv(GLuint index,const GLdouble *v);
GLAPI  void  APIENTRY glVertexAttribL4dvEXT(GLuint index,const GLdouble *v);
GLAPI  void  APIENTRY glVertexAttribL4i64NV(GLuint index,GLint64EXT x,GLint64EXT y,GLint64EXT z,GLint64EXT w);
GLAPI  void  APIENTRY glVertexAttribL4i64vNV(GLuint index,const GLint64EXT *v);
GLAPI  void  APIENTRY glVertexAttribL4ui64NV(GLuint index,GLuint64EXT x,GLuint64EXT y,GLuint64EXT z,GLuint64EXT w);
GLAPI  void  APIENTRY glVertexAttribL4ui64vNV(GLuint index,const GLuint64EXT *v);
GLAPI  void  APIENTRY glVertexAttribLFormat(GLuint attribindex,GLint size,GLenum type,GLuint relativeoffset);
GLAPI  void  APIENTRY glVertexAttribLFormatNV(GLuint index,GLint size,GLenum type,GLsizei stride);
GLAPI  void  APIENTRY glVertexAttribLPointer(GLuint index,GLint size,GLenum type,GLsizei stride,const void *pointer);
GLAPI  void  APIENTRY glVertexAttribLPointerEXT(GLuint index,GLint size,GLenum type,GLsizei stride,const void *pointer);
GLAPI  void  APIENTRY glVertexAttribP1ui(GLuint index,GLenum type,GLboolean normalized,GLuint value);
GLAPI  void  APIENTRY glVertexAttribP1uiv(GLuint index,GLenum type,GLboolean normalized,const GLuint *value);
GLAPI  void  APIENTRY glVertexAttribP2ui(GLuint index,GLenum type,GLboolean normalized,GLuint value);
GLAPI  void  APIENTRY glVertexAttribP2uiv(GLuint index,GLenum type,GLboolean normalized,const GLuint *value);
GLAPI  void  APIENTRY glVertexAttribP3ui(GLuint index,GLenum type,GLboolean normalized,GLuint value);
GLAPI  void  APIENTRY glVertexAttribP3uiv(GLuint index,GLenum type,GLboolean normalized,const GLuint *value);
GLAPI  void  APIENTRY glVertexAttribP4ui(GLuint index,GLenum type,GLboolean normalized,GLuint value);
GLAPI  void  APIENTRY glVertexAttribP4uiv(GLuint index,GLenum type,GLboolean normalized,const GLuint *value);
GLAPI  void  APIENTRY glVertexAttribParameteriAMD(GLuint index,GLenum pname,GLint param);
GLAPI  void  APIENTRY glVertexAttribPointer(GLuint index,GLint size,GLenum type,GLboolean normalized,GLsizei stride,const void *pointer);
GLAPI  void  APIENTRY glVertexAttribPointerARB(GLuint index,GLint size,GLenum type,GLboolean normalized,GLsizei stride,const void *pointer);
GLAPI  void  APIENTRY glVertexAttribPointerNV(GLuint index,GLint fsize,GLenum type,GLsizei stride,const void *pointer);
GLAPI  void  APIENTRY glVertexAttribs1dvNV(GLuint index,GLsizei count,const GLdouble *v);
GLAPI  void  APIENTRY glVertexAttribs1fvNV(GLuint index,GLsizei count,const GLfloat *v);
GLAPI  void  APIENTRY glVertexAttribs1hvNV(GLuint index,GLsizei n,const GLhalfNV *v);
GLAPI  void  APIENTRY glVertexAttribs1svNV(GLuint index,GLsizei count,const GLshort *v);
GLAPI  void  APIENTRY glVertexAttribs2dvNV(GLuint index,GLsizei count,const GLdouble *v);
GLAPI  void  APIENTRY glVertexAttribs2fvNV(GLuint index,GLsizei count,const GLfloat *v);
GLAPI  void  APIENTRY glVertexAttribs2hvNV(GLuint index,GLsizei n,const GLhalfNV *v);
GLAPI  void  APIENTRY glVertexAttribs2svNV(GLuint index,GLsizei count,const GLshort *v);
GLAPI  void  APIENTRY glVertexAttribs3dvNV(GLuint index,GLsizei count,const GLdouble *v);
GLAPI  void  APIENTRY glVertexAttribs3fvNV(GLuint index,GLsizei count,const GLfloat *v);
GLAPI  void  APIENTRY glVertexAttribs3hvNV(GLuint index,GLsizei n,const GLhalfNV *v);
GLAPI  void  APIENTRY glVertexAttribs3svNV(GLuint index,GLsizei count,const GLshort *v);
GLAPI  void  APIENTRY glVertexAttribs4dvNV(GLuint index,GLsizei count,const GLdouble *v);
GLAPI  void  APIENTRY glVertexAttribs4fvNV(GLuint index,GLsizei count,const GLfloat *v);
GLAPI  void  APIENTRY glVertexAttribs4hvNV(GLuint index,GLsizei n,const GLhalfNV *v);
GLAPI  void  APIENTRY glVertexAttribs4svNV(GLuint index,GLsizei count,const GLshort *v);
GLAPI  void  APIENTRY glVertexAttribs4ubvNV(GLuint index,GLsizei count,const GLubyte *v);
GLAPI  void  APIENTRY glVertexBindingDivisor(GLuint bindingindex,GLuint divisor);
GLAPI  void  APIENTRY glVertexBlendARB(GLint count);
GLAPI  void  APIENTRY glVertexBlendEnvfATI(GLenum pname,GLfloat param);
GLAPI  void  APIENTRY glVertexBlendEnviATI(GLenum pname,GLint param);
GLAPI  void  APIENTRY glVertexFormatNV(GLint size,GLenum type,GLsizei stride);
GLAPI  void  APIENTRY glVertexP2ui(GLenum type,GLuint value);
GLAPI  void  APIENTRY glVertexP2uiv(GLenum type,const GLuint *value);
GLAPI  void  APIENTRY glVertexP3ui(GLenum type,GLuint value);
GLAPI  void  APIENTRY glVertexP3uiv(GLenum type,const GLuint *value);
GLAPI  void  APIENTRY glVertexP4ui(GLenum type,GLuint value);
GLAPI  void  APIENTRY glVertexP4uiv(GLenum type,const GLuint *value);
GLAPI  void  APIENTRY glVertexPointer(GLint size,GLenum type,GLsizei stride,const void *pointer);
GLAPI  void  APIENTRY glVertexPointerEXT(GLint size,GLenum type,GLsizei stride,GLsizei count,const void *pointer);
GLAPI  void  APIENTRY glVertexPointerListIBM(GLint size,GLenum type,GLint stride,const void **pointer,GLint ptrstride);
GLAPI  void  APIENTRY glVertexPointervINTEL(GLint size,GLenum type,const void **pointer);
GLAPI  void  APIENTRY glVertexStream1dATI(GLenum stream,GLdouble x);
GLAPI  void  APIENTRY glVertexStream1dvATI(GLenum stream,const GLdouble *coords);
GLAPI  void  APIENTRY glVertexStream1fATI(GLenum stream,GLfloat x);
GLAPI  void  APIENTRY glVertexStream1fvATI(GLenum stream,const GLfloat *coords);
GLAPI  void  APIENTRY glVertexStream1iATI(GLenum stream,GLint x);
GLAPI  void  APIENTRY glVertexStream1ivATI(GLenum stream,const GLint *coords);
GLAPI  void  APIENTRY glVertexStream1sATI(GLenum stream,GLshort x);
GLAPI  void  APIENTRY glVertexStream1svATI(GLenum stream,const GLshort *coords);
GLAPI  void  APIENTRY glVertexStream2dATI(GLenum stream,GLdouble x,GLdouble y);
GLAPI  void  APIENTRY glVertexStream2dvATI(GLenum stream,const GLdouble *coords);
GLAPI  void  APIENTRY glVertexStream2fATI(GLenum stream,GLfloat x,GLfloat y);
GLAPI  void  APIENTRY glVertexStream2fvATI(GLenum stream,const GLfloat *coords);
GLAPI  void  APIENTRY glVertexStream2iATI(GLenum stream,GLint x,GLint y);
GLAPI  void  APIENTRY glVertexStream2ivATI(GLenum stream,const GLint *coords);
GLAPI  void  APIENTRY glVertexStream2sATI(GLenum stream,GLshort x,GLshort y);
GLAPI  void  APIENTRY glVertexStream2svATI(GLenum stream,const GLshort *coords);
GLAPI  void  APIENTRY glVertexStream3dATI(GLenum stream,GLdouble x,GLdouble y,GLdouble z);
GLAPI  void  APIENTRY glVertexStream3dvATI(GLenum stream,const GLdouble *coords);
GLAPI  void  APIENTRY glVertexStream3fATI(GLenum stream,GLfloat x,GLfloat y,GLfloat z);
GLAPI  void  APIENTRY glVertexStream3fvATI(GLenum stream,const GLfloat *coords);
GLAPI  void  APIENTRY glVertexStream3iATI(GLenum stream,GLint x,GLint y,GLint z);
GLAPI  void  APIENTRY glVertexStream3ivATI(GLenum stream,const GLint *coords);
GLAPI  void  APIENTRY glVertexStream3sATI(GLenum stream,GLshort x,GLshort y,GLshort z);
GLAPI  void  APIENTRY glVertexStream3svATI(GLenum stream,const GLshort *coords);
GLAPI  void  APIENTRY glVertexStream4dATI(GLenum stream,GLdouble x,GLdouble y,GLdouble z,GLdouble w);
GLAPI  void  APIENTRY glVertexStream4dvATI(GLenum stream,const GLdouble *coords);
GLAPI  void  APIENTRY glVertexStream4fATI(GLenum stream,GLfloat x,GLfloat y,GLfloat z,GLfloat w);
GLAPI  void  APIENTRY glVertexStream4fvATI(GLenum stream,const GLfloat *coords);
GLAPI  void  APIENTRY glVertexStream4iATI(GLenum stream,GLint x,GLint y,GLint z,GLint w);
GLAPI  void  APIENTRY glVertexStream4ivATI(GLenum stream,const GLint *coords);
GLAPI  void  APIENTRY glVertexStream4sATI(GLenum stream,GLshort x,GLshort y,GLshort z,GLshort w);
GLAPI  void  APIENTRY glVertexStream4svATI(GLenum stream,const GLshort *coords);
GLAPI  void  APIENTRY glVertexWeightPointerEXT(GLint size,GLenum type,GLsizei stride,const void *pointer);
GLAPI  void  APIENTRY glVertexWeightfEXT(GLfloat weight);
GLAPI  void  APIENTRY glVertexWeightfvEXT(const GLfloat *weight);
GLAPI  void  APIENTRY glVertexWeighthNV(GLhalfNV weight);
GLAPI  void  APIENTRY glVertexWeighthvNV(const GLhalfNV *weight);
GLAPI  GLenum  APIENTRY glVideoCaptureNV(GLuint video_capture_slot,GLuint *sequence_num,GLuint64EXT *capture_time);
GLAPI  void  APIENTRY glVideoCaptureStreamParameterdvNV(GLuint video_capture_slot,GLuint stream,GLenum pname,const GLdouble *params);
GLAPI  void  APIENTRY glVideoCaptureStreamParameterfvNV(GLuint video_capture_slot,GLuint stream,GLenum pname,const GLfloat *params);
GLAPI  void  APIENTRY glVideoCaptureStreamParameterivNV(GLuint video_capture_slot,GLuint stream,GLenum pname,const GLint *params);
GLAPI  void  APIENTRY glViewport(GLint x,GLint y,GLsizei width,GLsizei height);
GLAPI  void  APIENTRY glViewportArrayv(GLuint first,GLsizei count,const GLfloat *v);
GLAPI  void  APIENTRY glViewportIndexedf(GLuint index,GLfloat x,GLfloat y,GLfloat w,GLfloat h);
GLAPI  void  APIENTRY glViewportIndexedfv(GLuint index,const GLfloat *v);
GLAPI  void  APIENTRY glWaitSync(GLsync sync,GLbitfield flags,GLuint64 timeout);
GLAPI  void  APIENTRY glWaitSyncAPPLE(GLsync sync,GLbitfield flags,GLuint64 timeout);
GLAPI  void  APIENTRY glWeightPathsNV(GLuint resultPath,GLsizei numPaths,const GLuint *paths,const GLfloat *weights);
GLAPI  void  APIENTRY glWeightPointerARB(GLint size,GLenum type,GLsizei stride,const void *pointer);
GLAPI  void  APIENTRY glWeightPointerOES(GLint size,GLenum type,GLsizei stride,const void *pointer);
GLAPI  void  APIENTRY glWeightbvARB(GLint size,const GLbyte *weights);
GLAPI  void  APIENTRY glWeightdvARB(GLint size,const GLdouble *weights);
GLAPI  void  APIENTRY glWeightfvARB(GLint size,const GLfloat *weights);
GLAPI  void  APIENTRY glWeightivARB(GLint size,const GLint *weights);
GLAPI  void  APIENTRY glWeightsvARB(GLint size,const GLshort *weights);
GLAPI  void  APIENTRY glWeightubvARB(GLint size,const GLubyte *weights);
GLAPI  void  APIENTRY glWeightuivARB(GLint size,const GLuint *weights);
GLAPI  void  APIENTRY glWeightusvARB(GLint size,const GLushort *weights);
GLAPI  void  APIENTRY glWindowPos2d(GLdouble x,GLdouble y);
GLAPI  void  APIENTRY glWindowPos2dARB(GLdouble x,GLdouble y);
GLAPI  void  APIENTRY glWindowPos2dMESA(GLdouble x,GLdouble y);
GLAPI  void  APIENTRY glWindowPos2dv(const GLdouble *v);
GLAPI  void  APIENTRY glWindowPos2dvARB(const GLdouble *v);
GLAPI  void  APIENTRY glWindowPos2dvMESA(const GLdouble *v);
GLAPI  void  APIENTRY glWindowPos2f(GLfloat x,GLfloat y);
GLAPI  void  APIENTRY glWindowPos2fARB(GLfloat x,GLfloat y);
GLAPI  void  APIENTRY glWindowPos2fMESA(GLfloat x,GLfloat y);
GLAPI  void  APIENTRY glWindowPos2fv(const GLfloat *v);
GLAPI  void  APIENTRY glWindowPos2fvARB(const GLfloat *v);
GLAPI  void  APIENTRY glWindowPos2fvMESA(const GLfloat *v);
GLAPI  void  APIENTRY glWindowPos2i(GLint x,GLint y);
GLAPI  void  APIENTRY glWindowPos2iARB(GLint x,GLint y);
GLAPI  void  APIENTRY glWindowPos2iMESA(GLint x,GLint y);
GLAPI  void  APIENTRY glWindowPos2iv(const GLint *v);
GLAPI  void  APIENTRY glWindowPos2ivARB(const GLint *v);
GLAPI  void  APIENTRY glWindowPos2ivMESA(const GLint *v);
GLAPI  void  APIENTRY glWindowPos2s(GLshort x,GLshort y);
GLAPI  void  APIENTRY glWindowPos2sARB(GLshort x,GLshort y);
GLAPI  void  APIENTRY glWindowPos2sMESA(GLshort x,GLshort y);
GLAPI  void  APIENTRY glWindowPos2sv(const GLshort *v);
GLAPI  void  APIENTRY glWindowPos2svARB(const GLshort *v);
GLAPI  void  APIENTRY glWindowPos2svMESA(const GLshort *v);
GLAPI  void  APIENTRY glWindowPos3d(GLdouble x,GLdouble y,GLdouble z);
GLAPI  void  APIENTRY glWindowPos3dARB(GLdouble x,GLdouble y,GLdouble z);
GLAPI  void  APIENTRY glWindowPos3dMESA(GLdouble x,GLdouble y,GLdouble z);
GLAPI  void  APIENTRY glWindowPos3dv(const GLdouble *v);
GLAPI  void  APIENTRY glWindowPos3dvARB(const GLdouble *v);
GLAPI  void  APIENTRY glWindowPos3dvMESA(const GLdouble *v);
GLAPI  void  APIENTRY glWindowPos3f(GLfloat x,GLfloat y,GLfloat z);
GLAPI  void  APIENTRY glWindowPos3fARB(GLfloat x,GLfloat y,GLfloat z);
GLAPI  void  APIENTRY glWindowPos3fMESA(GLfloat x,GLfloat y,GLfloat z);
GLAPI  void  APIENTRY glWindowPos3fv(const GLfloat *v);
GLAPI  void  APIENTRY glWindowPos3fvARB(const GLfloat *v);
GLAPI  void  APIENTRY glWindowPos3fvMESA(const GLfloat *v);
GLAPI  void  APIENTRY glWindowPos3i(GLint x,GLint y,GLint z);
GLAPI  void  APIENTRY glWindowPos3iARB(GLint x,GLint y,GLint z);
GLAPI  void  APIENTRY glWindowPos3iMESA(GLint x,GLint y,GLint z);
GLAPI  void  APIENTRY glWindowPos3iv(const GLint *v);
GLAPI  void  APIENTRY glWindowPos3ivARB(const GLint *v);
GLAPI  void  APIENTRY glWindowPos3ivMESA(const GLint *v);
GLAPI  void  APIENTRY glWindowPos3s(GLshort x,GLshort y,GLshort z);
GLAPI  void  APIENTRY glWindowPos3sARB(GLshort x,GLshort y,GLshort z);
GLAPI  void  APIENTRY glWindowPos3sMESA(GLshort x,GLshort y,GLshort z);
GLAPI  void  APIENTRY glWindowPos3sv(const GLshort *v);
GLAPI  void  APIENTRY glWindowPos3svARB(const GLshort *v);
GLAPI  void  APIENTRY glWindowPos3svMESA(const GLshort *v);
GLAPI  void  APIENTRY glWindowPos4dMESA(GLdouble x,GLdouble y,GLdouble z,GLdouble w);
GLAPI  void  APIENTRY glWindowPos4dvMESA(const GLdouble *v);
GLAPI  void  APIENTRY glWindowPos4fMESA(GLfloat x,GLfloat y,GLfloat z,GLfloat w);
GLAPI  void  APIENTRY glWindowPos4fvMESA(const GLfloat *v);
GLAPI  void  APIENTRY glWindowPos4iMESA(GLint x,GLint y,GLint z,GLint w);
GLAPI  void  APIENTRY glWindowPos4ivMESA(const GLint *v);
GLAPI  void  APIENTRY glWindowPos4sMESA(GLshort x,GLshort y,GLshort z,GLshort w);
GLAPI  void  APIENTRY glWindowPos4svMESA(const GLshort *v);
GLAPI  void  APIENTRY glWriteMaskEXT(GLuint res,GLuint in,GLenum outX,GLenum outY,GLenum outZ,GLenum outW);


enum callEntryIdx
{
    customIdx,
    		glAccum_Idx,
		glAccumxOES_Idx,
		glActiveProgramEXT_Idx,
		glActiveShaderProgram_Idx,
		glActiveShaderProgramEXT_Idx,
		glActiveStencilFaceEXT_Idx,
		glActiveTexture_Idx,
		glActiveTextureARB_Idx,
		glActiveVaryingNV_Idx,
		glAlphaFragmentOp1ATI_Idx,
		glAlphaFragmentOp2ATI_Idx,
		glAlphaFragmentOp3ATI_Idx,
		glAlphaFunc_Idx,
		glAlphaFuncQCOM_Idx,
		glAlphaFuncx_Idx,
		glAlphaFuncxOES_Idx,
		glApplyTextureEXT_Idx,
		glAreProgramsResidentNV_Idx,
		glAreTexturesResident_Idx,
		glAreTexturesResidentEXT_Idx,
		glArrayElement_Idx,
		glArrayElementEXT_Idx,
		glArrayObjectATI_Idx,
		glAsyncMarkerSGIX_Idx,
		glAttachObjectARB_Idx,
		glAttachShader_Idx,
		glBegin_Idx,
		glBeginConditionalRender_Idx,
		glBeginConditionalRenderNV_Idx,
		glBeginConditionalRenderNVX_Idx,
		glBeginOcclusionQueryNV_Idx,
		glBeginPerfMonitorAMD_Idx,
		glBeginPerfQueryINTEL_Idx,
		glBeginQuery_Idx,
		glBeginQueryARB_Idx,
		glBeginQueryEXT_Idx,
		glBeginQueryIndexed_Idx,
		glBeginTransformFeedback_Idx,
		glBeginTransformFeedbackEXT_Idx,
		glBeginTransformFeedbackNV_Idx,
		glBeginVideoCaptureNV_Idx,
		glBindAttribLocation_Idx,
		glBindAttribLocationARB_Idx,
		glBindBuffer_Idx,
		glBindBufferARB_Idx,
		glBindBufferBase_Idx,
		glBindBufferBaseEXT_Idx,
		glBindBufferBaseNV_Idx,
		glBindBufferOffsetEXT_Idx,
		glBindBufferOffsetNV_Idx,
		glBindBufferRange_Idx,
		glBindBufferRangeEXT_Idx,
		glBindBufferRangeNV_Idx,
		glBindBuffersBase_Idx,
		glBindBuffersRange_Idx,
		glBindFragDataLocation_Idx,
		glBindFragDataLocationEXT_Idx,
		glBindFragDataLocationIndexed_Idx,
		glBindFragmentShaderATI_Idx,
		glBindFramebuffer_Idx,
		glBindFramebufferEXT_Idx,
		glBindFramebufferOES_Idx,
		glBindImageTexture_Idx,
		glBindImageTextureEXT_Idx,
		glBindImageTextures_Idx,
		glBindLightParameterEXT_Idx,
		glBindMaterialParameterEXT_Idx,
		glBindMultiTextureEXT_Idx,
		glBindParameterEXT_Idx,
		glBindProgramARB_Idx,
		glBindProgramNV_Idx,
		glBindProgramPipeline_Idx,
		glBindProgramPipelineEXT_Idx,
		glBindRenderbuffer_Idx,
		glBindRenderbufferEXT_Idx,
		glBindRenderbufferOES_Idx,
		glBindSampler_Idx,
		glBindSamplers_Idx,
		glBindTexGenParameterEXT_Idx,
		glBindTexture_Idx,
		glBindTextureEXT_Idx,
		glBindTextureUnitParameterEXT_Idx,
		glBindTextures_Idx,
		glBindTransformFeedback_Idx,
		glBindTransformFeedbackNV_Idx,
		glBindVertexArray_Idx,
		glBindVertexArrayAPPLE_Idx,
		glBindVertexArrayOES_Idx,
		glBindVertexBuffer_Idx,
		glBindVertexBuffers_Idx,
		glBindVertexShaderEXT_Idx,
		glBindVideoCaptureStreamBufferNV_Idx,
		glBindVideoCaptureStreamTextureNV_Idx,
		glBinormal3bEXT_Idx,
		glBinormal3bvEXT_Idx,
		glBinormal3dEXT_Idx,
		glBinormal3dvEXT_Idx,
		glBinormal3fEXT_Idx,
		glBinormal3fvEXT_Idx,
		glBinormal3iEXT_Idx,
		glBinormal3ivEXT_Idx,
		glBinormal3sEXT_Idx,
		glBinormal3svEXT_Idx,
		glBinormalPointerEXT_Idx,
		glBitmap_Idx,
		glBitmapxOES_Idx,
		glBlendColor_Idx,
		glBlendColorEXT_Idx,
		glBlendColorxOES_Idx,
		glBlendEquation_Idx,
		glBlendEquationEXT_Idx,
		glBlendEquationIndexedAMD_Idx,
		glBlendEquationOES_Idx,
		glBlendEquationSeparate_Idx,
		glBlendEquationSeparateEXT_Idx,
		glBlendEquationSeparateIndexedAMD_Idx,
		glBlendEquationSeparateOES_Idx,
		glBlendEquationSeparatei_Idx,
		glBlendEquationSeparateiARB_Idx,
		glBlendEquationSeparateiEXT_Idx,
		glBlendEquationi_Idx,
		glBlendEquationiEXT_Idx,
		glBlendEquationiARB_Idx,
		glBlendFunc_Idx,
		glBlendFuncIndexedAMD_Idx,
		glBlendFuncSeparate_Idx,
		glBlendFuncSeparateEXT_Idx,
		glBlendFuncSeparateINGR_Idx,
		glBlendFuncSeparateIndexedAMD_Idx,
		glBlendFuncSeparateOES_Idx,
		glBlendFuncSeparatei_Idx,
		glBlendFuncSeparateiARB_Idx,
		glBlendFuncSeparateiEXT_Idx,
		glBlendFunci_Idx,
		glBlendFunciARB_Idx,
		glBlendFunciEXT_Idx,
		glBlendParameteriNV_Idx,
		glBlitFramebuffer_Idx,
		glBlitFramebufferANGLE_Idx,
		glBlitFramebufferEXT_Idx,
		glBlitFramebufferNV_Idx,
		glBufferAddressRangeNV_Idx,
		glBufferData_Idx,
		glBufferDataARB_Idx,
		glBufferParameteriAPPLE_Idx,
		glBufferStorage_Idx,
		glBufferSubData_Idx,
		glBufferSubDataARB_Idx,
		glCallList_Idx,
		glCallLists_Idx,
		glCheckFramebufferStatus_Idx,
		glCheckFramebufferStatusEXT_Idx,
		glCheckFramebufferStatusOES_Idx,
		glCheckNamedFramebufferStatusEXT_Idx,
		glClampColor_Idx,
		glClampColorARB_Idx,
		glClear_Idx,
		glClearAccum_Idx,
		glClearAccumxOES_Idx,
		glClearBufferData_Idx,
		glClearBufferSubData_Idx,
		glClearBufferfi_Idx,
		glClearBufferfv_Idx,
		glClearBufferiv_Idx,
		glClearBufferuiv_Idx,
		glClearColor_Idx,
		glClearColorIiEXT_Idx,
		glClearColorIuiEXT_Idx,
		glClearColorx_Idx,
		glClearColorxOES_Idx,
		glClearDepth_Idx,
		glClearDepthdNV_Idx,
		glClearDepthf_Idx,
		glClearDepthfOES_Idx,
		glClearDepthx_Idx,
		glClearDepthxOES_Idx,
		glClearIndex_Idx,
		glClearNamedBufferDataEXT_Idx,
		glClearNamedBufferSubDataEXT_Idx,
		glClearStencil_Idx,
		glClearTexImage_Idx,
		glClearTexSubImage_Idx,
		glClientActiveTexture_Idx,
		glClientActiveTextureARB_Idx,
		glClientActiveVertexStreamATI_Idx,
		glClientAttribDefaultEXT_Idx,
		glClientWaitSync_Idx,
		glClientWaitSyncAPPLE_Idx,
		glClipPlane_Idx,
		glClipPlanef_Idx,
		glClipPlanefIMG_Idx,
		glClipPlanefOES_Idx,
		glClipPlanex_Idx,
		glClipPlanexIMG_Idx,
		glClipPlanexOES_Idx,
		glColor3b_Idx,
		glColor3bv_Idx,
		glColor3d_Idx,
		glColor3dv_Idx,
		glColor3f_Idx,
		glColor3fVertex3fSUN_Idx,
		glColor3fVertex3fvSUN_Idx,
		glColor3fv_Idx,
		glColor3hNV_Idx,
		glColor3hvNV_Idx,
		glColor3i_Idx,
		glColor3iv_Idx,
		glColor3s_Idx,
		glColor3sv_Idx,
		glColor3ub_Idx,
		glColor3ubv_Idx,
		glColor3ui_Idx,
		glColor3uiv_Idx,
		glColor3us_Idx,
		glColor3usv_Idx,
		glColor3xOES_Idx,
		glColor3xvOES_Idx,
		glColor4b_Idx,
		glColor4bv_Idx,
		glColor4d_Idx,
		glColor4dv_Idx,
		glColor4f_Idx,
		glColor4fNormal3fVertex3fSUN_Idx,
		glColor4fNormal3fVertex3fvSUN_Idx,
		glColor4fv_Idx,
		glColor4hNV_Idx,
		glColor4hvNV_Idx,
		glColor4i_Idx,
		glColor4iv_Idx,
		glColor4s_Idx,
		glColor4sv_Idx,
		glColor4ub_Idx,
		glColor4ubVertex2fSUN_Idx,
		glColor4ubVertex2fvSUN_Idx,
		glColor4ubVertex3fSUN_Idx,
		glColor4ubVertex3fvSUN_Idx,
		glColor4ubv_Idx,
		glColor4ui_Idx,
		glColor4uiv_Idx,
		glColor4us_Idx,
		glColor4usv_Idx,
		glColor4x_Idx,
		glColor4xOES_Idx,
		glColor4xvOES_Idx,
		glColorFormatNV_Idx,
		glColorFragmentOp1ATI_Idx,
		glColorFragmentOp2ATI_Idx,
		glColorFragmentOp3ATI_Idx,
		glColorMask_Idx,
		glColorMaskIndexedEXT_Idx,
		glColorMaski_Idx,
		glColorMaskiEXT_Idx,
		glColorMaterial_Idx,
		glColorP3ui_Idx,
		glColorP3uiv_Idx,
		glColorP4ui_Idx,
		glColorP4uiv_Idx,
		glColorPointer_Idx,
		glColorPointerEXT_Idx,
		glColorPointerListIBM_Idx,
		glColorPointervINTEL_Idx,
		glColorSubTable_Idx,
		glColorSubTableEXT_Idx,
		glColorTable_Idx,
		glColorTableEXT_Idx,
		glColorTableParameterfv_Idx,
		glColorTableParameterfvSGI_Idx,
		glColorTableParameteriv_Idx,
		glColorTableParameterivSGI_Idx,
		glColorTableSGI_Idx,
		glCombinerInputNV_Idx,
		glCombinerOutputNV_Idx,
		glCombinerParameterfNV_Idx,
		glCombinerParameterfvNV_Idx,
		glCombinerParameteriNV_Idx,
		glCombinerParameterivNV_Idx,
		glCombinerStageParameterfvNV_Idx,
		glCompileShader_Idx,
		glCompileShaderARB_Idx,
		glCompileShaderIncludeARB_Idx,
		glCompressedMultiTexImage1DEXT_Idx,
		glCompressedMultiTexImage2DEXT_Idx,
		glCompressedMultiTexImage3DEXT_Idx,
		glCompressedMultiTexSubImage1DEXT_Idx,
		glCompressedMultiTexSubImage2DEXT_Idx,
		glCompressedMultiTexSubImage3DEXT_Idx,
		glCompressedTexImage1D_Idx,
		glCompressedTexImage1DARB_Idx,
		glCompressedTexImage2D_Idx,
		glCompressedTexImage2DARB_Idx,
		glCompressedTexImage3D_Idx,
		glCompressedTexImage3DARB_Idx,
		glCompressedTexImage3DOES_Idx,
		glCompressedTexSubImage1D_Idx,
		glCompressedTexSubImage1DARB_Idx,
		glCompressedTexSubImage2D_Idx,
		glCompressedTexSubImage2DARB_Idx,
		glCompressedTexSubImage3D_Idx,
		glCompressedTexSubImage3DARB_Idx,
		glCompressedTexSubImage3DOES_Idx,
		glCompressedTextureImage1DEXT_Idx,
		glCompressedTextureImage2DEXT_Idx,
		glCompressedTextureImage3DEXT_Idx,
		glCompressedTextureSubImage1DEXT_Idx,
		glCompressedTextureSubImage2DEXT_Idx,
		glCompressedTextureSubImage3DEXT_Idx,
		glConvolutionFilter1D_Idx,
		glConvolutionFilter1DEXT_Idx,
		glConvolutionFilter2D_Idx,
		glConvolutionFilter2DEXT_Idx,
		glConvolutionParameterf_Idx,
		glConvolutionParameterfEXT_Idx,
		glConvolutionParameterfv_Idx,
		glConvolutionParameterfvEXT_Idx,
		glConvolutionParameteri_Idx,
		glConvolutionParameteriEXT_Idx,
		glConvolutionParameteriv_Idx,
		glConvolutionParameterivEXT_Idx,
		glConvolutionParameterxOES_Idx,
		glConvolutionParameterxvOES_Idx,
		glCopyBufferSubData_Idx,
		glCopyBufferSubDataNV_Idx,
		glCopyColorSubTable_Idx,
		glCopyColorSubTableEXT_Idx,
		glCopyColorTable_Idx,
		glCopyColorTableSGI_Idx,
		glCopyConvolutionFilter1D_Idx,
		glCopyConvolutionFilter1DEXT_Idx,
		glCopyConvolutionFilter2D_Idx,
		glCopyConvolutionFilter2DEXT_Idx,
		glCopyImageSubData_Idx,
		glCopyImageSubDataEXT_Idx,
		glCopyImageSubDataNV_Idx,
		glCopyMultiTexImage1DEXT_Idx,
		glCopyMultiTexImage2DEXT_Idx,
		glCopyMultiTexSubImage1DEXT_Idx,
		glCopyMultiTexSubImage2DEXT_Idx,
		glCopyMultiTexSubImage3DEXT_Idx,
		glCopyPathNV_Idx,
		glCopyPixels_Idx,
		glCopyTexImage1D_Idx,
		glCopyTexImage1DEXT_Idx,
		glCopyTexImage2D_Idx,
		glCopyTexImage2DEXT_Idx,
		glCopyTexSubImage1D_Idx,
		glCopyTexSubImage1DEXT_Idx,
		glCopyTexSubImage2D_Idx,
		glCopyTexSubImage2DEXT_Idx,
		glCopyTexSubImage3D_Idx,
		glCopyTexSubImage3DEXT_Idx,
		glCopyTexSubImage3DOES_Idx,
		glCopyTextureImage1DEXT_Idx,
		glCopyTextureImage2DEXT_Idx,
		glCopyTextureLevelsAPPLE_Idx,
		glCopyTextureSubImage1DEXT_Idx,
		glCopyTextureSubImage2DEXT_Idx,
		glCopyTextureSubImage3DEXT_Idx,
		glCoverFillPathInstancedNV_Idx,
		glCoverFillPathNV_Idx,
		glCoverStrokePathInstancedNV_Idx,
		glCoverStrokePathNV_Idx,
		glCoverageMaskNV_Idx,
		glCoverageOperationNV_Idx,
		glCreatePerfQueryINTEL_Idx,
		glCreateShader_Idx,
		glCreateShaderObjectARB_Idx,
		glCreateShaderProgramEXT_Idx,
		glCreateShaderProgramv_Idx,
		glCreateShaderProgramvEXT_Idx,
		glCullFace_Idx,
		glCullParameterdvEXT_Idx,
		glCullParameterfvEXT_Idx,
		glCurrentPaletteMatrixARB_Idx,
		glCurrentPaletteMatrixOES_Idx,
		glDebugMessageCallback_Idx,
		glDebugMessageCallbackAMD_Idx,
		glDebugMessageControl_Idx,
		glDebugMessageControlARB_Idx,
		glDebugMessageControlKHR_Idx,
		glDebugMessageEnableAMD_Idx,
		glDebugMessageInsert_Idx,
		glDebugMessageInsertAMD_Idx,
		glDebugMessageInsertARB_Idx,
		glDebugMessageInsertKHR_Idx,
		glDeformSGIX_Idx,
		glDeformationMap3dSGIX_Idx,
		glDeformationMap3fSGIX_Idx,
		glDeleteAsyncMarkersSGIX_Idx,
		glDeleteBuffers_Idx,
		glDeleteBuffersARB_Idx,
		glDeleteFencesAPPLE_Idx,
		glDeleteFencesNV_Idx,
		glDeleteFragmentShaderATI_Idx,
		glDeleteFramebuffers_Idx,
		glDeleteFramebuffersEXT_Idx,
		glDeleteFramebuffersOES_Idx,
		glDeleteLists_Idx,
		glDeleteNamedStringARB_Idx,
		glDeleteNamesAMD_Idx,
		glDeleteObjectARB_Idx,
		glDeleteOcclusionQueriesNV_Idx,
		glDeletePathsNV_Idx,
		glDeletePerfMonitorsAMD_Idx,
		glDeletePerfQueryINTEL_Idx,
		glDeleteProgram_Idx,
		glDeleteProgramPipelines_Idx,
		glDeleteProgramPipelinesEXT_Idx,
		glDeleteProgramsARB_Idx,
		glDeleteProgramsNV_Idx,
		glDeleteQueries_Idx,
		glDeleteQueriesARB_Idx,
		glDeleteQueriesEXT_Idx,
		glDeleteRenderbuffers_Idx,
		glDeleteRenderbuffersEXT_Idx,
		glDeleteRenderbuffersOES_Idx,
		glDeleteSamplers_Idx,
		glDeleteShader_Idx,
		glDeleteSync_Idx,
		glDeleteSyncAPPLE_Idx,
		glDeleteTextures_Idx,
		glDeleteTexturesEXT_Idx,
		glDeleteTransformFeedbacks_Idx,
		glDeleteTransformFeedbacksNV_Idx,
		glDeleteVertexArrays_Idx,
		glDeleteVertexArraysAPPLE_Idx,
		glDeleteVertexArraysOES_Idx,
		glDeleteVertexShaderEXT_Idx,
		glDepthBoundsEXT_Idx,
		glDepthBoundsdNV_Idx,
		glDepthFunc_Idx,
		glDepthMask_Idx,
		glDepthRange_Idx,
		glDepthRangeArrayv_Idx,
		glDepthRangeIndexed_Idx,
		glDepthRangedNV_Idx,
		glDepthRangef_Idx,
		glDepthRangefOES_Idx,
		glDepthRangex_Idx,
		glDepthRangexOES_Idx,
		glDetachObjectARB_Idx,
		glDetachShader_Idx,
		glDetailTexFuncSGIS_Idx,
		glDisable_Idx,
		glDisableClientState_Idx,
		glDisableClientStateIndexedEXT_Idx,
		glDisableClientStateiEXT_Idx,
		glDisableDriverControlQCOM_Idx,
		glDisableIndexedEXT_Idx,
		glDisableVariantClientStateEXT_Idx,
		glDisableVertexArrayAttribEXT_Idx,
		glDisableVertexArrayEXT_Idx,
		glDisableVertexAttribAPPLE_Idx,
		glDisableVertexAttribArray_Idx,
		glDisableVertexAttribArrayARB_Idx,
		glDisablei_Idx,
		glDisableiEXT_Idx,
		glDiscardFramebufferEXT_Idx,
		glDispatchCompute_Idx,
		glDispatchComputeGroupSizeARB_Idx,
		glDispatchComputeIndirect_Idx,
		glDrawArrays_Idx,
		glDrawArraysEXT_Idx,
		glDrawArraysIndirect_Idx,
		glDrawArraysInstanced_Idx,
		glDrawArraysInstancedANGLE_Idx,
		glDrawArraysInstancedARB_Idx,
		glDrawArraysInstancedBaseInstance_Idx,
		glDrawArraysInstancedEXT_Idx,
		glDrawArraysInstancedNV_Idx,
		glDrawBuffer_Idx,
		glDrawBuffers_Idx,
		glDrawBuffersARB_Idx,
		glDrawBuffersATI_Idx,
		glDrawBuffersEXT_Idx,
		glDrawBuffersIndexedEXT_Idx,
		glDrawBuffersNV_Idx,
		glDrawElementArrayAPPLE_Idx,
		glDrawElementArrayATI_Idx,
		glDrawElements_Idx,
		glDrawElementsBaseVertex_Idx,
		glDrawElementsIndirect_Idx,
		glDrawElementsInstanced_Idx,
		glDrawElementsInstancedANGLE_Idx,
		glDrawElementsInstancedARB_Idx,
		glDrawElementsInstancedBaseInstance_Idx,
		glDrawElementsInstancedBaseVertex_Idx,
		glDrawElementsInstancedBaseVertexBaseInstance_Idx,
		glDrawElementsInstancedEXT_Idx,
		glDrawElementsInstancedNV_Idx,
		glDrawMeshArraysSUN_Idx,
		glDrawPixels_Idx,
		glDrawRangeElementArrayAPPLE_Idx,
		glDrawRangeElementArrayATI_Idx,
		glDrawRangeElements_Idx,
		glDrawRangeElementsBaseVertex_Idx,
		glDrawRangeElementsEXT_Idx,
		glDrawTexfOES_Idx,
		glDrawTexfvOES_Idx,
		glDrawTexiOES_Idx,
		glDrawTexivOES_Idx,
		glDrawTexsOES_Idx,
		glDrawTexsvOES_Idx,
		glDrawTextureNV_Idx,
		glDrawTexxOES_Idx,
		glDrawTexxvOES_Idx,
		glDrawTransformFeedback_Idx,
		glDrawTransformFeedbackInstanced_Idx,
		glDrawTransformFeedbackNV_Idx,
		glDrawTransformFeedbackStream_Idx,
		glDrawTransformFeedbackStreamInstanced_Idx,
		glEdgeFlag_Idx,
		glEdgeFlagFormatNV_Idx,
		glEdgeFlagPointer_Idx,
		glEdgeFlagPointerEXT_Idx,
		glEdgeFlagPointerListIBM_Idx,
		glEdgeFlagv_Idx,
		glElementPointerAPPLE_Idx,
		glElementPointerATI_Idx,
		glEnable_Idx,
		glEnableClientState_Idx,
		glEnableClientStateIndexedEXT_Idx,
		glEnableClientStateiEXT_Idx,
		glEnableDriverControlQCOM_Idx,
		glEnableIndexedEXT_Idx,
		glEnableVariantClientStateEXT_Idx,
		glEnableVertexArrayAttribEXT_Idx,
		glEnableVertexArrayEXT_Idx,
		glEnableVertexAttribAPPLE_Idx,
		glEnableVertexAttribArray_Idx,
		glEnableVertexAttribArrayARB_Idx,
		glEnablei_Idx,
		glEnableiEXT_Idx,
		glEndPerfMonitorAMD_Idx,
		glEndPerfQueryINTEL_Idx,
		glEndQuery_Idx,
		glEndQueryARB_Idx,
		glEndQueryEXT_Idx,
		glEndQueryIndexed_Idx,
		glEndTilingQCOM_Idx,
		glEndVideoCaptureNV_Idx,
		glEvalCoord1d_Idx,
		glEvalCoord1dv_Idx,
		glEvalCoord1f_Idx,
		glEvalCoord1fv_Idx,
		glEvalCoord1xOES_Idx,
		glEvalCoord1xvOES_Idx,
		glEvalCoord2d_Idx,
		glEvalCoord2dv_Idx,
		glEvalCoord2f_Idx,
		glEvalCoord2fv_Idx,
		glEvalCoord2xOES_Idx,
		glEvalCoord2xvOES_Idx,
		glEvalMapsNV_Idx,
		glEvalMesh1_Idx,
		glEvalMesh2_Idx,
		glEvalPoint1_Idx,
		glEvalPoint2_Idx,
		glExecuteProgramNV_Idx,
		glExtGetBufferPointervQCOM_Idx,
		glExtGetBuffersQCOM_Idx,
		glExtGetFramebuffersQCOM_Idx,
		glExtGetProgramBinarySourceQCOM_Idx,
		glExtGetProgramsQCOM_Idx,
		glExtGetRenderbuffersQCOM_Idx,
		glExtGetShadersQCOM_Idx,
		glExtGetTexLevelParameterivQCOM_Idx,
		glExtGetTexSubImageQCOM_Idx,
		glExtGetTexturesQCOM_Idx,
		glExtIsProgramBinaryQCOM_Idx,
		glExtTexObjectStateOverrideiQCOM_Idx,
		glExtractComponentEXT_Idx,
		glFeedbackBuffer_Idx,
		glFeedbackBufferxOES_Idx,
		glFenceSync_Idx,
		glFenceSyncAPPLE_Idx,
		glFinalCombinerInputNV_Idx,
		glFinishAsyncSGIX_Idx,
		glFinishFenceAPPLE_Idx,
		glFinishFenceNV_Idx,
		glFinishObjectAPPLE_Idx,
		glFlushMappedBufferRange_Idx,
		glFlushMappedBufferRangeAPPLE_Idx,
		glFlushMappedBufferRangeEXT_Idx,
		glFlushMappedNamedBufferRangeEXT_Idx,
		glFlushPixelDataRangeNV_Idx,
		glFlushStaticDataIBM_Idx,
		glFlushVertexArrayRangeAPPLE_Idx,
		glFogCoordFormatNV_Idx,
		glFogCoordPointer_Idx,
		glFogCoordPointerEXT_Idx,
		glFogCoordPointerListIBM_Idx,
		glFogCoordd_Idx,
		glFogCoorddEXT_Idx,
		glFogCoorddv_Idx,
		glFogCoorddvEXT_Idx,
		glFogCoordf_Idx,
		glFogCoordfEXT_Idx,
		glFogCoordfv_Idx,
		glFogCoordfvEXT_Idx,
		glFogCoordhNV_Idx,
		glFogCoordhvNV_Idx,
		glFogFuncSGIS_Idx,
		glFogf_Idx,
		glFogfv_Idx,
		glFogi_Idx,
		glFogiv_Idx,
		glFogx_Idx,
		glFogxOES_Idx,
		glFogxv_Idx,
		glFogxvOES_Idx,
		glFragmentColorMaterialSGIX_Idx,
		glFragmentLightModelfSGIX_Idx,
		glFragmentLightModelfvSGIX_Idx,
		glFragmentLightModeliSGIX_Idx,
		glFragmentLightModelivSGIX_Idx,
		glFragmentLightfSGIX_Idx,
		glFragmentLightfvSGIX_Idx,
		glFragmentLightiSGIX_Idx,
		glFragmentLightivSGIX_Idx,
		glFragmentMaterialfSGIX_Idx,
		glFragmentMaterialfvSGIX_Idx,
		glFragmentMaterialiSGIX_Idx,
		glFragmentMaterialivSGIX_Idx,
		glFrameZoomSGIX_Idx,
		glFramebufferDrawBufferEXT_Idx,
		glFramebufferDrawBuffersEXT_Idx,
		glFramebufferParameteri_Idx,
		glFramebufferReadBufferEXT_Idx,
		glFramebufferRenderbuffer_Idx,
		glFramebufferRenderbufferEXT_Idx,
		glFramebufferRenderbufferOES_Idx,
		glFramebufferTexture_Idx,
		glFramebufferTexture1D_Idx,
		glFramebufferTexture1DEXT_Idx,
		glFramebufferTexture2D_Idx,
		glFramebufferTexture2DEXT_Idx,
		glFramebufferTexture2DMultisampleEXT_Idx,
		glFramebufferTexture2DMultisampleIMG_Idx,
		glFramebufferTexture2DOES_Idx,
		glFramebufferTexture3D_Idx,
		glFramebufferTexture3DEXT_Idx,
		glFramebufferTexture3DOES_Idx,
		glFramebufferTextureARB_Idx,
		glFramebufferTextureEXT_Idx,
		glFramebufferTextureFaceARB_Idx,
		glFramebufferTextureFaceEXT_Idx,
		glFramebufferTextureLayer_Idx,
		glFramebufferTextureLayerARB_Idx,
		glFramebufferTextureLayerEXT_Idx,
		glFreeObjectBufferATI_Idx,
		glFrontFace_Idx,
		glFrustum_Idx,
		glFrustumf_Idx,
		glFrustumfOES_Idx,
		glFrustumx_Idx,
		glFrustumxOES_Idx,
		glGenAsyncMarkersSGIX_Idx,
		glGenBuffers_Idx,
		glGenBuffersARB_Idx,
		glGenFencesAPPLE_Idx,
		glGenFencesNV_Idx,
		glGenFragmentShadersATI_Idx,
		glGenFramebuffers_Idx,
		glGenFramebuffersEXT_Idx,
		glGenFramebuffersOES_Idx,
		glGenLists_Idx,
		glGenNamesAMD_Idx,
		glGenOcclusionQueriesNV_Idx,
		glGenPathsNV_Idx,
		glGenPerfMonitorsAMD_Idx,
		glGenProgramPipelines_Idx,
		glGenProgramPipelinesEXT_Idx,
		glGenProgramsARB_Idx,
		glGenProgramsNV_Idx,
		glGenQueries_Idx,
		glGenQueriesARB_Idx,
		glGenQueriesEXT_Idx,
		glGenRenderbuffers_Idx,
		glGenRenderbuffersEXT_Idx,
		glGenRenderbuffersOES_Idx,
		glGenSamplers_Idx,
		glGenSymbolsEXT_Idx,
		glGenTextures_Idx,
		glGenTexturesEXT_Idx,
		glGenTransformFeedbacks_Idx,
		glGenTransformFeedbacksNV_Idx,
		glGenVertexArrays_Idx,
		glGenVertexArraysAPPLE_Idx,
		glGenVertexArraysOES_Idx,
		glGenVertexShadersEXT_Idx,
		glGenerateMipmap_Idx,
		glGenerateMipmapEXT_Idx,
		glGenerateMipmapOES_Idx,
		glGenerateMultiTexMipmapEXT_Idx,
		glGenerateTextureMipmapEXT_Idx,
		glGetActiveAtomicCounterBufferiv_Idx,
		glGetActiveAttrib_Idx,
		glGetActiveAttribARB_Idx,
		glGetActiveSubroutineName_Idx,
		glGetActiveSubroutineUniformName_Idx,
		glGetActiveSubroutineUniformiv_Idx,
		glGetActiveUniform_Idx,
		glGetActiveUniformARB_Idx,
		glGetActiveUniformBlockName_Idx,
		glGetActiveUniformBlockiv_Idx,
		glGetActiveUniformName_Idx,
		glGetActiveUniformsiv_Idx,
		glGetActiveVaryingNV_Idx,
		glGetArrayObjectfvATI_Idx,
		glGetArrayObjectivATI_Idx,
		glGetAttachedObjectsARB_Idx,
		glGetAttachedShaders_Idx,
		glGetAttribLocation_Idx,
		glGetAttribLocationARB_Idx,
		glGetBooleanIndexedvEXT_Idx,
		glGetBooleani_v_Idx,
		glGetBooleanv_Idx,
		glGetBufferParameteri64v_Idx,
		glGetBufferParameteriv_Idx,
		glGetBufferParameterivARB_Idx,
		glGetBufferParameterui64vNV_Idx,
		glGetBufferPointerv_Idx,
		glGetBufferPointervARB_Idx,
		glGetBufferPointervOES_Idx,
		glGetBufferSubData_Idx,
		glGetBufferSubDataARB_Idx,
		glGetClipPlane_Idx,
		glGetClipPlanef_Idx,
		glGetClipPlanefOES_Idx,
		glGetClipPlanex_Idx,
		glGetClipPlanexOES_Idx,
		glGetColorTable_Idx,
		glGetColorTableEXT_Idx,
		glGetColorTableParameterfv_Idx,
		glGetColorTableParameterfvEXT_Idx,
		glGetColorTableParameterfvSGI_Idx,
		glGetColorTableParameteriv_Idx,
		glGetColorTableParameterivEXT_Idx,
		glGetColorTableParameterivSGI_Idx,
		glGetColorTableSGI_Idx,
		glGetCombinerInputParameterfvNV_Idx,
		glGetCombinerInputParameterivNV_Idx,
		glGetCombinerOutputParameterfvNV_Idx,
		glGetCombinerOutputParameterivNV_Idx,
		glGetCombinerStageParameterfvNV_Idx,
		glGetCompressedMultiTexImageEXT_Idx,
		glGetCompressedTexImage_Idx,
		glGetCompressedTexImageARB_Idx,
		glGetCompressedTextureImageEXT_Idx,
		glGetConvolutionFilter_Idx,
		glGetConvolutionFilterEXT_Idx,
		glGetConvolutionParameterfv_Idx,
		glGetConvolutionParameterfvEXT_Idx,
		glGetConvolutionParameteriv_Idx,
		glGetConvolutionParameterivEXT_Idx,
		glGetConvolutionParameterxvOES_Idx,
		glGetDebugMessageLog_Idx,
		glGetDebugMessageLogAMD_Idx,
		glGetDebugMessageLogARB_Idx,
		glGetDebugMessageLogKHR_Idx,
		glGetDetailTexFuncSGIS_Idx,
		glGetDoubleIndexedvEXT_Idx,
		glGetDoublei_v_Idx,
		glGetDoublei_vEXT_Idx,
		glGetDoublev_Idx,
		glGetDriverControlStringQCOM_Idx,
		glGetDriverControlsQCOM_Idx,
		glGetFenceivNV_Idx,
		glGetFinalCombinerInputParameterfvNV_Idx,
		glGetFinalCombinerInputParameterivNV_Idx,
		glGetFirstPerfQueryIdINTEL_Idx,
		glGetFixedv_Idx,
		glGetFixedvOES_Idx,
		glGetFloatIndexedvEXT_Idx,
		glGetFloati_v_Idx,
		glGetFloati_vEXT_Idx,
		glGetFloatv_Idx,
		glGetFogFuncSGIS_Idx,
		glGetFragDataIndex_Idx,
		glGetFragDataLocation_Idx,
		glGetFragDataLocationEXT_Idx,
		glGetFragmentLightfvSGIX_Idx,
		glGetFragmentLightivSGIX_Idx,
		glGetFragmentMaterialfvSGIX_Idx,
		glGetFragmentMaterialivSGIX_Idx,
		glGetFramebufferAttachmentParameteriv_Idx,
		glGetFramebufferAttachmentParameterivEXT_Idx,
		glGetFramebufferAttachmentParameterivOES_Idx,
		glGetFramebufferParameteriv_Idx,
		glGetFramebufferParameterivEXT_Idx,
		glGetHandleARB_Idx,
		glGetHistogram_Idx,
		glGetHistogramEXT_Idx,
		glGetHistogramParameterfv_Idx,
		glGetHistogramParameterfvEXT_Idx,
		glGetHistogramParameteriv_Idx,
		glGetHistogramParameterivEXT_Idx,
		glGetHistogramParameterxvOES_Idx,
		glGetImageHandleARB_Idx,
		glGetImageHandleNV_Idx,
		glGetImageTransformParameterfvHP_Idx,
		glGetImageTransformParameterivHP_Idx,
		glGetInfoLogARB_Idx,
		glGetInteger64i_v_Idx,
		glGetInteger64v_Idx,
		glGetInteger64vAPPLE_Idx,
		glGetIntegerIndexedvEXT_Idx,
		glGetIntegeri_v_Idx,
		glGetIntegeri_vEXT_Idx,
		glGetIntegerui64i_vNV_Idx,
		glGetIntegerui64vNV_Idx,
		glGetIntegerv_Idx,
		glGetInternalformati64v_Idx,
		glGetInternalformativ_Idx,
		glGetInvariantBooleanvEXT_Idx,
		glGetInvariantFloatvEXT_Idx,
		glGetInvariantIntegervEXT_Idx,
		glGetLightfv_Idx,
		glGetLightiv_Idx,
		glGetLightxOES_Idx,
		glGetLightxv_Idx,
		glGetLightxvOES_Idx,
		glGetListParameterfvSGIX_Idx,
		glGetListParameterivSGIX_Idx,
		glGetLocalConstantBooleanvEXT_Idx,
		glGetLocalConstantFloatvEXT_Idx,
		glGetLocalConstantIntegervEXT_Idx,
		glGetMapAttribParameterfvNV_Idx,
		glGetMapAttribParameterivNV_Idx,
		glGetMapControlPointsNV_Idx,
		glGetMapParameterfvNV_Idx,
		glGetMapParameterivNV_Idx,
		glGetMapdv_Idx,
		glGetMapfv_Idx,
		glGetMapiv_Idx,
		glGetMapxvOES_Idx,
		glGetMaterialfv_Idx,
		glGetMaterialiv_Idx,
		glGetMaterialxOES_Idx,
		glGetMaterialxv_Idx,
		glGetMaterialxvOES_Idx,
		glGetMinmax_Idx,
		glGetMinmaxEXT_Idx,
		glGetMinmaxParameterfv_Idx,
		glGetMinmaxParameterfvEXT_Idx,
		glGetMinmaxParameteriv_Idx,
		glGetMinmaxParameterivEXT_Idx,
		glGetMultiTexEnvfvEXT_Idx,
		glGetMultiTexEnvivEXT_Idx,
		glGetMultiTexGendvEXT_Idx,
		glGetMultiTexGenfvEXT_Idx,
		glGetMultiTexGenivEXT_Idx,
		glGetMultiTexImageEXT_Idx,
		glGetMultiTexLevelParameterfvEXT_Idx,
		glGetMultiTexLevelParameterivEXT_Idx,
		glGetMultiTexParameterIivEXT_Idx,
		glGetMultiTexParameterIuivEXT_Idx,
		glGetMultiTexParameterfvEXT_Idx,
		glGetMultiTexParameterivEXT_Idx,
		glGetMultisamplefv_Idx,
		glGetMultisamplefvNV_Idx,
		glGetNamedBufferParameterivEXT_Idx,
		glGetNamedBufferParameterui64vNV_Idx,
		glGetNamedBufferPointervEXT_Idx,
		glGetNamedBufferSubDataEXT_Idx,
		glGetNamedFramebufferAttachmentParameterivEXT_Idx,
		glGetNamedFramebufferParameterivEXT_Idx,
		glGetNamedProgramLocalParameterIivEXT_Idx,
		glGetNamedProgramLocalParameterIuivEXT_Idx,
		glGetNamedProgramLocalParameterdvEXT_Idx,
		glGetNamedProgramLocalParameterfvEXT_Idx,
		glGetNamedProgramStringEXT_Idx,
		glGetNamedProgramivEXT_Idx,
		glGetNamedRenderbufferParameterivEXT_Idx,
		glGetNamedStringARB_Idx,
		glGetNamedStringivARB_Idx,
		glGetNextPerfQueryIdINTEL_Idx,
		glGetObjectBufferfvATI_Idx,
		glGetObjectBufferivATI_Idx,
		glGetObjectLabel_Idx,
		glGetObjectLabelEXT_Idx,
		glGetObjectLabelKHR_Idx,
		glGetObjectParameterfvARB_Idx,
		glGetObjectParameterivAPPLE_Idx,
		glGetObjectParameterivARB_Idx,
		glGetObjectPtrLabel_Idx,
		glGetObjectPtrLabelKHR_Idx,
		glGetOcclusionQueryivNV_Idx,
		glGetOcclusionQueryuivNV_Idx,
		glGetPathColorGenfvNV_Idx,
		glGetPathColorGenivNV_Idx,
		glGetPathCommandsNV_Idx,
		glGetPathCoordsNV_Idx,
		glGetPathDashArrayNV_Idx,
		glGetPathLengthNV_Idx,
		glGetPathMetricRangeNV_Idx,
		glGetPathMetricsNV_Idx,
		glGetPathParameterfvNV_Idx,
		glGetPathParameterivNV_Idx,
		glGetPathSpacingNV_Idx,
		glGetPathTexGenfvNV_Idx,
		glGetPathTexGenivNV_Idx,
		glGetPerfCounterInfoINTEL_Idx,
		glGetPerfMonitorCounterDataAMD_Idx,
		glGetPerfMonitorCounterInfoAMD_Idx,
		glGetPerfMonitorCounterStringAMD_Idx,
		glGetPerfMonitorCountersAMD_Idx,
		glGetPerfMonitorGroupStringAMD_Idx,
		glGetPerfMonitorGroupsAMD_Idx,
		glGetPerfQueryDataINTEL_Idx,
		glGetPerfQueryIdByNameINTEL_Idx,
		glGetPerfQueryInfoINTEL_Idx,
		glGetPixelMapfv_Idx,
		glGetPixelMapuiv_Idx,
		glGetPixelMapusv_Idx,
		glGetPixelMapxv_Idx,
		glGetPixelTexGenParameterfvSGIS_Idx,
		glGetPixelTexGenParameterivSGIS_Idx,
		glGetPixelTransformParameterfvEXT_Idx,
		glGetPixelTransformParameterivEXT_Idx,
		glGetPointerIndexedvEXT_Idx,
		glGetPointeri_vEXT_Idx,
		glGetPointerv_Idx,
		glGetPointervEXT_Idx,
		glGetPointervKHR_Idx,
		glGetPolygonStipple_Idx,
		glGetProgramBinary_Idx,
		glGetProgramBinaryOES_Idx,
		glGetProgramEnvParameterIivNV_Idx,
		glGetProgramEnvParameterIuivNV_Idx,
		glGetProgramEnvParameterdvARB_Idx,
		glGetProgramEnvParameterfvARB_Idx,
		glGetProgramInfoLog_Idx,
		glGetProgramInterfaceiv_Idx,
		glGetProgramLocalParameterIivNV_Idx,
		glGetProgramLocalParameterIuivNV_Idx,
		glGetProgramLocalParameterdvARB_Idx,
		glGetProgramLocalParameterfvARB_Idx,
		glGetProgramNamedParameterdvNV_Idx,
		glGetProgramNamedParameterfvNV_Idx,
		glGetProgramParameterdvNV_Idx,
		glGetProgramParameterfvNV_Idx,
		glGetProgramPipelineInfoLog_Idx,
		glGetProgramPipelineInfoLogEXT_Idx,
		glGetProgramPipelineiv_Idx,
		glGetProgramPipelineivEXT_Idx,
		glGetProgramResourceIndex_Idx,
		glGetProgramResourceLocation_Idx,
		glGetProgramResourceLocationIndex_Idx,
		glGetProgramResourceName_Idx,
		glGetProgramResourceiv_Idx,
		glGetProgramStageiv_Idx,
		glGetProgramStringARB_Idx,
		glGetProgramStringNV_Idx,
		glGetProgramSubroutineParameteruivNV_Idx,
		glGetProgramiv_Idx,
		glGetProgramivARB_Idx,
		glGetProgramivNV_Idx,
		glGetQueryIndexediv_Idx,
		glGetQueryObjecti64v_Idx,
		glGetQueryObjecti64vEXT_Idx,
		glGetQueryObjectiv_Idx,
		glGetQueryObjectivARB_Idx,
		glGetQueryObjectivEXT_Idx,
		glGetQueryObjectui64v_Idx,
		glGetQueryObjectui64vEXT_Idx,
		glGetQueryObjectuiv_Idx,
		glGetQueryObjectuivARB_Idx,
		glGetQueryObjectuivEXT_Idx,
		glGetQueryiv_Idx,
		glGetQueryivARB_Idx,
		glGetQueryivEXT_Idx,
		glGetRenderbufferParameteriv_Idx,
		glGetRenderbufferParameterivEXT_Idx,
		glGetRenderbufferParameterivOES_Idx,
		glGetSamplerParameterIiv_Idx,
		glGetSamplerParameterIivEXT_Idx,
		glGetSamplerParameterIuiv_Idx,
		glGetSamplerParameterIuivEXT_Idx,
		glGetSamplerParameterfv_Idx,
		glGetSamplerParameteriv_Idx,
		glGetSeparableFilter_Idx,
		glGetSeparableFilterEXT_Idx,
		glGetShaderInfoLog_Idx,
		glGetShaderPrecisionFormat_Idx,
		glGetShaderSource_Idx,
		glGetShaderSourceARB_Idx,
		glGetShaderiv_Idx,
		glGetSharpenTexFuncSGIS_Idx,
		glGetString_Idx,
		glGetStringi_Idx,
		glGetSubroutineIndex_Idx,
		glGetSubroutineUniformLocation_Idx,
		glGetSynciv_Idx,
		glGetSyncivAPPLE_Idx,
		glGetTexBumpParameterfvATI_Idx,
		glGetTexBumpParameterivATI_Idx,
		glGetTexEnvfv_Idx,
		glGetTexEnviv_Idx,
		glGetTexEnvxv_Idx,
		glGetTexEnvxvOES_Idx,
		glGetTexFilterFuncSGIS_Idx,
		glGetTexGendv_Idx,
		glGetTexGenfv_Idx,
		glGetTexGenfvOES_Idx,
		glGetTexGeniv_Idx,
		glGetTexGenivOES_Idx,
		glGetTexGenxvOES_Idx,
		glGetTexImage_Idx,
		glGetTexLevelParameterfv_Idx,
		glGetTexLevelParameteriv_Idx,
		glGetTexLevelParameterxvOES_Idx,
		glGetTexParameterIiv_Idx,
		glGetTexParameterIivEXT_Idx,
		glGetTexParameterIuiv_Idx,
		glGetTexParameterIuivEXT_Idx,
		glGetTexParameterPointervAPPLE_Idx,
		glGetTexParameterfv_Idx,
		glGetTexParameteriv_Idx,
		glGetTexParameterxv_Idx,
		glGetTexParameterxvOES_Idx,
		glGetTextureHandleARB_Idx,
		glGetTextureHandleNV_Idx,
		glGetTextureImageEXT_Idx,
		glGetTextureLevelParameterfvEXT_Idx,
		glGetTextureLevelParameterivEXT_Idx,
		glGetTextureParameterIivEXT_Idx,
		glGetTextureParameterIuivEXT_Idx,
		glGetTextureParameterfvEXT_Idx,
		glGetTextureParameterivEXT_Idx,
		glGetTextureSamplerHandleARB_Idx,
		glGetTextureSamplerHandleNV_Idx,
		glGetTrackMatrixivNV_Idx,
		glGetTransformFeedbackVarying_Idx,
		glGetTransformFeedbackVaryingEXT_Idx,
		glGetTransformFeedbackVaryingNV_Idx,
		glGetTranslatedShaderSourceANGLE_Idx,
		glGetUniformBlockIndex_Idx,
		glGetUniformBufferSizeEXT_Idx,
		glGetUniformIndices_Idx,
		glGetUniformLocation_Idx,
		glGetUniformLocationARB_Idx,
		glGetUniformOffsetEXT_Idx,
		glGetUniformSubroutineuiv_Idx,
		glGetUniformdv_Idx,
		glGetUniformfv_Idx,
		glGetUniformfvARB_Idx,
		glGetUniformi64vNV_Idx,
		glGetUniformiv_Idx,
		glGetUniformivARB_Idx,
		glGetUniformui64vNV_Idx,
		glGetUniformuiv_Idx,
		glGetUniformuivEXT_Idx,
		glGetVariantArrayObjectfvATI_Idx,
		glGetVariantArrayObjectivATI_Idx,
		glGetVariantBooleanvEXT_Idx,
		glGetVariantFloatvEXT_Idx,
		glGetVariantIntegervEXT_Idx,
		glGetVariantPointervEXT_Idx,
		glGetVaryingLocationNV_Idx,
		glGetVertexArrayIntegeri_vEXT_Idx,
		glGetVertexArrayIntegervEXT_Idx,
		glGetVertexArrayPointeri_vEXT_Idx,
		glGetVertexArrayPointervEXT_Idx,
		glGetVertexAttribArrayObjectfvATI_Idx,
		glGetVertexAttribArrayObjectivATI_Idx,
		glGetVertexAttribIiv_Idx,
		glGetVertexAttribIivEXT_Idx,
		glGetVertexAttribIuiv_Idx,
		glGetVertexAttribIuivEXT_Idx,
		glGetVertexAttribLdv_Idx,
		glGetVertexAttribLdvEXT_Idx,
		glGetVertexAttribLi64vNV_Idx,
		glGetVertexAttribLui64vARB_Idx,
		glGetVertexAttribLui64vNV_Idx,
		glGetVertexAttribPointerv_Idx,
		glGetVertexAttribPointervARB_Idx,
		glGetVertexAttribPointervNV_Idx,
		glGetVertexAttribdv_Idx,
		glGetVertexAttribdvARB_Idx,
		glGetVertexAttribdvNV_Idx,
		glGetVertexAttribfv_Idx,
		glGetVertexAttribfvARB_Idx,
		glGetVertexAttribfvNV_Idx,
		glGetVertexAttribiv_Idx,
		glGetVertexAttribivARB_Idx,
		glGetVertexAttribivNV_Idx,
		glGetVideoCaptureStreamdvNV_Idx,
		glGetVideoCaptureStreamfvNV_Idx,
		glGetVideoCaptureStreamivNV_Idx,
		glGetVideoCaptureivNV_Idx,
		glGetVideoi64vNV_Idx,
		glGetVideoivNV_Idx,
		glGetVideoui64vNV_Idx,
		glGetVideouivNV_Idx,
		glGetnColorTableARB_Idx,
		glGetnCompressedTexImageARB_Idx,
		glGetnConvolutionFilterARB_Idx,
		glGetnHistogramARB_Idx,
		glGetnMapdvARB_Idx,
		glGetnMapfvARB_Idx,
		glGetnMapivARB_Idx,
		glGetnMinmaxARB_Idx,
		glGetnPixelMapfvARB_Idx,
		glGetnPixelMapuivARB_Idx,
		glGetnPixelMapusvARB_Idx,
		glGetnPolygonStippleARB_Idx,
		glGetnSeparableFilterARB_Idx,
		glGetnTexImageARB_Idx,
		glGetnUniformdvARB_Idx,
		glGetnUniformfvARB_Idx,
		glGetnUniformfvEXT_Idx,
		glGetnUniformivARB_Idx,
		glGetnUniformivEXT_Idx,
		glGetnUniformuivARB_Idx,
		glGlobalAlphaFactorbSUN_Idx,
		glGlobalAlphaFactordSUN_Idx,
		glGlobalAlphaFactorfSUN_Idx,
		glGlobalAlphaFactoriSUN_Idx,
		glGlobalAlphaFactorsSUN_Idx,
		glGlobalAlphaFactorubSUN_Idx,
		glGlobalAlphaFactoruiSUN_Idx,
		glGlobalAlphaFactorusSUN_Idx,
		glHint_Idx,
		glHintPGI_Idx,
		glHistogram_Idx,
		glHistogramEXT_Idx,
		glIglooInterfaceSGIX_Idx,
		glImageTransformParameterfHP_Idx,
		glImageTransformParameterfvHP_Idx,
		glImageTransformParameteriHP_Idx,
		glImageTransformParameterivHP_Idx,
		glImportSyncEXT_Idx,
		glIndexFormatNV_Idx,
		glIndexFuncEXT_Idx,
		glIndexMask_Idx,
		glIndexMaterialEXT_Idx,
		glIndexPointer_Idx,
		glIndexPointerEXT_Idx,
		glIndexPointerListIBM_Idx,
		glIndexd_Idx,
		glIndexdv_Idx,
		glIndexf_Idx,
		glIndexfv_Idx,
		glIndexi_Idx,
		glIndexiv_Idx,
		glIndexs_Idx,
		glIndexsv_Idx,
		glIndexub_Idx,
		glIndexubv_Idx,
		glIndexxOES_Idx,
		glIndexxvOES_Idx,
		glInsertComponentEXT_Idx,
		glInsertEventMarkerEXT_Idx,
		glInstrumentsBufferSGIX_Idx,
		glInterleavedArrays_Idx,
		glInterpolatePathsNV_Idx,
		glInvalidateBufferData_Idx,
		glInvalidateBufferSubData_Idx,
		glInvalidateFramebuffer_Idx,
		glInvalidateSubFramebuffer_Idx,
		glInvalidateTexImage_Idx,
		glInvalidateTexSubImage_Idx,
		glIsAsyncMarkerSGIX_Idx,
		glIsBuffer_Idx,
		glIsBufferARB_Idx,
		glIsBufferResidentNV_Idx,
		glIsEnabled_Idx,
		glIsEnabledIndexedEXT_Idx,
		glIsEnabledi_Idx,
		glIsEnablediEXT_Idx,
		glIsFenceAPPLE_Idx,
		glIsFenceNV_Idx,
		glIsFramebuffer_Idx,
		glIsFramebufferEXT_Idx,
		glIsFramebufferOES_Idx,
		glIsImageHandleResidentARB_Idx,
		glIsImageHandleResidentNV_Idx,
		glIsList_Idx,
		glIsNameAMD_Idx,
		glIsNamedBufferResidentNV_Idx,
		glIsNamedStringARB_Idx,
		glIsObjectBufferATI_Idx,
		glIsOcclusionQueryNV_Idx,
		glIsPathNV_Idx,
		glIsPointInFillPathNV_Idx,
		glIsPointInStrokePathNV_Idx,
		glIsProgram_Idx,
		glIsProgramARB_Idx,
		glIsProgramNV_Idx,
		glIsProgramPipeline_Idx,
		glIsProgramPipelineEXT_Idx,
		glIsQuery_Idx,
		glIsQueryARB_Idx,
		glIsQueryEXT_Idx,
		glIsRenderbuffer_Idx,
		glIsRenderbufferEXT_Idx,
		glIsRenderbufferOES_Idx,
		glIsSampler_Idx,
		glIsShader_Idx,
		glIsSync_Idx,
		glIsSyncAPPLE_Idx,
		glIsTexture_Idx,
		glIsTextureEXT_Idx,
		glIsTextureHandleResidentARB_Idx,
		glIsTextureHandleResidentNV_Idx,
		glIsTransformFeedback_Idx,
		glIsTransformFeedbackNV_Idx,
		glIsVariantEnabledEXT_Idx,
		glIsVertexArray_Idx,
		glIsVertexArrayAPPLE_Idx,
		glIsVertexArrayOES_Idx,
		glIsVertexAttribEnabledAPPLE_Idx,
		glLabelObjectEXT_Idx,
		glLightEnviSGIX_Idx,
		glLightModelf_Idx,
		glLightModelfv_Idx,
		glLightModeli_Idx,
		glLightModeliv_Idx,
		glLightModelx_Idx,
		glLightModelxOES_Idx,
		glLightModelxv_Idx,
		glLightModelxvOES_Idx,
		glLightf_Idx,
		glLightfv_Idx,
		glLighti_Idx,
		glLightiv_Idx,
		glLightx_Idx,
		glLightxOES_Idx,
		glLightxv_Idx,
		glLightxvOES_Idx,
		glLineStipple_Idx,
		glLineWidth_Idx,
		glLineWidthx_Idx,
		glLineWidthxOES_Idx,
		glLinkProgram_Idx,
		glLinkProgramARB_Idx,
		glListBase_Idx,
		glListParameterfSGIX_Idx,
		glListParameterfvSGIX_Idx,
		glListParameteriSGIX_Idx,
		glListParameterivSGIX_Idx,
		glLoadIdentityDeformationMapSGIX_Idx,
		glLoadMatrixd_Idx,
		glLoadMatrixf_Idx,
		glLoadMatrixx_Idx,
		glLoadMatrixxOES_Idx,
		glLoadName_Idx,
		glLoadProgramNV_Idx,
		glLoadTransposeMatrixd_Idx,
		glLoadTransposeMatrixdARB_Idx,
		glLoadTransposeMatrixf_Idx,
		glLoadTransposeMatrixfARB_Idx,
		glLoadTransposeMatrixxOES_Idx,
		glLockArraysEXT_Idx,
		glLogicOp_Idx,
		glMakeBufferNonResidentNV_Idx,
		glMakeBufferResidentNV_Idx,
		glMakeImageHandleNonResidentARB_Idx,
		glMakeImageHandleNonResidentNV_Idx,
		glMakeImageHandleResidentARB_Idx,
		glMakeImageHandleResidentNV_Idx,
		glMakeNamedBufferNonResidentNV_Idx,
		glMakeNamedBufferResidentNV_Idx,
		glMakeTextureHandleNonResidentARB_Idx,
		glMakeTextureHandleNonResidentNV_Idx,
		glMakeTextureHandleResidentARB_Idx,
		glMakeTextureHandleResidentNV_Idx,
		glMap1d_Idx,
		glMap1f_Idx,
		glMap1xOES_Idx,
		glMap2d_Idx,
		glMap2f_Idx,
		glMap2xOES_Idx,
		glMapBuffer_Idx,
		glMapBufferARB_Idx,
		glMapBufferOES_Idx,
		glMapBufferRange_Idx,
		glMapBufferRangeEXT_Idx,
		glMapControlPointsNV_Idx,
		glMapGrid1d_Idx,
		glMapGrid1f_Idx,
		glMapGrid1xOES_Idx,
		glMapGrid2d_Idx,
		glMapGrid2f_Idx,
		glMapGrid2xOES_Idx,
		glMapNamedBufferEXT_Idx,
		glMapNamedBufferRangeEXT_Idx,
		glMapObjectBufferATI_Idx,
		glMapParameterfvNV_Idx,
		glMapParameterivNV_Idx,
		glMapTexture2DINTEL_Idx,
		glMapVertexAttrib1dAPPLE_Idx,
		glMapVertexAttrib1fAPPLE_Idx,
		glMapVertexAttrib2dAPPLE_Idx,
		glMapVertexAttrib2fAPPLE_Idx,
		glMaterialf_Idx,
		glMaterialfv_Idx,
		glMateriali_Idx,
		glMaterialiv_Idx,
		glMaterialx_Idx,
		glMaterialxOES_Idx,
		glMaterialxv_Idx,
		glMaterialxvOES_Idx,
		glMatrixFrustumEXT_Idx,
		glMatrixIndexPointerARB_Idx,
		glMatrixIndexPointerOES_Idx,
		glMatrixIndexubvARB_Idx,
		glMatrixIndexuivARB_Idx,
		glMatrixIndexusvARB_Idx,
		glMatrixLoadIdentityEXT_Idx,
		glMatrixLoadTransposedEXT_Idx,
		glMatrixLoadTransposefEXT_Idx,
		glMatrixLoaddEXT_Idx,
		glMatrixLoadfEXT_Idx,
		glMatrixMode_Idx,
		glMatrixMultTransposedEXT_Idx,
		glMatrixMultTransposefEXT_Idx,
		glMatrixMultdEXT_Idx,
		glMatrixMultfEXT_Idx,
		glMatrixOrthoEXT_Idx,
		glMatrixPopEXT_Idx,
		glMatrixPushEXT_Idx,
		glMatrixRotatedEXT_Idx,
		glMatrixRotatefEXT_Idx,
		glMatrixScaledEXT_Idx,
		glMatrixScalefEXT_Idx,
		glMatrixTranslatedEXT_Idx,
		glMatrixTranslatefEXT_Idx,
		glMemoryBarrier_Idx,
		glMemoryBarrierByRegion_Idx,
		glMemoryBarrierEXT_Idx,
		glMinSampleShading_Idx,
		glMinSampleShadingARB_Idx,
		glMinSampleShadingOES_Idx,
		glMinmax_Idx,
		glMinmaxEXT_Idx,
		glMultMatrixd_Idx,
		glMultMatrixf_Idx,
		glMultMatrixx_Idx,
		glMultMatrixxOES_Idx,
		glMultTransposeMatrixd_Idx,
		glMultTransposeMatrixdARB_Idx,
		glMultTransposeMatrixf_Idx,
		glMultTransposeMatrixfARB_Idx,
		glMultTransposeMatrixxOES_Idx,
		glMultiDrawArrays_Idx,
		glMultiDrawArraysEXT_Idx,
		glMultiDrawArraysIndirect_Idx,
		glMultiDrawArraysIndirectAMD_Idx,
		glMultiDrawArraysIndirectBindlessNV_Idx,
		glMultiDrawArraysIndirectCountARB_Idx,
		glMultiDrawElementArrayAPPLE_Idx,
		glMultiDrawElements_Idx,
		glMultiDrawElementsBaseVertex_Idx,
		glMultiDrawElementsEXT_Idx,
		glMultiDrawElementsIndirect_Idx,
		glMultiDrawElementsIndirectAMD_Idx,
		glMultiDrawElementsIndirectBindlessNV_Idx,
		glMultiDrawElementsIndirectCountARB_Idx,
		glMultiDrawRangeElementArrayAPPLE_Idx,
		glMultiModeDrawArraysIBM_Idx,
		glMultiModeDrawElementsIBM_Idx,
		glMultiTexBufferEXT_Idx,
		glMultiTexCoord1bOES_Idx,
		glMultiTexCoord1bvOES_Idx,
		glMultiTexCoord1d_Idx,
		glMultiTexCoord1dARB_Idx,
		glMultiTexCoord1dv_Idx,
		glMultiTexCoord1dvARB_Idx,
		glMultiTexCoord1f_Idx,
		glMultiTexCoord1fARB_Idx,
		glMultiTexCoord1fv_Idx,
		glMultiTexCoord1fvARB_Idx,
		glMultiTexCoord1hNV_Idx,
		glMultiTexCoord1hvNV_Idx,
		glMultiTexCoord1i_Idx,
		glMultiTexCoord1iARB_Idx,
		glMultiTexCoord1iv_Idx,
		glMultiTexCoord1ivARB_Idx,
		glMultiTexCoord1s_Idx,
		glMultiTexCoord1sARB_Idx,
		glMultiTexCoord1sv_Idx,
		glMultiTexCoord1svARB_Idx,
		glMultiTexCoord1xOES_Idx,
		glMultiTexCoord1xvOES_Idx,
		glMultiTexCoord2bOES_Idx,
		glMultiTexCoord2bvOES_Idx,
		glMultiTexCoord2d_Idx,
		glMultiTexCoord2dARB_Idx,
		glMultiTexCoord2dv_Idx,
		glMultiTexCoord2dvARB_Idx,
		glMultiTexCoord2f_Idx,
		glMultiTexCoord2fARB_Idx,
		glMultiTexCoord2fv_Idx,
		glMultiTexCoord2fvARB_Idx,
		glMultiTexCoord2hNV_Idx,
		glMultiTexCoord2hvNV_Idx,
		glMultiTexCoord2i_Idx,
		glMultiTexCoord2iARB_Idx,
		glMultiTexCoord2iv_Idx,
		glMultiTexCoord2ivARB_Idx,
		glMultiTexCoord2s_Idx,
		glMultiTexCoord2sARB_Idx,
		glMultiTexCoord2sv_Idx,
		glMultiTexCoord2svARB_Idx,
		glMultiTexCoord2xOES_Idx,
		glMultiTexCoord2xvOES_Idx,
		glMultiTexCoord3bOES_Idx,
		glMultiTexCoord3bvOES_Idx,
		glMultiTexCoord3d_Idx,
		glMultiTexCoord3dARB_Idx,
		glMultiTexCoord3dv_Idx,
		glMultiTexCoord3dvARB_Idx,
		glMultiTexCoord3f_Idx,
		glMultiTexCoord3fARB_Idx,
		glMultiTexCoord3fv_Idx,
		glMultiTexCoord3fvARB_Idx,
		glMultiTexCoord3hNV_Idx,
		glMultiTexCoord3hvNV_Idx,
		glMultiTexCoord3i_Idx,
		glMultiTexCoord3iARB_Idx,
		glMultiTexCoord3iv_Idx,
		glMultiTexCoord3ivARB_Idx,
		glMultiTexCoord3s_Idx,
		glMultiTexCoord3sARB_Idx,
		glMultiTexCoord3sv_Idx,
		glMultiTexCoord3svARB_Idx,
		glMultiTexCoord3xOES_Idx,
		glMultiTexCoord3xvOES_Idx,
		glMultiTexCoord4bOES_Idx,
		glMultiTexCoord4bvOES_Idx,
		glMultiTexCoord4d_Idx,
		glMultiTexCoord4dARB_Idx,
		glMultiTexCoord4dv_Idx,
		glMultiTexCoord4dvARB_Idx,
		glMultiTexCoord4f_Idx,
		glMultiTexCoord4fARB_Idx,
		glMultiTexCoord4fv_Idx,
		glMultiTexCoord4fvARB_Idx,
		glMultiTexCoord4hNV_Idx,
		glMultiTexCoord4hvNV_Idx,
		glMultiTexCoord4i_Idx,
		glMultiTexCoord4iARB_Idx,
		glMultiTexCoord4iv_Idx,
		glMultiTexCoord4ivARB_Idx,
		glMultiTexCoord4s_Idx,
		glMultiTexCoord4sARB_Idx,
		glMultiTexCoord4sv_Idx,
		glMultiTexCoord4svARB_Idx,
		glMultiTexCoord4x_Idx,
		glMultiTexCoord4xOES_Idx,
		glMultiTexCoord4xvOES_Idx,
		glMultiTexCoordP1ui_Idx,
		glMultiTexCoordP1uiv_Idx,
		glMultiTexCoordP2ui_Idx,
		glMultiTexCoordP2uiv_Idx,
		glMultiTexCoordP3ui_Idx,
		glMultiTexCoordP3uiv_Idx,
		glMultiTexCoordP4ui_Idx,
		glMultiTexCoordP4uiv_Idx,
		glMultiTexCoordPointerEXT_Idx,
		glMultiTexEnvfEXT_Idx,
		glMultiTexEnvfvEXT_Idx,
		glMultiTexEnviEXT_Idx,
		glMultiTexEnvivEXT_Idx,
		glMultiTexGendEXT_Idx,
		glMultiTexGendvEXT_Idx,
		glMultiTexGenfEXT_Idx,
		glMultiTexGenfvEXT_Idx,
		glMultiTexGeniEXT_Idx,
		glMultiTexGenivEXT_Idx,
		glMultiTexImage1DEXT_Idx,
		glMultiTexImage2DEXT_Idx,
		glMultiTexImage3DEXT_Idx,
		glMultiTexParameterIivEXT_Idx,
		glMultiTexParameterIuivEXT_Idx,
		glMultiTexParameterfEXT_Idx,
		glMultiTexParameterfvEXT_Idx,
		glMultiTexParameteriEXT_Idx,
		glMultiTexParameterivEXT_Idx,
		glMultiTexRenderbufferEXT_Idx,
		glMultiTexSubImage1DEXT_Idx,
		glMultiTexSubImage2DEXT_Idx,
		glMultiTexSubImage3DEXT_Idx,
		glNamedBufferDataEXT_Idx,
		glNamedBufferStorageEXT_Idx,
		glNamedBufferSubDataEXT_Idx,
		glNamedCopyBufferSubDataEXT_Idx,
		glNamedFramebufferParameteriEXT_Idx,
		glNamedFramebufferRenderbufferEXT_Idx,
		glNamedFramebufferTexture1DEXT_Idx,
		glNamedFramebufferTexture2DEXT_Idx,
		glNamedFramebufferTexture3DEXT_Idx,
		glNamedFramebufferTextureEXT_Idx,
		glNamedFramebufferTextureFaceEXT_Idx,
		glNamedFramebufferTextureLayerEXT_Idx,
		glNamedProgramLocalParameter4dEXT_Idx,
		glNamedProgramLocalParameter4dvEXT_Idx,
		glNamedProgramLocalParameter4fEXT_Idx,
		glNamedProgramLocalParameter4fvEXT_Idx,
		glNamedProgramLocalParameterI4iEXT_Idx,
		glNamedProgramLocalParameterI4ivEXT_Idx,
		glNamedProgramLocalParameterI4uiEXT_Idx,
		glNamedProgramLocalParameterI4uivEXT_Idx,
		glNamedProgramLocalParameters4fvEXT_Idx,
		glNamedProgramLocalParametersI4ivEXT_Idx,
		glNamedProgramLocalParametersI4uivEXT_Idx,
		glNamedProgramStringEXT_Idx,
		glNamedRenderbufferStorageEXT_Idx,
		glNamedRenderbufferStorageMultisampleCoverageEXT_Idx,
		glNamedRenderbufferStorageMultisampleEXT_Idx,
		glNamedStringARB_Idx,
		glNewList_Idx,
		glNewObjectBufferATI_Idx,
		glNormal3b_Idx,
		glNormal3bv_Idx,
		glNormal3d_Idx,
		glNormal3dv_Idx,
		glNormal3f_Idx,
		glNormal3fVertex3fSUN_Idx,
		glNormal3fVertex3fvSUN_Idx,
		glNormal3fv_Idx,
		glNormal3hNV_Idx,
		glNormal3hvNV_Idx,
		glNormal3i_Idx,
		glNormal3iv_Idx,
		glNormal3s_Idx,
		glNormal3sv_Idx,
		glNormal3x_Idx,
		glNormal3xOES_Idx,
		glNormal3xvOES_Idx,
		glNormalFormatNV_Idx,
		glNormalP3ui_Idx,
		glNormalP3uiv_Idx,
		glNormalPointer_Idx,
		glNormalPointerEXT_Idx,
		glNormalPointerListIBM_Idx,
		glNormalPointervINTEL_Idx,
		glNormalStream3bATI_Idx,
		glNormalStream3bvATI_Idx,
		glNormalStream3dATI_Idx,
		glNormalStream3dvATI_Idx,
		glNormalStream3fATI_Idx,
		glNormalStream3fvATI_Idx,
		glNormalStream3iATI_Idx,
		glNormalStream3ivATI_Idx,
		glNormalStream3sATI_Idx,
		glNormalStream3svATI_Idx,
		glObjectLabel_Idx,
		glObjectLabelKHR_Idx,
		glObjectPtrLabel_Idx,
		glObjectPtrLabelKHR_Idx,
		glObjectPurgeableAPPLE_Idx,
		glObjectUnpurgeableAPPLE_Idx,
		glOrtho_Idx,
		glOrthof_Idx,
		glOrthofOES_Idx,
		glOrthox_Idx,
		glOrthoxOES_Idx,
		glPNTrianglesfATI_Idx,
		glPNTrianglesiATI_Idx,
		glPassTexCoordATI_Idx,
		glPassThrough_Idx,
		glPassThroughxOES_Idx,
		glPatchParameterfv_Idx,
		glPatchParameteri_Idx,
		glPatchParameteriEXT_Idx,
		glPathColorGenNV_Idx,
		glPathCommandsNV_Idx,
		glPathCoordsNV_Idx,
		glPathCoverDepthFuncNV_Idx,
		glPathDashArrayNV_Idx,
		glPathFogGenNV_Idx,
		glPathGlyphRangeNV_Idx,
		glPathGlyphsNV_Idx,
		glPathParameterfNV_Idx,
		glPathParameterfvNV_Idx,
		glPathParameteriNV_Idx,
		glPathParameterivNV_Idx,
		glPathStencilDepthOffsetNV_Idx,
		glPathStencilFuncNV_Idx,
		glPathStringNV_Idx,
		glPathSubCommandsNV_Idx,
		glPathSubCoordsNV_Idx,
		glPathTexGenNV_Idx,
		glPixelDataRangeNV_Idx,
		glPixelMapfv_Idx,
		glPixelMapuiv_Idx,
		glPixelMapusv_Idx,
		glPixelMapx_Idx,
		glPixelStoref_Idx,
		glPixelStorei_Idx,
		glPixelStorex_Idx,
		glPixelTexGenParameterfSGIS_Idx,
		glPixelTexGenParameterfvSGIS_Idx,
		glPixelTexGenParameteriSGIS_Idx,
		glPixelTexGenParameterivSGIS_Idx,
		glPixelTexGenSGIX_Idx,
		glPixelTransferf_Idx,
		glPixelTransferi_Idx,
		glPixelTransferxOES_Idx,
		glPixelTransformParameterfEXT_Idx,
		glPixelTransformParameterfvEXT_Idx,
		glPixelTransformParameteriEXT_Idx,
		glPixelTransformParameterivEXT_Idx,
		glPixelZoom_Idx,
		glPixelZoomxOES_Idx,
		glPointAlongPathNV_Idx,
		glPointParameterf_Idx,
		glPointParameterfARB_Idx,
		glPointParameterfEXT_Idx,
		glPointParameterfSGIS_Idx,
		glPointParameterfv_Idx,
		glPointParameterfvARB_Idx,
		glPointParameterfvEXT_Idx,
		glPointParameterfvSGIS_Idx,
		glPointParameteri_Idx,
		glPointParameteriNV_Idx,
		glPointParameteriv_Idx,
		glPointParameterivNV_Idx,
		glPointParameterx_Idx,
		glPointParameterxOES_Idx,
		glPointParameterxv_Idx,
		glPointParameterxvOES_Idx,
		glPointSize_Idx,
		glPointSizePointerOES_Idx,
		glPointSizex_Idx,
		glPointSizexOES_Idx,
		glPollAsyncSGIX_Idx,
		glPollInstrumentsSGIX_Idx,
		glPolygonMode_Idx,
		glPolygonOffset_Idx,
		glPolygonOffsetEXT_Idx,
		glPolygonOffsetx_Idx,
		glPolygonOffsetxOES_Idx,
		glPolygonStipple_Idx,
		glPresentFrameDualFillNV_Idx,
		glPresentFrameKeyedNV_Idx,
		glPrimitiveRestartIndex_Idx,
		glPrimitiveRestartIndexNV_Idx,
		glPrioritizeTextures_Idx,
		glPrimitiveBoundingBoxEXT_Idx,
		glPrioritizeTexturesEXT_Idx,
		glPrioritizeTexturesxOES_Idx,
		glProgramBinary_Idx,
		glProgramBinaryOES_Idx,
		glProgramBufferParametersIivNV_Idx,
		glProgramBufferParametersIuivNV_Idx,
		glProgramBufferParametersfvNV_Idx,
		glProgramEnvParameter4dARB_Idx,
		glProgramEnvParameter4dvARB_Idx,
		glProgramEnvParameter4fARB_Idx,
		glProgramEnvParameter4fvARB_Idx,
		glProgramEnvParameterI4iNV_Idx,
		glProgramEnvParameterI4ivNV_Idx,
		glProgramEnvParameterI4uiNV_Idx,
		glProgramEnvParameterI4uivNV_Idx,
		glProgramEnvParameters4fvEXT_Idx,
		glProgramEnvParametersI4ivNV_Idx,
		glProgramEnvParametersI4uivNV_Idx,
		glProgramLocalParameter4dARB_Idx,
		glProgramLocalParameter4dvARB_Idx,
		glProgramLocalParameter4fARB_Idx,
		glProgramLocalParameter4fvARB_Idx,
		glProgramLocalParameterI4iNV_Idx,
		glProgramLocalParameterI4ivNV_Idx,
		glProgramLocalParameterI4uiNV_Idx,
		glProgramLocalParameterI4uivNV_Idx,
		glProgramLocalParameters4fvEXT_Idx,
		glProgramLocalParametersI4ivNV_Idx,
		glProgramLocalParametersI4uivNV_Idx,
		glProgramNamedParameter4dNV_Idx,
		glProgramNamedParameter4dvNV_Idx,
		glProgramNamedParameter4fNV_Idx,
		glProgramNamedParameter4fvNV_Idx,
		glProgramParameter4dNV_Idx,
		glProgramParameter4dvNV_Idx,
		glProgramParameter4fNV_Idx,
		glProgramParameter4fvNV_Idx,
		glProgramParameteri_Idx,
		glProgramParameteriARB_Idx,
		glProgramParameteriEXT_Idx,
		glProgramParameters4dvNV_Idx,
		glProgramParameters4fvNV_Idx,
		glProgramStringARB_Idx,
		glProgramSubroutineParametersuivNV_Idx,
		glProgramUniform1d_Idx,
		glProgramUniform1dEXT_Idx,
		glProgramUniform1dv_Idx,
		glProgramUniform1dvEXT_Idx,
		glProgramUniform1f_Idx,
		glProgramUniform1fEXT_Idx,
		glProgramUniform1fv_Idx,
		glProgramUniform1fvEXT_Idx,
		glProgramUniform1i_Idx,
		glProgramUniform1i64NV_Idx,
		glProgramUniform1i64vNV_Idx,
		glProgramUniform1iEXT_Idx,
		glProgramUniform1iv_Idx,
		glProgramUniform1ivEXT_Idx,
		glProgramUniform1ui_Idx,
		glProgramUniform1ui64NV_Idx,
		glProgramUniform1ui64vNV_Idx,
		glProgramUniform1uiEXT_Idx,
		glProgramUniform1uiv_Idx,
		glProgramUniform1uivEXT_Idx,
		glProgramUniform2d_Idx,
		glProgramUniform2dEXT_Idx,
		glProgramUniform2dv_Idx,
		glProgramUniform2dvEXT_Idx,
		glProgramUniform2f_Idx,
		glProgramUniform2fEXT_Idx,
		glProgramUniform2fv_Idx,
		glProgramUniform2fvEXT_Idx,
		glProgramUniform2i_Idx,
		glProgramUniform2i64NV_Idx,
		glProgramUniform2i64vNV_Idx,
		glProgramUniform2iEXT_Idx,
		glProgramUniform2iv_Idx,
		glProgramUniform2ivEXT_Idx,
		glProgramUniform2ui_Idx,
		glProgramUniform2ui64NV_Idx,
		glProgramUniform2ui64vNV_Idx,
		glProgramUniform2uiEXT_Idx,
		glProgramUniform2uiv_Idx,
		glProgramUniform2uivEXT_Idx,
		glProgramUniform3d_Idx,
		glProgramUniform3dEXT_Idx,
		glProgramUniform3dv_Idx,
		glProgramUniform3dvEXT_Idx,
		glProgramUniform3f_Idx,
		glProgramUniform3fEXT_Idx,
		glProgramUniform3fv_Idx,
		glProgramUniform3fvEXT_Idx,
		glProgramUniform3i_Idx,
		glProgramUniform3i64NV_Idx,
		glProgramUniform3i64vNV_Idx,
		glProgramUniform3iEXT_Idx,
		glProgramUniform3iv_Idx,
		glProgramUniform3ivEXT_Idx,
		glProgramUniform3ui_Idx,
		glProgramUniform3ui64NV_Idx,
		glProgramUniform3ui64vNV_Idx,
		glProgramUniform3uiEXT_Idx,
		glProgramUniform3uiv_Idx,
		glProgramUniform3uivEXT_Idx,
		glProgramUniform4d_Idx,
		glProgramUniform4dEXT_Idx,
		glProgramUniform4dv_Idx,
		glProgramUniform4dvEXT_Idx,
		glProgramUniform4f_Idx,
		glProgramUniform4fEXT_Idx,
		glProgramUniform4fv_Idx,
		glProgramUniform4fvEXT_Idx,
		glProgramUniform4i_Idx,
		glProgramUniform4i64NV_Idx,
		glProgramUniform4i64vNV_Idx,
		glProgramUniform4iEXT_Idx,
		glProgramUniform4iv_Idx,
		glProgramUniform4ivEXT_Idx,
		glProgramUniform4ui_Idx,
		glProgramUniform4ui64NV_Idx,
		glProgramUniform4ui64vNV_Idx,
		glProgramUniform4uiEXT_Idx,
		glProgramUniform4uiv_Idx,
		glProgramUniform4uivEXT_Idx,
		glProgramUniformHandleui64ARB_Idx,
		glProgramUniformHandleui64NV_Idx,
		glProgramUniformHandleui64vARB_Idx,
		glProgramUniformHandleui64vNV_Idx,
		glProgramUniformMatrix2dv_Idx,
		glProgramUniformMatrix2dvEXT_Idx,
		glProgramUniformMatrix2fv_Idx,
		glProgramUniformMatrix2fvEXT_Idx,
		glProgramUniformMatrix2x3dv_Idx,
		glProgramUniformMatrix2x3dvEXT_Idx,
		glProgramUniformMatrix2x3fv_Idx,
		glProgramUniformMatrix2x3fvEXT_Idx,
		glProgramUniformMatrix2x4dv_Idx,
		glProgramUniformMatrix2x4dvEXT_Idx,
		glProgramUniformMatrix2x4fv_Idx,
		glProgramUniformMatrix2x4fvEXT_Idx,
		glProgramUniformMatrix3dv_Idx,
		glProgramUniformMatrix3dvEXT_Idx,
		glProgramUniformMatrix3fv_Idx,
		glProgramUniformMatrix3fvEXT_Idx,
		glProgramUniformMatrix3x2dv_Idx,
		glProgramUniformMatrix3x2dvEXT_Idx,
		glProgramUniformMatrix3x2fv_Idx,
		glProgramUniformMatrix3x2fvEXT_Idx,
		glProgramUniformMatrix3x4dv_Idx,
		glProgramUniformMatrix3x4dvEXT_Idx,
		glProgramUniformMatrix3x4fv_Idx,
		glProgramUniformMatrix3x4fvEXT_Idx,
		glProgramUniformMatrix4dv_Idx,
		glProgramUniformMatrix4dvEXT_Idx,
		glProgramUniformMatrix4fv_Idx,
		glProgramUniformMatrix4fvEXT_Idx,
		glProgramUniformMatrix4x2dv_Idx,
		glProgramUniformMatrix4x2dvEXT_Idx,
		glProgramUniformMatrix4x2fv_Idx,
		glProgramUniformMatrix4x2fvEXT_Idx,
		glProgramUniformMatrix4x3dv_Idx,
		glProgramUniformMatrix4x3dvEXT_Idx,
		glProgramUniformMatrix4x3fv_Idx,
		glProgramUniformMatrix4x3fvEXT_Idx,
		glProgramUniformui64NV_Idx,
		glProgramUniformui64vNV_Idx,
		glProgramVertexLimitNV_Idx,
		glProvokingVertex_Idx,
		glProvokingVertexEXT_Idx,
		glPushAttrib_Idx,
		glPushClientAttrib_Idx,
		glPushClientAttribDefaultEXT_Idx,
		glPushDebugGroup_Idx,
		glPushDebugGroupKHR_Idx,
		glPushGroupMarkerEXT_Idx,
		glPushName_Idx,
		glQueryCounter_Idx,
		glQueryCounterEXT_Idx,
		glQueryMatrixxOES_Idx,
		glQueryObjectParameteruiAMD_Idx,
		glRasterPos2d_Idx,
		glRasterPos2dv_Idx,
		glRasterPos2f_Idx,
		glRasterPos2fv_Idx,
		glRasterPos2i_Idx,
		glRasterPos2iv_Idx,
		glRasterPos2s_Idx,
		glRasterPos2sv_Idx,
		glRasterPos2xOES_Idx,
		glRasterPos2xvOES_Idx,
		glRasterPos3d_Idx,
		glRasterPos3dv_Idx,
		glRasterPos3f_Idx,
		glRasterPos3fv_Idx,
		glRasterPos3i_Idx,
		glRasterPos3iv_Idx,
		glRasterPos3s_Idx,
		glRasterPos3sv_Idx,
		glRasterPos3xOES_Idx,
		glRasterPos3xvOES_Idx,
		glRasterPos4d_Idx,
		glRasterPos4dv_Idx,
		glRasterPos4f_Idx,
		glRasterPos4fv_Idx,
		glRasterPos4i_Idx,
		glRasterPos4iv_Idx,
		glRasterPos4s_Idx,
		glRasterPos4sv_Idx,
		glRasterPos4xOES_Idx,
		glRasterPos4xvOES_Idx,
		glReadBuffer_Idx,
		glReadBufferIndexedEXT_Idx,
		glReadBufferNV_Idx,
		glReadInstrumentsSGIX_Idx,
		glReadPixels_Idx,
		glReadnPixelsARB_Idx,
		glReadnPixelsEXT_Idx,
		glRectd_Idx,
		glRectdv_Idx,
		glRectf_Idx,
		glRectfv_Idx,
		glRecti_Idx,
		glRectiv_Idx,
		glRects_Idx,
		glRectsv_Idx,
		glRectxOES_Idx,
		glRectxvOES_Idx,
		glReferencePlaneSGIX_Idx,
		glRenderMode_Idx,
		glRenderbufferStorage_Idx,
		glRenderbufferStorageEXT_Idx,
		glRenderbufferStorageMultisample_Idx,
		glRenderbufferStorageMultisampleANGLE_Idx,
		glRenderbufferStorageMultisampleAPPLE_Idx,
		glRenderbufferStorageMultisampleCoverageNV_Idx,
		glRenderbufferStorageMultisampleEXT_Idx,
		glRenderbufferStorageMultisampleIMG_Idx,
		glRenderbufferStorageMultisampleNV_Idx,
		glRenderbufferStorageOES_Idx,
		glReplacementCodePointerSUN_Idx,
		glReplacementCodeubSUN_Idx,
		glReplacementCodeubvSUN_Idx,
		glReplacementCodeuiColor3fVertex3fSUN_Idx,
		glReplacementCodeuiColor3fVertex3fvSUN_Idx,
		glReplacementCodeuiColor4fNormal3fVertex3fSUN_Idx,
		glReplacementCodeuiColor4fNormal3fVertex3fvSUN_Idx,
		glReplacementCodeuiColor4ubVertex3fSUN_Idx,
		glReplacementCodeuiColor4ubVertex3fvSUN_Idx,
		glReplacementCodeuiNormal3fVertex3fSUN_Idx,
		glReplacementCodeuiNormal3fVertex3fvSUN_Idx,
		glReplacementCodeuiSUN_Idx,
		glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN_Idx,
		glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN_Idx,
		glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN_Idx,
		glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN_Idx,
		glReplacementCodeuiTexCoord2fVertex3fSUN_Idx,
		glReplacementCodeuiTexCoord2fVertex3fvSUN_Idx,
		glReplacementCodeuiVertex3fSUN_Idx,
		glReplacementCodeuiVertex3fvSUN_Idx,
		glReplacementCodeuivSUN_Idx,
		glReplacementCodeusSUN_Idx,
		glReplacementCodeusvSUN_Idx,
		glRequestResidentProgramsNV_Idx,
		glResetHistogram_Idx,
		glResetHistogramEXT_Idx,
		glResetMinmax_Idx,
		glResetMinmaxEXT_Idx,
		glRotated_Idx,
		glRotatef_Idx,
		glRotatex_Idx,
		glRotatexOES_Idx,
		glSampleCoverage_Idx,
		glSampleCoverageARB_Idx,
		glSampleCoverageOES_Idx,
		glSampleMapATI_Idx,
		glSampleMaskEXT_Idx,
		glSampleMaskIndexedNV_Idx,
		glSampleMaskSGIS_Idx,
		glSampleMaski_Idx,
		glSamplePatternEXT_Idx,
		glSamplePatternSGIS_Idx,
		glSamplerParameterIiv_Idx,
		glSamplerParameterIivEXT_Idx,
		glSamplerParameterIuiv_Idx,
		glSamplerParameterIuivEXT_Idx,
		glSamplerParameterf_Idx,
		glSamplerParameterfv_Idx,
		glSamplerParameteri_Idx,
		glSamplerParameteriv_Idx,
		glScaled_Idx,
		glScalef_Idx,
		glScalex_Idx,
		glScalexOES_Idx,
		glScissor_Idx,
		glScissorArrayv_Idx,
		glScissorIndexed_Idx,
		glScissorIndexedv_Idx,
		glSecondaryColor3b_Idx,
		glSecondaryColor3bEXT_Idx,
		glSecondaryColor3bv_Idx,
		glSecondaryColor3bvEXT_Idx,
		glSecondaryColor3d_Idx,
		glSecondaryColor3dEXT_Idx,
		glSecondaryColor3dv_Idx,
		glSecondaryColor3dvEXT_Idx,
		glSecondaryColor3f_Idx,
		glSecondaryColor3fEXT_Idx,
		glSecondaryColor3fv_Idx,
		glSecondaryColor3fvEXT_Idx,
		glSecondaryColor3hNV_Idx,
		glSecondaryColor3hvNV_Idx,
		glSecondaryColor3i_Idx,
		glSecondaryColor3iEXT_Idx,
		glSecondaryColor3iv_Idx,
		glSecondaryColor3ivEXT_Idx,
		glSecondaryColor3s_Idx,
		glSecondaryColor3sEXT_Idx,
		glSecondaryColor3sv_Idx,
		glSecondaryColor3svEXT_Idx,
		glSecondaryColor3ub_Idx,
		glSecondaryColor3ubEXT_Idx,
		glSecondaryColor3ubv_Idx,
		glSecondaryColor3ubvEXT_Idx,
		glSecondaryColor3ui_Idx,
		glSecondaryColor3uiEXT_Idx,
		glSecondaryColor3uiv_Idx,
		glSecondaryColor3uivEXT_Idx,
		glSecondaryColor3us_Idx,
		glSecondaryColor3usEXT_Idx,
		glSecondaryColor3usv_Idx,
		glSecondaryColor3usvEXT_Idx,
		glSecondaryColorFormatNV_Idx,
		glSecondaryColorP3ui_Idx,
		glSecondaryColorP3uiv_Idx,
		glSecondaryColorPointer_Idx,
		glSecondaryColorPointerEXT_Idx,
		glSecondaryColorPointerListIBM_Idx,
		glSelectBuffer_Idx,
		glSelectPerfMonitorCountersAMD_Idx,
		glSeparableFilter2D_Idx,
		glSeparableFilter2DEXT_Idx,
		glSetFenceAPPLE_Idx,
		glSetFenceNV_Idx,
		glSetFragmentShaderConstantATI_Idx,
		glSetInvariantEXT_Idx,
		glSetLocalConstantEXT_Idx,
		glSetMultisamplefvAMD_Idx,
		glShadeModel_Idx,
		glShaderBinary_Idx,
		glShaderOp1EXT_Idx,
		glShaderOp2EXT_Idx,
		glShaderOp3EXT_Idx,
		glShaderSource_Idx,
		glShaderSourceARB_Idx,
		glShaderStorageBlockBinding_Idx,
		glSharpenTexFuncSGIS_Idx,
		glSpriteParameterfSGIX_Idx,
		glSpriteParameterfvSGIX_Idx,
		glSpriteParameteriSGIX_Idx,
		glSpriteParameterivSGIX_Idx,
		glStartTilingQCOM_Idx,
		glStencilClearTagEXT_Idx,
		glStencilFillPathInstancedNV_Idx,
		glStencilFillPathNV_Idx,
		glStencilFunc_Idx,
		glStencilFuncSeparate_Idx,
		glStencilFuncSeparateATI_Idx,
		glStencilMask_Idx,
		glStencilMaskSeparate_Idx,
		glStencilOp_Idx,
		glStencilOpSeparate_Idx,
		glStencilOpSeparateATI_Idx,
		glStencilOpValueAMD_Idx,
		glStencilStrokePathInstancedNV_Idx,
		glStencilStrokePathNV_Idx,
		glStopInstrumentsSGIX_Idx,
		glStringMarkerGREMEDY_Idx,
		glSwizzleEXT_Idx,
		glSyncTextureINTEL_Idx,
		glTangent3bEXT_Idx,
		glTangent3bvEXT_Idx,
		glTangent3dEXT_Idx,
		glTangent3dvEXT_Idx,
		glTangent3fEXT_Idx,
		glTangent3fvEXT_Idx,
		glTangent3iEXT_Idx,
		glTangent3ivEXT_Idx,
		glTangent3sEXT_Idx,
		glTangent3svEXT_Idx,
		glTangentPointerEXT_Idx,
		glTbufferMask3DFX_Idx,
		glTessellationFactorAMD_Idx,
		glTessellationModeAMD_Idx,
		glTestFenceAPPLE_Idx,
		glTestFenceNV_Idx,
		glTestObjectAPPLE_Idx,
		glTexBuffer_Idx,
		glTexBufferARB_Idx,
		glTexBufferEXT_Idx,
		glTexBufferRange_Idx,
		glTexBufferRangeEXT_Idx,
		glTexBumpParameterfvATI_Idx,
		glTexBumpParameterivATI_Idx,
		glTexCoord1bOES_Idx,
		glTexCoord1bvOES_Idx,
		glTexCoord1d_Idx,
		glTexCoord1dv_Idx,
		glTexCoord1f_Idx,
		glTexCoord1fv_Idx,
		glTexCoord1hNV_Idx,
		glTexCoord1hvNV_Idx,
		glTexCoord1i_Idx,
		glTexCoord1iv_Idx,
		glTexCoord1s_Idx,
		glTexCoord1sv_Idx,
		glTexCoord1xOES_Idx,
		glTexCoord1xvOES_Idx,
		glTexCoord2bOES_Idx,
		glTexCoord2bvOES_Idx,
		glTexCoord2d_Idx,
		glTexCoord2dv_Idx,
		glTexCoord2f_Idx,
		glTexCoord2fColor3fVertex3fSUN_Idx,
		glTexCoord2fColor3fVertex3fvSUN_Idx,
		glTexCoord2fColor4fNormal3fVertex3fSUN_Idx,
		glTexCoord2fColor4fNormal3fVertex3fvSUN_Idx,
		glTexCoord2fColor4ubVertex3fSUN_Idx,
		glTexCoord2fColor4ubVertex3fvSUN_Idx,
		glTexCoord2fNormal3fVertex3fSUN_Idx,
		glTexCoord2fNormal3fVertex3fvSUN_Idx,
		glTexCoord2fVertex3fSUN_Idx,
		glTexCoord2fVertex3fvSUN_Idx,
		glTexCoord2fv_Idx,
		glTexCoord2hNV_Idx,
		glTexCoord2hvNV_Idx,
		glTexCoord2i_Idx,
		glTexCoord2iv_Idx,
		glTexCoord2s_Idx,
		glTexCoord2sv_Idx,
		glTexCoord2xOES_Idx,
		glTexCoord2xvOES_Idx,
		glTexCoord3bOES_Idx,
		glTexCoord3bvOES_Idx,
		glTexCoord3d_Idx,
		glTexCoord3dv_Idx,
		glTexCoord3f_Idx,
		glTexCoord3fv_Idx,
		glTexCoord3hNV_Idx,
		glTexCoord3hvNV_Idx,
		glTexCoord3i_Idx,
		glTexCoord3iv_Idx,
		glTexCoord3s_Idx,
		glTexCoord3sv_Idx,
		glTexCoord3xOES_Idx,
		glTexCoord3xvOES_Idx,
		glTexCoord4bOES_Idx,
		glTexCoord4bvOES_Idx,
		glTexCoord4d_Idx,
		glTexCoord4dv_Idx,
		glTexCoord4f_Idx,
		glTexCoord4fColor4fNormal3fVertex4fSUN_Idx,
		glTexCoord4fColor4fNormal3fVertex4fvSUN_Idx,
		glTexCoord4fVertex4fSUN_Idx,
		glTexCoord4fVertex4fvSUN_Idx,
		glTexCoord4fv_Idx,
		glTexCoord4hNV_Idx,
		glTexCoord4hvNV_Idx,
		glTexCoord4i_Idx,
		glTexCoord4iv_Idx,
		glTexCoord4s_Idx,
		glTexCoord4sv_Idx,
		glTexCoord4xOES_Idx,
		glTexCoord4xvOES_Idx,
		glTexCoordFormatNV_Idx,
		glTexCoordP1ui_Idx,
		glTexCoordP1uiv_Idx,
		glTexCoordP2ui_Idx,
		glTexCoordP2uiv_Idx,
		glTexCoordP3ui_Idx,
		glTexCoordP3uiv_Idx,
		glTexCoordP4ui_Idx,
		glTexCoordP4uiv_Idx,
		glTexCoordPointer_Idx,
		glTexCoordPointerEXT_Idx,
		glTexCoordPointerListIBM_Idx,
		glTexCoordPointervINTEL_Idx,
		glTexEnvf_Idx,
		glTexEnvfv_Idx,
		glTexEnvi_Idx,
		glTexEnviv_Idx,
		glTexEnvx_Idx,
		glTexEnvxOES_Idx,
		glTexEnvxv_Idx,
		glTexEnvxvOES_Idx,
		glTexFilterFuncSGIS_Idx,
		glTexGend_Idx,
		glTexGendv_Idx,
		glTexGenf_Idx,
		glTexGenfOES_Idx,
		glTexGenfv_Idx,
		glTexGenfvOES_Idx,
		glTexGeni_Idx,
		glTexGeniOES_Idx,
		glTexGeniv_Idx,
		glTexGenivOES_Idx,
		glTexGenxOES_Idx,
		glTexGenxvOES_Idx,
		glTexImage1D_Idx,
		glTexImage2D_Idx,
		glTexImage2DMultisample_Idx,
		glTexImage2DMultisampleCoverageNV_Idx,
		glTexImage3D_Idx,
		glTexImage3DEXT_Idx,
		glTexImage3DMultisample_Idx,
		glTexImage3DMultisampleCoverageNV_Idx,
		glTexImage3DOES_Idx,
		glTexImage4DSGIS_Idx,
		glTexPageCommitmentARB_Idx,
		glTexParameterIiv_Idx,
		glTexParameterIivEXT_Idx,
		glTexParameterIuiv_Idx,
		glTexParameterIuivEXT_Idx,
		glTexParameterf_Idx,
		glTexParameterfv_Idx,
		glTexParameteri_Idx,
		glTexParameteriv_Idx,
		glTexParameterx_Idx,
		glTexParameterxOES_Idx,
		glTexParameterxv_Idx,
		glTexParameterxvOES_Idx,
		glTexRenderbufferNV_Idx,
		glTexStorage1D_Idx,
		glTexStorage1DEXT_Idx,
		glTexStorage2D_Idx,
		glTexStorage2DEXT_Idx,
		glTexStorage2DMultisample_Idx,
		glTexStorage3D_Idx,
		glTexStorage3DEXT_Idx,
		glTexStorage3DMultisample_Idx,
		glTexStorage3DMultisampleOES_Idx,
		glTexStorageSparseAMD_Idx,
		glTexSubImage1D_Idx,
		glTexSubImage1DEXT_Idx,
		glTexSubImage2D_Idx,
		glTexSubImage2DEXT_Idx,
		glTexSubImage3D_Idx,
		glTexSubImage3DEXT_Idx,
		glTexSubImage3DOES_Idx,
		glTexSubImage4DSGIS_Idx,
		glTextureBufferEXT_Idx,
		glTextureBufferRangeEXT_Idx,
		glTextureColorMaskSGIS_Idx,
		glTextureImage1DEXT_Idx,
		glTextureImage2DEXT_Idx,
		glTextureImage2DMultisampleCoverageNV_Idx,
		glTextureImage2DMultisampleNV_Idx,
		glTextureImage3DEXT_Idx,
		glTextureImage3DMultisampleCoverageNV_Idx,
		glTextureImage3DMultisampleNV_Idx,
		glTextureLightEXT_Idx,
		glTextureMaterialEXT_Idx,
		glTextureNormalEXT_Idx,
		glTexturePageCommitmentEXT_Idx,
		glTextureParameterIivEXT_Idx,
		glTextureParameterIuivEXT_Idx,
		glTextureParameterfEXT_Idx,
		glTextureParameterfvEXT_Idx,
		glTextureParameteriEXT_Idx,
		glTextureParameterivEXT_Idx,
		glTextureRangeAPPLE_Idx,
		glTextureRenderbufferEXT_Idx,
		glTextureStorage1DEXT_Idx,
		glTextureStorage2DEXT_Idx,
		glTextureStorage2DMultisampleEXT_Idx,
		glTextureStorage3DEXT_Idx,
		glTextureStorage3DMultisampleEXT_Idx,
		glTextureStorageSparseAMD_Idx,
		glTextureSubImage1DEXT_Idx,
		glTextureSubImage2DEXT_Idx,
		glTextureSubImage3DEXT_Idx,
		glTextureView_Idx,
		glTextureViewEXT_Idx,
		glTrackMatrixNV_Idx,
		glTransformFeedbackAttribsNV_Idx,
		glTransformFeedbackStreamAttribsNV_Idx,
		glTransformFeedbackVaryings_Idx,
		glTransformFeedbackVaryingsEXT_Idx,
		glTransformFeedbackVaryingsNV_Idx,
		glTransformPathNV_Idx,
		glTranslated_Idx,
		glTranslatef_Idx,
		glTranslatex_Idx,
		glTranslatexOES_Idx,
		glUniform1d_Idx,
		glUniform1dv_Idx,
		glUniform1f_Idx,
		glUniform1fARB_Idx,
		glUniform1fv_Idx,
		glUniform1fvARB_Idx,
		glUniform1i_Idx,
		glUniform1i64NV_Idx,
		glUniform1i64vNV_Idx,
		glUniform1iARB_Idx,
		glUniform1iv_Idx,
		glUniform1ivARB_Idx,
		glUniform1ui_Idx,
		glUniform1ui64NV_Idx,
		glUniform1ui64vNV_Idx,
		glUniform1uiEXT_Idx,
		glUniform1uiv_Idx,
		glUniform1uivEXT_Idx,
		glUniform2d_Idx,
		glUniform2dv_Idx,
		glUniform2f_Idx,
		glUniform2fARB_Idx,
		glUniform2fv_Idx,
		glUniform2fvARB_Idx,
		glUniform2i_Idx,
		glUniform2i64NV_Idx,
		glUniform2i64vNV_Idx,
		glUniform2iARB_Idx,
		glUniform2iv_Idx,
		glUniform2ivARB_Idx,
		glUniform2ui_Idx,
		glUniform2ui64NV_Idx,
		glUniform2ui64vNV_Idx,
		glUniform2uiEXT_Idx,
		glUniform2uiv_Idx,
		glUniform2uivEXT_Idx,
		glUniform3d_Idx,
		glUniform3dv_Idx,
		glUniform3f_Idx,
		glUniform3fARB_Idx,
		glUniform3fv_Idx,
		glUniform3fvARB_Idx,
		glUniform3i_Idx,
		glUniform3i64NV_Idx,
		glUniform3i64vNV_Idx,
		glUniform3iARB_Idx,
		glUniform3iv_Idx,
		glUniform3ivARB_Idx,
		glUniform3ui_Idx,
		glUniform3ui64NV_Idx,
		glUniform3ui64vNV_Idx,
		glUniform3uiEXT_Idx,
		glUniform3uiv_Idx,
		glUniform3uivEXT_Idx,
		glUniform4d_Idx,
		glUniform4dv_Idx,
		glUniform4f_Idx,
		glUniform4fARB_Idx,
		glUniform4fv_Idx,
		glUniform4fvARB_Idx,
		glUniform4i_Idx,
		glUniform4i64NV_Idx,
		glUniform4i64vNV_Idx,
		glUniform4iARB_Idx,
		glUniform4iv_Idx,
		glUniform4ivARB_Idx,
		glUniform4ui_Idx,
		glUniform4ui64NV_Idx,
		glUniform4ui64vNV_Idx,
		glUniform4uiEXT_Idx,
		glUniform4uiv_Idx,
		glUniform4uivEXT_Idx,
		glUniformBlockBinding_Idx,
		glUniformBufferEXT_Idx,
		glUniformHandleui64ARB_Idx,
		glUniformHandleui64NV_Idx,
		glUniformHandleui64vARB_Idx,
		glUniformHandleui64vNV_Idx,
		glUniformMatrix2dv_Idx,
		glUniformMatrix2fv_Idx,
		glUniformMatrix2fvARB_Idx,
		glUniformMatrix2x3dv_Idx,
		glUniformMatrix2x3fv_Idx,
		glUniformMatrix2x3fvNV_Idx,
		glUniformMatrix2x4dv_Idx,
		glUniformMatrix2x4fv_Idx,
		glUniformMatrix2x4fvNV_Idx,
		glUniformMatrix3dv_Idx,
		glUniformMatrix3fv_Idx,
		glUniformMatrix3fvARB_Idx,
		glUniformMatrix3x2dv_Idx,
		glUniformMatrix3x2fv_Idx,
		glUniformMatrix3x2fvNV_Idx,
		glUniformMatrix3x4dv_Idx,
		glUniformMatrix3x4fv_Idx,
		glUniformMatrix3x4fvNV_Idx,
		glUniformMatrix4dv_Idx,
		glUniformMatrix4fv_Idx,
		glUniformMatrix4fvARB_Idx,
		glUniformMatrix4x2dv_Idx,
		glUniformMatrix4x2fv_Idx,
		glUniformMatrix4x2fvNV_Idx,
		glUniformMatrix4x3dv_Idx,
		glUniformMatrix4x3fv_Idx,
		glUniformMatrix4x3fvNV_Idx,
		glUniformSubroutinesuiv_Idx,
		glUniformui64NV_Idx,
		glUniformui64vNV_Idx,
		glUnmapBuffer_Idx,
		glUnmapBufferARB_Idx,
		glUnmapBufferOES_Idx,
		glUnmapNamedBufferEXT_Idx,
		glUnmapObjectBufferATI_Idx,
		glUnmapTexture2DINTEL_Idx,
		glUpdateObjectBufferATI_Idx,
		glUseProgram_Idx,
		glUseProgramObjectARB_Idx,
		glUseProgramStages_Idx,
		glUseProgramStagesEXT_Idx,
		glUseShaderProgramEXT_Idx,
		glVDPAUGetSurfaceivNV_Idx,
		glVDPAUInitNV_Idx,
		glVDPAUIsSurfaceNV_Idx,
		glVDPAUMapSurfacesNV_Idx,
		glVDPAURegisterOutputSurfaceNV_Idx,
		glVDPAURegisterVideoSurfaceNV_Idx,
		glVDPAUSurfaceAccessNV_Idx,
		glVDPAUUnmapSurfacesNV_Idx,
		glVDPAUUnregisterSurfaceNV_Idx,
		glValidateProgram_Idx,
		glValidateProgramARB_Idx,
		glValidateProgramPipeline_Idx,
		glValidateProgramPipelineEXT_Idx,
		glVariantArrayObjectATI_Idx,
		glVariantPointerEXT_Idx,
		glVariantbvEXT_Idx,
		glVariantdvEXT_Idx,
		glVariantfvEXT_Idx,
		glVariantivEXT_Idx,
		glVariantsvEXT_Idx,
		glVariantubvEXT_Idx,
		glVariantuivEXT_Idx,
		glVariantusvEXT_Idx,
		glVertex2bOES_Idx,
		glVertex2bvOES_Idx,
		glVertex2d_Idx,
		glVertex2dv_Idx,
		glVertex2f_Idx,
		glVertex2fv_Idx,
		glVertex2hNV_Idx,
		glVertex2hvNV_Idx,
		glVertex2i_Idx,
		glVertex2iv_Idx,
		glVertex2s_Idx,
		glVertex2sv_Idx,
		glVertex2xOES_Idx,
		glVertex2xvOES_Idx,
		glVertex3bOES_Idx,
		glVertex3bvOES_Idx,
		glVertex3d_Idx,
		glVertex3dv_Idx,
		glVertex3f_Idx,
		glVertex3fv_Idx,
		glVertex3hNV_Idx,
		glVertex3hvNV_Idx,
		glVertex3i_Idx,
		glVertex3iv_Idx,
		glVertex3s_Idx,
		glVertex3sv_Idx,
		glVertex3xOES_Idx,
		glVertex3xvOES_Idx,
		glVertex4bOES_Idx,
		glVertex4bvOES_Idx,
		glVertex4d_Idx,
		glVertex4dv_Idx,
		glVertex4f_Idx,
		glVertex4fv_Idx,
		glVertex4hNV_Idx,
		glVertex4hvNV_Idx,
		glVertex4i_Idx,
		glVertex4iv_Idx,
		glVertex4s_Idx,
		glVertex4sv_Idx,
		glVertex4xOES_Idx,
		glVertex4xvOES_Idx,
		glVertexArrayBindVertexBufferEXT_Idx,
		glVertexArrayColorOffsetEXT_Idx,
		glVertexArrayEdgeFlagOffsetEXT_Idx,
		glVertexArrayFogCoordOffsetEXT_Idx,
		glVertexArrayIndexOffsetEXT_Idx,
		glVertexArrayMultiTexCoordOffsetEXT_Idx,
		glVertexArrayNormalOffsetEXT_Idx,
		glVertexArrayParameteriAPPLE_Idx,
		glVertexArrayRangeAPPLE_Idx,
		glVertexArrayRangeNV_Idx,
		glVertexArraySecondaryColorOffsetEXT_Idx,
		glVertexArrayTexCoordOffsetEXT_Idx,
		glVertexArrayVertexAttribBindingEXT_Idx,
		glVertexArrayVertexAttribDivisorEXT_Idx,
		glVertexArrayVertexAttribFormatEXT_Idx,
		glVertexArrayVertexAttribIFormatEXT_Idx,
		glVertexArrayVertexAttribIOffsetEXT_Idx,
		glVertexArrayVertexAttribLFormatEXT_Idx,
		glVertexArrayVertexAttribLOffsetEXT_Idx,
		glVertexArrayVertexAttribOffsetEXT_Idx,
		glVertexArrayVertexBindingDivisorEXT_Idx,
		glVertexArrayVertexOffsetEXT_Idx,
		glVertexAttrib1d_Idx,
		glVertexAttrib1dARB_Idx,
		glVertexAttrib1dNV_Idx,
		glVertexAttrib1dv_Idx,
		glVertexAttrib1dvARB_Idx,
		glVertexAttrib1dvNV_Idx,
		glVertexAttrib1f_Idx,
		glVertexAttrib1fARB_Idx,
		glVertexAttrib1fNV_Idx,
		glVertexAttrib1fv_Idx,
		glVertexAttrib1fvARB_Idx,
		glVertexAttrib1fvNV_Idx,
		glVertexAttrib1hNV_Idx,
		glVertexAttrib1hvNV_Idx,
		glVertexAttrib1s_Idx,
		glVertexAttrib1sARB_Idx,
		glVertexAttrib1sNV_Idx,
		glVertexAttrib1sv_Idx,
		glVertexAttrib1svARB_Idx,
		glVertexAttrib1svNV_Idx,
		glVertexAttrib2d_Idx,
		glVertexAttrib2dARB_Idx,
		glVertexAttrib2dNV_Idx,
		glVertexAttrib2dv_Idx,
		glVertexAttrib2dvARB_Idx,
		glVertexAttrib2dvNV_Idx,
		glVertexAttrib2f_Idx,
		glVertexAttrib2fARB_Idx,
		glVertexAttrib2fNV_Idx,
		glVertexAttrib2fv_Idx,
		glVertexAttrib2fvARB_Idx,
		glVertexAttrib2fvNV_Idx,
		glVertexAttrib2hNV_Idx,
		glVertexAttrib2hvNV_Idx,
		glVertexAttrib2s_Idx,
		glVertexAttrib2sARB_Idx,
		glVertexAttrib2sNV_Idx,
		glVertexAttrib2sv_Idx,
		glVertexAttrib2svARB_Idx,
		glVertexAttrib2svNV_Idx,
		glVertexAttrib3d_Idx,
		glVertexAttrib3dARB_Idx,
		glVertexAttrib3dNV_Idx,
		glVertexAttrib3dv_Idx,
		glVertexAttrib3dvARB_Idx,
		glVertexAttrib3dvNV_Idx,
		glVertexAttrib3f_Idx,
		glVertexAttrib3fARB_Idx,
		glVertexAttrib3fNV_Idx,
		glVertexAttrib3fv_Idx,
		glVertexAttrib3fvARB_Idx,
		glVertexAttrib3fvNV_Idx,
		glVertexAttrib3hNV_Idx,
		glVertexAttrib3hvNV_Idx,
		glVertexAttrib3s_Idx,
		glVertexAttrib3sARB_Idx,
		glVertexAttrib3sNV_Idx,
		glVertexAttrib3sv_Idx,
		glVertexAttrib3svARB_Idx,
		glVertexAttrib3svNV_Idx,
		glVertexAttrib4Nbv_Idx,
		glVertexAttrib4NbvARB_Idx,
		glVertexAttrib4Niv_Idx,
		glVertexAttrib4NivARB_Idx,
		glVertexAttrib4Nsv_Idx,
		glVertexAttrib4NsvARB_Idx,
		glVertexAttrib4Nub_Idx,
		glVertexAttrib4NubARB_Idx,
		glVertexAttrib4Nubv_Idx,
		glVertexAttrib4NubvARB_Idx,
		glVertexAttrib4Nuiv_Idx,
		glVertexAttrib4NuivARB_Idx,
		glVertexAttrib4Nusv_Idx,
		glVertexAttrib4NusvARB_Idx,
		glVertexAttrib4bv_Idx,
		glVertexAttrib4bvARB_Idx,
		glVertexAttrib4d_Idx,
		glVertexAttrib4dARB_Idx,
		glVertexAttrib4dNV_Idx,
		glVertexAttrib4dv_Idx,
		glVertexAttrib4dvARB_Idx,
		glVertexAttrib4dvNV_Idx,
		glVertexAttrib4f_Idx,
		glVertexAttrib4fARB_Idx,
		glVertexAttrib4fNV_Idx,
		glVertexAttrib4fv_Idx,
		glVertexAttrib4fvARB_Idx,
		glVertexAttrib4fvNV_Idx,
		glVertexAttrib4hNV_Idx,
		glVertexAttrib4hvNV_Idx,
		glVertexAttrib4iv_Idx,
		glVertexAttrib4ivARB_Idx,
		glVertexAttrib4s_Idx,
		glVertexAttrib4sARB_Idx,
		glVertexAttrib4sNV_Idx,
		glVertexAttrib4sv_Idx,
		glVertexAttrib4svARB_Idx,
		glVertexAttrib4svNV_Idx,
		glVertexAttrib4ubNV_Idx,
		glVertexAttrib4ubv_Idx,
		glVertexAttrib4ubvARB_Idx,
		glVertexAttrib4ubvNV_Idx,
		glVertexAttrib4uiv_Idx,
		glVertexAttrib4uivARB_Idx,
		glVertexAttrib4usv_Idx,
		glVertexAttrib4usvARB_Idx,
		glVertexAttribArrayObjectATI_Idx,
		glVertexAttribBinding_Idx,
		glVertexAttribDivisor_Idx,
		glVertexAttribDivisorANGLE_Idx,
		glVertexAttribDivisorARB_Idx,
		glVertexAttribDivisorEXT_Idx,
		glVertexAttribDivisorNV_Idx,
		glVertexAttribFormat_Idx,
		glVertexAttribFormatNV_Idx,
		glVertexAttribI1i_Idx,
		glVertexAttribI1iEXT_Idx,
		glVertexAttribI1iv_Idx,
		glVertexAttribI1ivEXT_Idx,
		glVertexAttribI1ui_Idx,
		glVertexAttribI1uiEXT_Idx,
		glVertexAttribI1uiv_Idx,
		glVertexAttribI1uivEXT_Idx,
		glVertexAttribI2i_Idx,
		glVertexAttribI2iEXT_Idx,
		glVertexAttribI2iv_Idx,
		glVertexAttribI2ivEXT_Idx,
		glVertexAttribI2ui_Idx,
		glVertexAttribI2uiEXT_Idx,
		glVertexAttribI2uiv_Idx,
		glVertexAttribI2uivEXT_Idx,
		glVertexAttribI3i_Idx,
		glVertexAttribI3iEXT_Idx,
		glVertexAttribI3iv_Idx,
		glVertexAttribI3ivEXT_Idx,
		glVertexAttribI3ui_Idx,
		glVertexAttribI3uiEXT_Idx,
		glVertexAttribI3uiv_Idx,
		glVertexAttribI3uivEXT_Idx,
		glVertexAttribI4bv_Idx,
		glVertexAttribI4bvEXT_Idx,
		glVertexAttribI4i_Idx,
		glVertexAttribI4iEXT_Idx,
		glVertexAttribI4iv_Idx,
		glVertexAttribI4ivEXT_Idx,
		glVertexAttribI4sv_Idx,
		glVertexAttribI4svEXT_Idx,
		glVertexAttribI4ubv_Idx,
		glVertexAttribI4ubvEXT_Idx,
		glVertexAttribI4ui_Idx,
		glVertexAttribI4uiEXT_Idx,
		glVertexAttribI4uiv_Idx,
		glVertexAttribI4uivEXT_Idx,
		glVertexAttribI4usv_Idx,
		glVertexAttribI4usvEXT_Idx,
		glVertexAttribIFormat_Idx,
		glVertexAttribIFormatNV_Idx,
		glVertexAttribIPointer_Idx,
		glVertexAttribIPointerEXT_Idx,
		glVertexAttribL1d_Idx,
		glVertexAttribL1dEXT_Idx,
		glVertexAttribL1dv_Idx,
		glVertexAttribL1dvEXT_Idx,
		glVertexAttribL1i64NV_Idx,
		glVertexAttribL1i64vNV_Idx,
		glVertexAttribL1ui64ARB_Idx,
		glVertexAttribL1ui64NV_Idx,
		glVertexAttribL1ui64vARB_Idx,
		glVertexAttribL1ui64vNV_Idx,
		glVertexAttribL2d_Idx,
		glVertexAttribL2dEXT_Idx,
		glVertexAttribL2dv_Idx,
		glVertexAttribL2dvEXT_Idx,
		glVertexAttribL2i64NV_Idx,
		glVertexAttribL2i64vNV_Idx,
		glVertexAttribL2ui64NV_Idx,
		glVertexAttribL2ui64vNV_Idx,
		glVertexAttribL3d_Idx,
		glVertexAttribL3dEXT_Idx,
		glVertexAttribL3dv_Idx,
		glVertexAttribL3dvEXT_Idx,
		glVertexAttribL3i64NV_Idx,
		glVertexAttribL3i64vNV_Idx,
		glVertexAttribL3ui64NV_Idx,
		glVertexAttribL3ui64vNV_Idx,
		glVertexAttribL4d_Idx,
		glVertexAttribL4dEXT_Idx,
		glVertexAttribL4dv_Idx,
		glVertexAttribL4dvEXT_Idx,
		glVertexAttribL4i64NV_Idx,
		glVertexAttribL4i64vNV_Idx,
		glVertexAttribL4ui64NV_Idx,
		glVertexAttribL4ui64vNV_Idx,
		glVertexAttribLFormat_Idx,
		glVertexAttribLFormatNV_Idx,
		glVertexAttribLPointer_Idx,
		glVertexAttribLPointerEXT_Idx,
		glVertexAttribP1ui_Idx,
		glVertexAttribP1uiv_Idx,
		glVertexAttribP2ui_Idx,
		glVertexAttribP2uiv_Idx,
		glVertexAttribP3ui_Idx,
		glVertexAttribP3uiv_Idx,
		glVertexAttribP4ui_Idx,
		glVertexAttribP4uiv_Idx,
		glVertexAttribParameteriAMD_Idx,
		glVertexAttribPointer_Idx,
		glVertexAttribPointerARB_Idx,
		glVertexAttribPointerNV_Idx,
		glVertexAttribs1dvNV_Idx,
		glVertexAttribs1fvNV_Idx,
		glVertexAttribs1hvNV_Idx,
		glVertexAttribs1svNV_Idx,
		glVertexAttribs2dvNV_Idx,
		glVertexAttribs2fvNV_Idx,
		glVertexAttribs2hvNV_Idx,
		glVertexAttribs2svNV_Idx,
		glVertexAttribs3dvNV_Idx,
		glVertexAttribs3fvNV_Idx,
		glVertexAttribs3hvNV_Idx,
		glVertexAttribs3svNV_Idx,
		glVertexAttribs4dvNV_Idx,
		glVertexAttribs4fvNV_Idx,
		glVertexAttribs4hvNV_Idx,
		glVertexAttribs4svNV_Idx,
		glVertexAttribs4ubvNV_Idx,
		glVertexBindingDivisor_Idx,
		glVertexBlendARB_Idx,
		glVertexBlendEnvfATI_Idx,
		glVertexBlendEnviATI_Idx,
		glVertexFormatNV_Idx,
		glVertexP2ui_Idx,
		glVertexP2uiv_Idx,
		glVertexP3ui_Idx,
		glVertexP3uiv_Idx,
		glVertexP4ui_Idx,
		glVertexP4uiv_Idx,
		glVertexPointer_Idx,
		glVertexPointerEXT_Idx,
		glVertexPointerListIBM_Idx,
		glVertexPointervINTEL_Idx,
		glVertexStream1dATI_Idx,
		glVertexStream1dvATI_Idx,
		glVertexStream1fATI_Idx,
		glVertexStream1fvATI_Idx,
		glVertexStream1iATI_Idx,
		glVertexStream1ivATI_Idx,
		glVertexStream1sATI_Idx,
		glVertexStream1svATI_Idx,
		glVertexStream2dATI_Idx,
		glVertexStream2dvATI_Idx,
		glVertexStream2fATI_Idx,
		glVertexStream2fvATI_Idx,
		glVertexStream2iATI_Idx,
		glVertexStream2ivATI_Idx,
		glVertexStream2sATI_Idx,
		glVertexStream2svATI_Idx,
		glVertexStream3dATI_Idx,
		glVertexStream3dvATI_Idx,
		glVertexStream3fATI_Idx,
		glVertexStream3fvATI_Idx,
		glVertexStream3iATI_Idx,
		glVertexStream3ivATI_Idx,
		glVertexStream3sATI_Idx,
		glVertexStream3svATI_Idx,
		glVertexStream4dATI_Idx,
		glVertexStream4dvATI_Idx,
		glVertexStream4fATI_Idx,
		glVertexStream4fvATI_Idx,
		glVertexStream4iATI_Idx,
		glVertexStream4ivATI_Idx,
		glVertexStream4sATI_Idx,
		glVertexStream4svATI_Idx,
		glVertexWeightPointerEXT_Idx,
		glVertexWeightfEXT_Idx,
		glVertexWeightfvEXT_Idx,
		glVertexWeighthNV_Idx,
		glVertexWeighthvNV_Idx,
		glVideoCaptureNV_Idx,
		glVideoCaptureStreamParameterdvNV_Idx,
		glVideoCaptureStreamParameterfvNV_Idx,
		glVideoCaptureStreamParameterivNV_Idx,
		glViewport_Idx,
		glViewportArrayv_Idx,
		glViewportIndexedf_Idx,
		glViewportIndexedfv_Idx,
		glWaitSync_Idx,
		glWaitSyncAPPLE_Idx,
		glWeightPathsNV_Idx,
		glWeightPointerARB_Idx,
		glWeightPointerOES_Idx,
		glWeightbvARB_Idx,
		glWeightdvARB_Idx,
		glWeightfvARB_Idx,
		glWeightivARB_Idx,
		glWeightsvARB_Idx,
		glWeightubvARB_Idx,
		glWeightuivARB_Idx,
		glWeightusvARB_Idx,
		glWindowPos2d_Idx,
		glWindowPos2dARB_Idx,
		glWindowPos2dMESA_Idx,
		glWindowPos2dv_Idx,
		glWindowPos2dvARB_Idx,
		glWindowPos2dvMESA_Idx,
		glWindowPos2f_Idx,
		glWindowPos2fARB_Idx,
		glWindowPos2fMESA_Idx,
		glWindowPos2fv_Idx,
		glWindowPos2fvARB_Idx,
		glWindowPos2fvMESA_Idx,
		glWindowPos2i_Idx,
		glWindowPos2iARB_Idx,
		glWindowPos2iMESA_Idx,
		glWindowPos2iv_Idx,
		glWindowPos2ivARB_Idx,
		glWindowPos2ivMESA_Idx,
		glWindowPos2s_Idx,
		glWindowPos2sARB_Idx,
		glWindowPos2sMESA_Idx,
		glWindowPos2sv_Idx,
		glWindowPos2svARB_Idx,
		glWindowPos2svMESA_Idx,
		glWindowPos3d_Idx,
		glWindowPos3dARB_Idx,
		glWindowPos3dMESA_Idx,
		glWindowPos3dv_Idx,
		glWindowPos3dvARB_Idx,
		glWindowPos3dvMESA_Idx,
		glWindowPos3f_Idx,
		glWindowPos3fARB_Idx,
		glWindowPos3fMESA_Idx,
		glWindowPos3fv_Idx,
		glWindowPos3fvARB_Idx,
		glWindowPos3fvMESA_Idx,
		glWindowPos3i_Idx,
		glWindowPos3iARB_Idx,
		glWindowPos3iMESA_Idx,
		glWindowPos3iv_Idx,
		glWindowPos3ivARB_Idx,
		glWindowPos3ivMESA_Idx,
		glWindowPos3s_Idx,
		glWindowPos3sARB_Idx,
		glWindowPos3sMESA_Idx,
		glWindowPos3sv_Idx,
		glWindowPos3svARB_Idx,
		glWindowPos3svMESA_Idx,
		glWindowPos4dMESA_Idx,
		glWindowPos4dvMESA_Idx,
		glWindowPos4fMESA_Idx,
		glWindowPos4fvMESA_Idx,
		glWindowPos4iMESA_Idx,
		glWindowPos4ivMESA_Idx,
		glWindowPos4sMESA_Idx,
		glWindowPos4svMESA_Idx,
		glWriteMaskEXT_Idx,

};


#endif

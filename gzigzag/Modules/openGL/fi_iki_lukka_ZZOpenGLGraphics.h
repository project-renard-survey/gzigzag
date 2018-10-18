/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class fi_iki_lukka_ZZOpenGLGraphics */

#ifndef _Included_fi_iki_lukka_ZZOpenGLGraphics
#define _Included_fi_iki_lukka_ZZOpenGLGraphics
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     fi_iki_lukka_ZZOpenGLGraphics
 * Method:    openWindow
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_fi_iki_lukka_ZZOpenGLGraphics_openWindow
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     fi_iki_lukka_ZZOpenGLGraphics
 * Method:    drawLine
 * Signature: (IIII)V
 */
JNIEXPORT void JNICALL Java_fi_iki_lukka_ZZOpenGLGraphics_drawLine
  (JNIEnv *, jobject, jint, jint, jint, jint);

/*
 * Class:     fi_iki_lukka_ZZOpenGLGraphics
 * Method:    draw3DLine
 * Signature: (IIIIII)V
 */
JNIEXPORT void JNICALL Java_fi_iki_lukka_ZZOpenGLGraphics_draw3DLine
  (JNIEnv *, jobject, jint, jint, jint, jint, jint, jint);

/*
 * Class:     fi_iki_lukka_ZZOpenGLGraphics
 * Method:    drawRect
 * Signature: (IIII)V
 */
JNIEXPORT void JNICALL Java_fi_iki_lukka_ZZOpenGLGraphics_drawRect
  (JNIEnv *, jobject, jint, jint, jint, jint);

/*
 * Class:     fi_iki_lukka_ZZOpenGLGraphics
 * Method:    draw2DPoint
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_fi_iki_lukka_ZZOpenGLGraphics_draw2DPoint
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     fi_iki_lukka_ZZOpenGLGraphics
 * Method:    draw3DPoint
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_fi_iki_lukka_ZZOpenGLGraphics_draw3DPoint
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     fi_iki_lukka_ZZOpenGLGraphics
 * Method:    drawText
 * Signature: (IILjava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_fi_iki_lukka_ZZOpenGLGraphics_drawText
  (JNIEnv *, jobject, jint, jint, jstring, jint);

/*
 * Class:     fi_iki_lukka_ZZOpenGLGraphics
 * Method:    draw3DText
 * Signature: (IIILjava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_fi_iki_lukka_ZZOpenGLGraphics_draw3DText
  (JNIEnv *, jobject, jint, jint, jint, jstring, jint);

/*
 * Class:     fi_iki_lukka_ZZOpenGLGraphics
 * Method:    drawingColor
 * Signature: (DDDD)V
 */
JNIEXPORT void JNICALL Java_fi_iki_lukka_ZZOpenGLGraphics_drawingColor
  (JNIEnv *, jobject, jdouble, jdouble, jdouble, jdouble);

/*
 * Class:     fi_iki_lukka_ZZOpenGLGraphics
 * Method:    drawArrow
 * Signature: (IIIII)V
 */
JNIEXPORT void JNICALL Java_fi_iki_lukka_ZZOpenGLGraphics_drawArrow
  (JNIEnv *, jobject, jint, jint, jint, jint, jint);

/*
 * Class:     fi_iki_lukka_ZZOpenGLGraphics
 * Method:    draw3DArrow
 * Signature: (IIIIII)V
 */
JNIEXPORT void JNICALL Java_fi_iki_lukka_ZZOpenGLGraphics_draw3DArrow
  (JNIEnv *, jobject, jint, jint, jint, jint, jint, jint);

/*
 * Class:     fi_iki_lukka_ZZOpenGLGraphics
 * Method:    swapBuffers
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_fi_iki_lukka_ZZOpenGLGraphics_swapBuffers
  (JNIEnv *, jobject);

/*
 * Class:     fi_iki_lukka_ZZOpenGLGraphics
 * Method:    checkEvents
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_fi_iki_lukka_ZZOpenGLGraphics_checkEvents
  (JNIEnv *, jobject);

/*
 * Class:     fi_iki_lukka_ZZOpenGLGraphics
 * Method:    setCamera
 * Signature: (IIIIIIIII)V
 */
JNIEXPORT void JNICALL Java_fi_iki_lukka_ZZOpenGLGraphics_setCamera
  (JNIEnv *, jobject, jint, jint, jint, jint, jint, jint, jint, jint, jint);

#ifdef __cplusplus
}
#endif
#endif

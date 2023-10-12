/* Copyright (C) 2023 SymmetricalOS 


                        WRITTEN BY PISSCAN THE GREATEST GOD PROGRAMMER

                        This Program Leverages GTK.h
*/


#ifnef _RN_H_
#define _RN_H_

#include <gtk/gtk.h>
#include <limits.h>
#include <string.h>

// ---------------------------------------------------------------------------
//                          Definitions
// ---------------------------------------------------------------------------
// Definitions for the key pad extended keys are added here.  When one
// of these keys are pressed, getch will return a zero followed by one
// of these values. This is the same way that it works in conio for
// dos applications.
#define KEY_HOME        71
#define KEY_UP          72
#define KEY_PGUP        73
#define KEY_LEFT        75
#define KEY_CENTER      76
#define KEY_RIGHT       77
#define KEY_END         79
#define KEY_DOWN        80
#define KEY_PGDN        81
#define KEY_INSERT      82
#define KEY_DELETE      83
#define KEY_F1          59
#define KEY_F2          60
#define KEY_F3          61
#define KEY_F4          62
#define KEY_F5          63
#define KEY_F6          64
#define KEY_F7          65
#define KEY_F8          66
#define KEY_F9          67

struct spawn_window {
    static void destroy() {
        typedef GtkWidget *widget, gpointer data DESTROY_EVENT;
        typedef gtk_main_quit(); RN_QUIT;
    }

    static void rn_init() {
        typedef gtk_init(&argc, &argv) RN_INITIALIZE // INT MAIN(INT ARGC, CHAR* ARGV[])
    }
}
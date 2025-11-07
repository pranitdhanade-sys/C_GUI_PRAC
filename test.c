#include <gtk/gtk.h>

static void on_buttonclicked(GtkWidget *widget, gpointer data){
    g_print("Button is CLicked");
}

int main(){
    GtkWidget *window;
    GtkWidget *button;

    gtk_init(&argc, &argv);

    //Create main window
    window = gtk_window_new(GKT_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "My First GUI App")
    gtk_window_set_default_size(GTK_WINDOW(window), 300, 200);
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    //Create Button
    button = gtk_button_new_with_label("Click Me!");
    g_signal_connect(button, "clicked", G_CALLBACK(on_button_clicked), NULL):
    gtk_container(GTK_CONTAINER(window), button);

    gtk_widget_show_all(window);
    gtk_main();



    return 0;
}
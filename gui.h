void clear_child(GtkWidget* container);
void clear_container(int container_id);
void set_prompt(char *);
void show_ingame_buttons();
void hide_ingame_buttons();
char* get_image_path(int card);
void add_image(int container_id, int card);
void quit_game(GtkWindow *window);
void activate (GtkApplication *app, gpointer user_data);
/* ZoomButton.c generated by valac 0.40.23, the Vala compiler
 * generated from ZoomButton.vala, do not modify */



#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <stdlib.h>
#include <string.h>
#include <float.h>
#include <math.h>
#include <granite.h>


#define TRADE_SIM_WIDGETS_TYPE_ZOOM_BUTTON (trade_sim_widgets_zoom_button_get_type ())
#define TRADE_SIM_WIDGETS_ZOOM_BUTTON(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TRADE_SIM_WIDGETS_TYPE_ZOOM_BUTTON, TradeSimWidgetsZoomButton))
#define TRADE_SIM_WIDGETS_ZOOM_BUTTON_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TRADE_SIM_WIDGETS_TYPE_ZOOM_BUTTON, TradeSimWidgetsZoomButtonClass))
#define TRADE_SIM_WIDGETS_IS_ZOOM_BUTTON(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TRADE_SIM_WIDGETS_TYPE_ZOOM_BUTTON))
#define TRADE_SIM_WIDGETS_IS_ZOOM_BUTTON_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TRADE_SIM_WIDGETS_TYPE_ZOOM_BUTTON))
#define TRADE_SIM_WIDGETS_ZOOM_BUTTON_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TRADE_SIM_WIDGETS_TYPE_ZOOM_BUTTON, TradeSimWidgetsZoomButtonClass))

typedef struct _TradeSimWidgetsZoomButton TradeSimWidgetsZoomButton;
typedef struct _TradeSimWidgetsZoomButtonClass TradeSimWidgetsZoomButtonClass;
typedef struct _TradeSimWidgetsZoomButtonPrivate TradeSimWidgetsZoomButtonPrivate;

#define TRADE_SIM_TYPE_MAIN_WINDOW (trade_sim_main_window_get_type ())
#define TRADE_SIM_MAIN_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TRADE_SIM_TYPE_MAIN_WINDOW, TradeSimMainWindow))
#define TRADE_SIM_MAIN_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TRADE_SIM_TYPE_MAIN_WINDOW, TradeSimMainWindowClass))
#define TRADE_SIM_IS_MAIN_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TRADE_SIM_TYPE_MAIN_WINDOW))
#define TRADE_SIM_IS_MAIN_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TRADE_SIM_TYPE_MAIN_WINDOW))
#define TRADE_SIM_MAIN_WINDOW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TRADE_SIM_TYPE_MAIN_WINDOW, TradeSimMainWindowClass))

typedef struct _TradeSimMainWindow TradeSimMainWindow;
typedef struct _TradeSimMainWindowClass TradeSimMainWindowClass;
enum  {
	TRADE_SIM_WIDGETS_ZOOM_BUTTON_0_PROPERTY,
	TRADE_SIM_WIDGETS_ZOOM_BUTTON_MAIN_WINDOW_PROPERTY,
	TRADE_SIM_WIDGETS_ZOOM_BUTTON_NUM_PROPERTIES
};
static GParamSpec* trade_sim_widgets_zoom_button_properties[TRADE_SIM_WIDGETS_ZOOM_BUTTON_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))

struct _TradeSimWidgetsZoomButton {
	GtkGrid parent_instance;
	TradeSimWidgetsZoomButtonPrivate * priv;
	GtkButton* zoom_out_button;
	GtkButton* zoom_default_button;
	GtkButton* zoom_in_button;
};

struct _TradeSimWidgetsZoomButtonClass {
	GtkGridClass parent_class;
};

struct _TradeSimWidgetsZoomButtonPrivate {
	TradeSimMainWindow* _main_window;
	GtkLabel* label_btn;
};


static gpointer trade_sim_widgets_zoom_button_parent_class = NULL;

GType trade_sim_widgets_zoom_button_get_type (void) G_GNUC_CONST;
GType trade_sim_main_window_get_type (void) G_GNUC_CONST;
#define TRADE_SIM_WIDGETS_ZOOM_BUTTON_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), TRADE_SIM_WIDGETS_TYPE_ZOOM_BUTTON, TradeSimWidgetsZoomButtonPrivate))
TradeSimWidgetsZoomButton* trade_sim_widgets_zoom_button_new (TradeSimMainWindow* window);
TradeSimWidgetsZoomButton* trade_sim_widgets_zoom_button_construct (GType object_type,
                                                                    TradeSimMainWindow* window);
void trade_sim_widgets_zoom_button_zoom_out (TradeSimWidgetsZoomButton* self);
TradeSimMainWindow* trade_sim_widgets_zoom_button_get_main_window (TradeSimWidgetsZoomButton* self);
void trade_sim_main_window_change_zoom_level (TradeSimMainWindow* self,
                                              gdouble factor);
void trade_sim_widgets_zoom_button_zoom_in (TradeSimWidgetsZoomButton* self);
void trade_sim_widgets_zoom_button_zoom_reset (TradeSimWidgetsZoomButton* self);
static void trade_sim_widgets_zoom_button_set_main_window (TradeSimWidgetsZoomButton* self,
                                                    TradeSimMainWindow* value);
static GObject * trade_sim_widgets_zoom_button_constructor (GType type,
                                                     guint n_construct_properties,
                                                     GObjectConstructParam * construct_properties);
static void _trade_sim_widgets_zoom_button_zoom_out_gtk_button_clicked (GtkButton* _sender,
                                                                 gpointer self);
static void _trade_sim_widgets_zoom_button_zoom_reset_gtk_button_clicked (GtkButton* _sender,
                                                                   gpointer self);
static void _trade_sim_widgets_zoom_button_zoom_in_gtk_button_clicked (GtkButton* _sender,
                                                                gpointer self);
static void trade_sim_widgets_zoom_button_finalize (GObject * obj);
static void _vala_trade_sim_widgets_zoom_button_get_property (GObject * object,
                                                       guint property_id,
                                                       GValue * value,
                                                       GParamSpec * pspec);
static void _vala_trade_sim_widgets_zoom_button_set_property (GObject * object,
                                                       guint property_id,
                                                       const GValue * value,
                                                       GParamSpec * pspec);
static void _vala_array_destroy (gpointer array,
                          gint array_length,
                          GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array,
                       gint array_length,
                       GDestroyNotify destroy_func);


TradeSimWidgetsZoomButton*
trade_sim_widgets_zoom_button_construct (GType object_type,
                                         TradeSimMainWindow* window)
{
	TradeSimWidgetsZoomButton * self = NULL;
#line 10 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	g_return_val_if_fail (window != NULL, NULL);
#line 11 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	self = (TradeSimWidgetsZoomButton*) g_object_new (object_type, "main-window", window, NULL);
#line 10 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	return self;
#line 117 "ZoomButton.c"
}


TradeSimWidgetsZoomButton*
trade_sim_widgets_zoom_button_new (TradeSimMainWindow* window)
{
#line 10 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	return trade_sim_widgets_zoom_button_construct (TRADE_SIM_WIDGETS_TYPE_ZOOM_BUTTON, window);
#line 126 "ZoomButton.c"
}


void
trade_sim_widgets_zoom_button_zoom_out (TradeSimWidgetsZoomButton* self)
{
	gint zoom = 0;
	GtkButton* _tmp0_;
	const gchar* _tmp1_;
	const gchar* _tmp2_;
	GtkButton* _tmp3_;
	gint _tmp4_;
	gint _tmp5_;
	GtkButton* _tmp6_;
	GtkButton* _tmp7_;
	gint _tmp8_;
	gchar* _tmp9_;
	gchar* _tmp10_;
	TradeSimMainWindow* _tmp11_;
	GtkButton* _tmp12_;
	const gchar* _tmp13_;
	const gchar* _tmp14_;
#line 65 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	g_return_if_fail (self != NULL);
#line 66 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp0_ = self->zoom_default_button;
#line 66 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp1_ = gtk_button_get_label (_tmp0_);
#line 66 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp2_ = _tmp1_;
#line 66 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	zoom = atoi (_tmp2_) - 25;
#line 67 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp3_ = self->zoom_out_button;
#line 67 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp4_ = zoom;
#line 67 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	gtk_widget_set_sensitive ((GtkWidget*) _tmp3_, _tmp4_ > 25);
#line 68 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp5_ = zoom;
#line 68 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	if (_tmp5_ < 25) {
#line 69 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
		return;
#line 171 "ZoomButton.c"
	}
#line 72 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp6_ = self->zoom_in_button;
#line 72 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	gtk_widget_set_sensitive ((GtkWidget*) _tmp6_, TRUE);
#line 73 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp7_ = self->zoom_default_button;
#line 73 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp8_ = zoom;
#line 73 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp9_ = g_strdup_printf ("%.0f%%", (gdouble) _tmp8_);
#line 73 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp10_ = _tmp9_;
#line 73 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	gtk_button_set_label (_tmp7_, _tmp10_);
#line 73 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_g_free0 (_tmp10_);
#line 75 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp11_ = self->priv->_main_window;
#line 75 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp12_ = self->zoom_default_button;
#line 75 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp13_ = gtk_button_get_label (_tmp12_);
#line 75 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp14_ = _tmp13_;
#line 75 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	trade_sim_main_window_change_zoom_level (_tmp11_, atoi (_tmp14_) / 100.000);
#line 199 "ZoomButton.c"
}


void
trade_sim_widgets_zoom_button_zoom_in (TradeSimWidgetsZoomButton* self)
{
	gint zoom = 0;
	GtkButton* _tmp0_;
	const gchar* _tmp1_;
	const gchar* _tmp2_;
	GtkButton* _tmp3_;
	gint _tmp4_;
	gint _tmp5_;
	GtkButton* _tmp6_;
	GtkButton* _tmp7_;
	gint _tmp8_;
	gchar* _tmp9_;
	gchar* _tmp10_;
	TradeSimMainWindow* _tmp11_;
	GtkButton* _tmp12_;
	const gchar* _tmp13_;
	const gchar* _tmp14_;
#line 80 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	g_return_if_fail (self != NULL);
#line 81 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp0_ = self->zoom_default_button;
#line 81 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp1_ = gtk_button_get_label (_tmp0_);
#line 81 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp2_ = _tmp1_;
#line 81 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	zoom = atoi (_tmp2_) + 25;
#line 82 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp3_ = self->zoom_in_button;
#line 82 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp4_ = zoom;
#line 82 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	gtk_widget_set_sensitive ((GtkWidget*) _tmp3_, _tmp4_ < 150);
#line 83 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp5_ = zoom;
#line 83 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	if (_tmp5_ > 150) {
#line 84 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
		return;
#line 244 "ZoomButton.c"
	}
#line 87 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp6_ = self->zoom_out_button;
#line 87 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	gtk_widget_set_sensitive ((GtkWidget*) _tmp6_, TRUE);
#line 88 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp7_ = self->zoom_default_button;
#line 88 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp8_ = zoom;
#line 88 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp9_ = g_strdup_printf ("%.0f%%", (gdouble) _tmp8_);
#line 88 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp10_ = _tmp9_;
#line 88 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	gtk_button_set_label (_tmp7_, _tmp10_);
#line 88 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_g_free0 (_tmp10_);
#line 90 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp11_ = self->priv->_main_window;
#line 90 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp12_ = self->zoom_default_button;
#line 90 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp13_ = gtk_button_get_label (_tmp12_);
#line 90 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp14_ = _tmp13_;
#line 90 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	trade_sim_main_window_change_zoom_level (_tmp11_, atoi (_tmp14_) / 100.000);
#line 272 "ZoomButton.c"
}


void
trade_sim_widgets_zoom_button_zoom_reset (TradeSimWidgetsZoomButton* self)
{
	GtkButton* _tmp0_;
	GtkButton* _tmp1_;
	GtkButton* _tmp2_;
	TradeSimMainWindow* _tmp3_;
#line 95 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	g_return_if_fail (self != NULL);
#line 97 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp0_ = self->zoom_in_button;
#line 97 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	gtk_widget_set_sensitive ((GtkWidget*) _tmp0_, TRUE);
#line 98 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp1_ = self->zoom_out_button;
#line 98 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	gtk_widget_set_sensitive ((GtkWidget*) _tmp1_, TRUE);
#line 99 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp2_ = self->zoom_default_button;
#line 99 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	gtk_button_set_label (_tmp2_, "100%");
#line 101 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp3_ = self->priv->_main_window;
#line 101 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	trade_sim_main_window_change_zoom_level (_tmp3_, 1.000);
#line 301 "ZoomButton.c"
}


TradeSimMainWindow*
trade_sim_widgets_zoom_button_get_main_window (TradeSimWidgetsZoomButton* self)
{
	TradeSimMainWindow* result;
	TradeSimMainWindow* _tmp0_;
#line 2 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 2 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp0_ = self->priv->_main_window;
#line 2 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	result = _tmp0_;
#line 2 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	return result;
#line 318 "ZoomButton.c"
}


static void
trade_sim_widgets_zoom_button_set_main_window (TradeSimWidgetsZoomButton* self,
                                               TradeSimMainWindow* value)
{
#line 2 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	g_return_if_fail (self != NULL);
#line 2 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	if (trade_sim_widgets_zoom_button_get_main_window (self) != value) {
#line 2 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
		self->priv->_main_window = value;
#line 2 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
		g_object_notify_by_pspec ((GObject *) self, trade_sim_widgets_zoom_button_properties[TRADE_SIM_WIDGETS_ZOOM_BUTTON_MAIN_WINDOW_PROPERTY]);
#line 334 "ZoomButton.c"
	}
}


static void
_trade_sim_widgets_zoom_button_zoom_out_gtk_button_clicked (GtkButton* _sender,
                                                            gpointer self)
{
#line 25 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	trade_sim_widgets_zoom_button_zoom_out ((TradeSimWidgetsZoomButton*) self);
#line 345 "ZoomButton.c"
}


static void
_trade_sim_widgets_zoom_button_zoom_reset_gtk_button_clicked (GtkButton* _sender,
                                                              gpointer self)
{
#line 33 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	trade_sim_widgets_zoom_button_zoom_reset ((TradeSimWidgetsZoomButton*) self);
#line 355 "ZoomButton.c"
}


static void
_trade_sim_widgets_zoom_button_zoom_in_gtk_button_clicked (GtkButton* _sender,
                                                           gpointer self)
{
#line 38 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	trade_sim_widgets_zoom_button_zoom_in ((TradeSimWidgetsZoomButton*) self);
#line 365 "ZoomButton.c"
}


static GObject *
trade_sim_widgets_zoom_button_constructor (GType type,
                                           guint n_construct_properties,
                                           GObjectConstructParam * construct_properties)
{
	GObject * obj;
	GObjectClass * parent_class;
	TradeSimWidgetsZoomButton * self;
	GtkStyleContext* _tmp0_;
	GtkStyleContext* _tmp1_;
	GtkButton* _tmp2_;
	GtkButton* _tmp3_;
	GtkButton* _tmp4_;
	GtkStyleContext* _tmp5_;
	GtkButton* _tmp6_;
	GtkStyleContext* _tmp7_;
	GtkButton* _tmp8_;
	GtkButton* _tmp9_;
	gchar* _tmp10_;
	gchar** _tmp11_;
	gchar** _tmp12_;
	gint _tmp12__length1;
	gchar* _tmp13_;
	gchar* _tmp14_;
	GtkButton* _tmp15_;
	GtkButton* _tmp16_;
	GtkButton* _tmp17_;
	GtkButton* _tmp18_;
	GtkButton* _tmp19_;
	gchar* _tmp20_;
	gchar** _tmp21_;
	gchar** _tmp22_;
	gint _tmp22__length1;
	gchar* _tmp23_;
	gchar* _tmp24_;
	GtkButton* _tmp25_;
	GtkButton* _tmp26_;
	GtkButton* _tmp27_;
	GtkStyleContext* _tmp28_;
	GtkButton* _tmp29_;
	GtkStyleContext* _tmp30_;
	GtkButton* _tmp31_;
	GtkButton* _tmp32_;
	gchar* _tmp33_;
	gchar** _tmp34_;
	gchar** _tmp35_;
	gint _tmp35__length1;
	gchar* _tmp36_;
	gchar* _tmp37_;
	GtkButton* _tmp38_;
	GtkButton* _tmp39_;
	GtkButton* _tmp40_;
	GtkLabel* _tmp41_;
	GtkLabel* _tmp42_;
	GtkStyleContext* _tmp43_;
	GtkLabel* _tmp44_;
	GtkLabel* _tmp45_;
#line 16 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	parent_class = G_OBJECT_CLASS (trade_sim_widgets_zoom_button_parent_class);
#line 16 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
#line 16 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TRADE_SIM_WIDGETS_TYPE_ZOOM_BUTTON, TradeSimWidgetsZoomButton);
#line 17 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp0_ = gtk_widget_get_style_context ((GtkWidget*) self);
#line 17 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	gtk_style_context_add_class (_tmp0_, GTK_STYLE_CLASS_LINKED);
#line 18 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp1_ = gtk_widget_get_style_context ((GtkWidget*) self);
#line 18 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	gtk_style_context_add_class (_tmp1_, "linked-flat");
#line 19 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	gtk_widget_set_valign ((GtkWidget*) self, GTK_ALIGN_CENTER);
#line 20 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	gtk_grid_set_column_homogeneous ((GtkGrid*) self, FALSE);
#line 21 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	g_object_set ((GtkWidget*) self, "width-request", 140, NULL);
#line 22 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	gtk_widget_set_hexpand ((GtkWidget*) self, FALSE);
#line 24 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp2_ = (GtkButton*) gtk_button_new_from_icon_name ("zoom-out-symbolic", (GtkIconSize) GTK_ICON_SIZE_MENU);
#line 24 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	g_object_ref_sink (_tmp2_);
#line 24 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_g_object_unref0 (self->zoom_out_button);
#line 24 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	self->zoom_out_button = _tmp2_;
#line 25 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp3_ = self->zoom_out_button;
#line 25 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	g_signal_connect_object (_tmp3_, "clicked", (GCallback) _trade_sim_widgets_zoom_button_zoom_out_gtk_button_clicked, self, 0);
#line 26 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp4_ = self->zoom_out_button;
#line 26 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp5_ = gtk_widget_get_style_context ((GtkWidget*) _tmp4_);
#line 26 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	gtk_style_context_add_class (_tmp5_, "raised");
#line 27 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp6_ = self->zoom_out_button;
#line 27 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp7_ = gtk_widget_get_style_context ((GtkWidget*) _tmp6_);
#line 27 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	gtk_style_context_add_class (_tmp7_, "button-zoom");
#line 28 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp8_ = self->zoom_out_button;
#line 28 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	gtk_widget_set_can_focus ((GtkWidget*) _tmp8_, FALSE);
#line 29 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp9_ = self->zoom_out_button;
#line 29 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp10_ = g_strdup ("<Ctrl>minus");
#line 29 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp11_ = g_new0 (gchar*, 1 + 1);
#line 29 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp11_[0] = _tmp10_;
#line 29 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp12_ = _tmp11_;
#line 29 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp12__length1 = 1;
#line 29 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp13_ = granite_markup_accel_tooltip (_tmp12_, 1, "Zoom Out");
#line 29 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp14_ = _tmp13_;
#line 29 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	gtk_widget_set_tooltip_markup ((GtkWidget*) _tmp9_, _tmp14_);
#line 29 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_g_free0 (_tmp14_);
#line 29 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp12_ = (_vala_array_free (_tmp12_, _tmp12__length1, (GDestroyNotify) g_free), NULL);
#line 31 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp15_ = (GtkButton*) gtk_button_new_with_label ("100%");
#line 31 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	g_object_ref_sink (_tmp15_);
#line 31 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_g_object_unref0 (self->zoom_default_button);
#line 31 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	self->zoom_default_button = _tmp15_;
#line 32 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp16_ = self->zoom_default_button;
#line 32 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	gtk_widget_set_hexpand ((GtkWidget*) _tmp16_, TRUE);
#line 33 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp17_ = self->zoom_default_button;
#line 33 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	g_signal_connect_object (_tmp17_, "clicked", (GCallback) _trade_sim_widgets_zoom_button_zoom_reset_gtk_button_clicked, self, 0);
#line 34 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp18_ = self->zoom_default_button;
#line 34 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	gtk_widget_set_can_focus ((GtkWidget*) _tmp18_, FALSE);
#line 35 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp19_ = self->zoom_default_button;
#line 35 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp20_ = g_strdup ("<Ctrl>0");
#line 35 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp21_ = g_new0 (gchar*, 1 + 1);
#line 35 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp21_[0] = _tmp20_;
#line 35 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp22_ = _tmp21_;
#line 35 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp22__length1 = 1;
#line 35 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp23_ = granite_markup_accel_tooltip (_tmp22_, 1, "Reset Zoom");
#line 35 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp24_ = _tmp23_;
#line 35 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	gtk_widget_set_tooltip_markup ((GtkWidget*) _tmp19_, _tmp24_);
#line 35 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_g_free0 (_tmp24_);
#line 35 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp22_ = (_vala_array_free (_tmp22_, _tmp22__length1, (GDestroyNotify) g_free), NULL);
#line 37 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp25_ = (GtkButton*) gtk_button_new_from_icon_name ("zoom-in-symbolic", (GtkIconSize) GTK_ICON_SIZE_MENU);
#line 37 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	g_object_ref_sink (_tmp25_);
#line 37 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_g_object_unref0 (self->zoom_in_button);
#line 37 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	self->zoom_in_button = _tmp25_;
#line 38 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp26_ = self->zoom_in_button;
#line 38 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	g_signal_connect_object (_tmp26_, "clicked", (GCallback) _trade_sim_widgets_zoom_button_zoom_in_gtk_button_clicked, self, 0);
#line 39 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp27_ = self->zoom_in_button;
#line 39 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp28_ = gtk_widget_get_style_context ((GtkWidget*) _tmp27_);
#line 39 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	gtk_style_context_add_class (_tmp28_, "raised");
#line 40 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp29_ = self->zoom_in_button;
#line 40 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp30_ = gtk_widget_get_style_context ((GtkWidget*) _tmp29_);
#line 40 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	gtk_style_context_add_class (_tmp30_, "button-zoom");
#line 41 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp31_ = self->zoom_in_button;
#line 41 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	gtk_widget_set_can_focus ((GtkWidget*) _tmp31_, FALSE);
#line 42 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp32_ = self->zoom_in_button;
#line 42 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp33_ = g_strdup ("<Ctrl>plus");
#line 42 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp34_ = g_new0 (gchar*, 1 + 1);
#line 42 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp34_[0] = _tmp33_;
#line 42 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp35_ = _tmp34_;
#line 42 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp35__length1 = 1;
#line 42 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp36_ = granite_markup_accel_tooltip (_tmp35_, 1, "Zoom In");
#line 42 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp37_ = _tmp36_;
#line 42 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	gtk_widget_set_tooltip_markup ((GtkWidget*) _tmp32_, _tmp37_);
#line 42 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_g_free0 (_tmp37_);
#line 42 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp35_ = (_vala_array_free (_tmp35_, _tmp35__length1, (GDestroyNotify) g_free), NULL);
#line 44 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp38_ = self->zoom_out_button;
#line 44 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	gtk_grid_attach ((GtkGrid*) self, (GtkWidget*) _tmp38_, 0, 0, 1, 1);
#line 45 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp39_ = self->zoom_default_button;
#line 45 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	gtk_grid_attach ((GtkGrid*) self, (GtkWidget*) _tmp39_, 1, 0, 1, 1);
#line 46 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp40_ = self->zoom_in_button;
#line 46 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	gtk_grid_attach ((GtkGrid*) self, (GtkWidget*) _tmp40_, 2, 0, 1, 1);
#line 48 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp41_ = (GtkLabel*) gtk_label_new ("Zoom");
#line 48 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	g_object_ref_sink (_tmp41_);
#line 48 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_g_object_unref0 (self->priv->label_btn);
#line 48 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	self->priv->label_btn = _tmp41_;
#line 49 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp42_ = self->priv->label_btn;
#line 49 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp43_ = gtk_widget_get_style_context ((GtkWidget*) _tmp42_);
#line 49 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	gtk_style_context_add_class (_tmp43_, "headerbar-label");
#line 50 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp44_ = self->priv->label_btn;
#line 50 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	gtk_widget_set_margin_top ((GtkWidget*) _tmp44_, 4);
#line 52 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_tmp45_ = self->priv->label_btn;
#line 52 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	gtk_grid_attach ((GtkGrid*) self, (GtkWidget*) _tmp45_, 0, 1, 3, 1);
#line 16 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	return obj;
#line 626 "ZoomButton.c"
}


static void
trade_sim_widgets_zoom_button_class_init (TradeSimWidgetsZoomButtonClass * klass)
{
#line 1 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	trade_sim_widgets_zoom_button_parent_class = g_type_class_peek_parent (klass);
#line 1 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	g_type_class_add_private (klass, sizeof (TradeSimWidgetsZoomButtonPrivate));
#line 1 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	G_OBJECT_CLASS (klass)->get_property = _vala_trade_sim_widgets_zoom_button_get_property;
#line 1 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	G_OBJECT_CLASS (klass)->set_property = _vala_trade_sim_widgets_zoom_button_set_property;
#line 1 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	G_OBJECT_CLASS (klass)->constructor = trade_sim_widgets_zoom_button_constructor;
#line 1 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	G_OBJECT_CLASS (klass)->finalize = trade_sim_widgets_zoom_button_finalize;
#line 1 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), TRADE_SIM_WIDGETS_ZOOM_BUTTON_MAIN_WINDOW_PROPERTY, trade_sim_widgets_zoom_button_properties[TRADE_SIM_WIDGETS_ZOOM_BUTTON_MAIN_WINDOW_PROPERTY] = g_param_spec_object ("main-window", "main-window", "main-window", TRADE_SIM_TYPE_MAIN_WINDOW, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
#line 647 "ZoomButton.c"
}


static void
trade_sim_widgets_zoom_button_instance_init (TradeSimWidgetsZoomButton * self)
{
#line 1 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	self->priv = TRADE_SIM_WIDGETS_ZOOM_BUTTON_GET_PRIVATE (self);
#line 656 "ZoomButton.c"
}


static void
trade_sim_widgets_zoom_button_finalize (GObject * obj)
{
	TradeSimWidgetsZoomButton * self;
#line 1 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TRADE_SIM_WIDGETS_TYPE_ZOOM_BUTTON, TradeSimWidgetsZoomButton);
#line 4 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_g_object_unref0 (self->priv->label_btn);
#line 5 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_g_object_unref0 (self->zoom_out_button);
#line 6 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_g_object_unref0 (self->zoom_default_button);
#line 7 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	_g_object_unref0 (self->zoom_in_button);
#line 1 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	G_OBJECT_CLASS (trade_sim_widgets_zoom_button_parent_class)->finalize (obj);
#line 676 "ZoomButton.c"
}


GType
trade_sim_widgets_zoom_button_get_type (void)
{
	static volatile gsize trade_sim_widgets_zoom_button_type_id__volatile = 0;
	if (g_once_init_enter (&trade_sim_widgets_zoom_button_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (TradeSimWidgetsZoomButtonClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) trade_sim_widgets_zoom_button_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (TradeSimWidgetsZoomButton), 0, (GInstanceInitFunc) trade_sim_widgets_zoom_button_instance_init, NULL };
		GType trade_sim_widgets_zoom_button_type_id;
		trade_sim_widgets_zoom_button_type_id = g_type_register_static (gtk_grid_get_type (), "TradeSimWidgetsZoomButton", &g_define_type_info, 0);
		g_once_init_leave (&trade_sim_widgets_zoom_button_type_id__volatile, trade_sim_widgets_zoom_button_type_id);
	}
	return trade_sim_widgets_zoom_button_type_id__volatile;
}


static void
_vala_trade_sim_widgets_zoom_button_get_property (GObject * object,
                                                  guint property_id,
                                                  GValue * value,
                                                  GParamSpec * pspec)
{
	TradeSimWidgetsZoomButton * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, TRADE_SIM_WIDGETS_TYPE_ZOOM_BUTTON, TradeSimWidgetsZoomButton);
#line 1 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	switch (property_id) {
#line 1 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
		case TRADE_SIM_WIDGETS_ZOOM_BUTTON_MAIN_WINDOW_PROPERTY:
#line 1 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
		g_value_set_object (value, trade_sim_widgets_zoom_button_get_main_window (self));
#line 1 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
		break;
#line 710 "ZoomButton.c"
		default:
#line 1 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 1 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
		break;
#line 716 "ZoomButton.c"
	}
}


static void
_vala_trade_sim_widgets_zoom_button_set_property (GObject * object,
                                                  guint property_id,
                                                  const GValue * value,
                                                  GParamSpec * pspec)
{
	TradeSimWidgetsZoomButton * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, TRADE_SIM_WIDGETS_TYPE_ZOOM_BUTTON, TradeSimWidgetsZoomButton);
#line 1 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
	switch (property_id) {
#line 1 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
		case TRADE_SIM_WIDGETS_ZOOM_BUTTON_MAIN_WINDOW_PROPERTY:
#line 1 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
		trade_sim_widgets_zoom_button_set_main_window (self, g_value_get_object (value));
#line 1 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
		break;
#line 737 "ZoomButton.c"
		default:
#line 1 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 1 "/home/horacio/Vala/TradeSim/src/Widgets/ZoomButton.vala"
		break;
#line 743 "ZoomButton.c"
	}
}


static void
_vala_array_destroy (gpointer array,
                     gint array_length,
                     GDestroyNotify destroy_func)
{
	if ((array != NULL) && (destroy_func != NULL)) {
		int i;
		for (i = 0; i < array_length; i = i + 1) {
			if (((gpointer*) array)[i] != NULL) {
				destroy_func (((gpointer*) array)[i]);
			}
		}
	}
}


static void
_vala_array_free (gpointer array,
                  gint array_length,
                  GDestroyNotify destroy_func)
{
	_vala_array_destroy (array, array_length, destroy_func);
	g_free (array);
}




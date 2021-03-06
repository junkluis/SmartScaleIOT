/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/menuprincipal_screen/MenuPrincipalViewBase.hpp>
#include "BitmapDatabase.hpp"
#include <texts/TextKeysAndLanguages.hpp>
#include <touchgfx/Color.hpp>

MenuPrincipalViewBase::MenuPrincipalViewBase() :
    buttonCallback(this, &MenuPrincipalViewBase::buttonCallbackHandler)
{
    backgroundmenu.setXY(0, 0);
    backgroundmenu.setBitmap(touchgfx::Bitmap(BITMAP_BACKGROUND_TITLE_ID));

    MenuSwap.setXY(0, 46);

    Balanza.setWidth(480);
    Balanza.setHeight(226);

    imgBalanza.setXY(45, 38);
    imgBalanza.setBitmap(touchgfx::Bitmap(BITMAP_BUSINESS_ID));
    Balanza.add(imgBalanza);

    txt_balanzaInteligente.setXY(240, 38);
    txt_balanzaInteligente.setColor(touchgfx::Color::getColorFrom24BitRGB(43, 43, 43));
    txt_balanzaInteligente.setLinespacing(0);
    txt_balanzaInteligente.setTypedText(touchgfx::TypedText(T_SINGLEUSEID18));
    Balanza.add(txt_balanzaInteligente);

    empezarBalanza.setXY(240, 128);
    empezarBalanza.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_PRESSED_ID));
    empezarBalanza.setLabelText(touchgfx::TypedText(T_SINGLEUSEID19));
    empezarBalanza.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    empezarBalanza.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    empezarBalanza.setAction(buttonCallback);
    Balanza.add(empezarBalanza);

    image1.setXY(184, 198);
    image1.setBitmap(touchgfx::Bitmap(BITMAP_CONT1_ID));
    Balanza.add(image1);
    MenuSwap.add(Balanza);

    Perfil.setWidth(480);
    Perfil.setHeight(226);

    imgPerfil.setXY(45, 38);
    imgPerfil.setBitmap(touchgfx::Bitmap(BITMAP_BOX_ID));
    Perfil.add(imgPerfil);

    txt_perfiles.setXY(240, 38);
    txt_perfiles.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    txt_perfiles.setLinespacing(0);
    txt_perfiles.setTypedText(touchgfx::TypedText(T_SINGLEUSEID20));
    Perfil.add(txt_perfiles);

    empezarPerfiles.setXY(240, 128);
    empezarPerfiles.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_PRESSED_ID));
    empezarPerfiles.setLabelText(touchgfx::TypedText(T_SINGLEUSEID21));
    empezarPerfiles.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    empezarPerfiles.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    empezarPerfiles.setAction(buttonCallback);
    Perfil.add(empezarPerfiles);

    subtxt_perfiles.setXY(240, 78);
    subtxt_perfiles.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    subtxt_perfiles.setLinespacing(0);
    subtxt_perfiles.setTypedText(touchgfx::TypedText(T_SINGLEUSEID30));
    Perfil.add(subtxt_perfiles);

    image1_1.setXY(184, 198);
    image1_1.setBitmap(touchgfx::Bitmap(BITMAP_CONT2_ID));
    Perfil.add(image1_1);
    MenuSwap.add(Perfil);

    CerrarSesion.setWidth(480);
    CerrarSesion.setHeight(226);

    imgOut.setXY(45, 38);
    imgOut.setBitmap(touchgfx::Bitmap(BITMAP_FAQ_ID));
    CerrarSesion.add(imgOut);

    Empezar.setXY(240, 93);
    Empezar.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_PRESSED_ID));
    Empezar.setLabelText(touchgfx::TypedText(T_SINGLEUSEID29));
    Empezar.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    Empezar.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    Empezar.setAction(buttonCallback);
    CerrarSesion.add(Empezar);

    image1_2.setXY(186, 198);
    image1_2.setBitmap(touchgfx::Bitmap(BITMAP_CONT3_ID));
    CerrarSesion.add(image1_2);

    txt_balanzaInteligente_1.setXY(240, 51);
    txt_balanzaInteligente_1.setColor(touchgfx::Color::getColorFrom24BitRGB(43, 43, 43));
    txt_balanzaInteligente_1.setLinespacing(0);
    txt_balanzaInteligente_1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID123));
    CerrarSesion.add(txt_balanzaInteligente_1);
    MenuSwap.add(CerrarSesion);

    CerrarSesion_1.setWidth(480);
    CerrarSesion_1.setHeight(226);

    imgOut_1.setXY(45, 38);
    imgOut_1.setBitmap(touchgfx::Bitmap(BITMAP_EXIT_ID));
    CerrarSesion_1.add(imgOut_1);

    cerrarSesion_1.setXY(240, 83);
    cerrarSesion_1.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_PRESSED_ID));
    cerrarSesion_1.setLabelText(touchgfx::TypedText(T_SINGLEUSEID122));
    cerrarSesion_1.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    cerrarSesion_1.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    cerrarSesion_1.setAction(buttonCallback);
    CerrarSesion_1.add(cerrarSesion_1);

    image1_3_1.setXY(186, 198);
    image1_3_1.setBitmap(touchgfx::Bitmap(BITMAP_CONT4_ID));
    CerrarSesion_1.add(image1_3_1);
    MenuSwap.add(CerrarSesion_1);

    MenuSwap.setSwipeCutoff(50);
    MenuSwap.setEndSwipeElasticWidth(50);
    MenuSwap.setSelectedPage(0);

    txt_tituloMenu.setXY(20, 24);
    txt_tituloMenu.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    txt_tituloMenu.setLinespacing(0);
    txt_tituloMenu.setTypedText(touchgfx::TypedText(T_SINGLEUSEID34));

    add(backgroundmenu);
    add(MenuSwap);
    add(txt_tituloMenu);
}

void MenuPrincipalViewBase::setupScreen()
{

}

void MenuPrincipalViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &empezarBalanza)
    {
        //Interaction1
        //When empezarBalanza clicked change screen to BalanzaInteligente
        //Go to BalanzaInteligente with screen transition towards South
        application().gotoBalanzaInteligenteScreenCoverTransitionSouth();
    }
    else if (&src == &empezarPerfiles)
    {
        //perfilesProductos
        //When empezarPerfiles clicked change screen to PerfilProductos
        //Go to PerfilProductos with no screen transition
        application().gotoPerfilProductosScreenNoTransition();
    }
    else if (&src == &Empezar)
    {
        //Interaction2
        //When Empezar clicked change screen to Informacion
        //Go to Informacion with no screen transition
        application().gotoInformacionScreenNoTransition();
    }
    else if (&src == &cerrarSesion_1)
    {
        //Interaction3
        //When cerrarSesion_1 clicked change screen to ScreenSaver
        //Go to ScreenSaver with no screen transition
        application().gotoScreenSaverScreenNoTransition();
    }
}

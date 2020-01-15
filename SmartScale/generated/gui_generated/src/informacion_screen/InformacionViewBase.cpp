/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/informacion_screen/InformacionViewBase.hpp>
#include "BitmapDatabase.hpp"
#include <touchgfx/Color.hpp>
#include <texts/TextKeysAndLanguages.hpp>

InformacionViewBase::InformacionViewBase() :
    flexButtonCallback(this, &InformacionViewBase::flexButtonCallbackHandler)
{
    image1.setXY(0, 0);
    image1.setBitmap(touchgfx::Bitmap(BITMAP_BACKGROUND_TITLE_ID));

    swipeContainer1.setXY(0, 52);

    swipeContainer1Page1.setWidth(480);
    swipeContainer1Page1.setHeight(220);

    image2.setXY(0, 0);
    image2.setBitmap(touchgfx::Bitmap(BITMAP_AYUDA1_ID));
    swipeContainer1Page1.add(image2);
    swipeContainer1.add(swipeContainer1Page1);

    swipeContainer1Page1_1.setWidth(480);
    swipeContainer1Page1_1.setHeight(220);

    image2_1.setXY(0, 0);
    image2_1.setBitmap(touchgfx::Bitmap(BITMAP_AYUDA2_ID));
    swipeContainer1Page1_1.add(image2_1);
    swipeContainer1.add(swipeContainer1Page1_1);

    swipeContainer1Page1_2.setWidth(480);
    swipeContainer1Page1_2.setHeight(220);

    image2_2.setXY(0, 0);
    image2_2.setBitmap(touchgfx::Bitmap(BITMAP_AYUDA3_ID));
    swipeContainer1Page1_2.add(image2_2);
    swipeContainer1.add(swipeContainer1Page1_2);

    swipeContainer1Page1_3.setWidth(480);
    swipeContainer1Page1_3.setHeight(220);

    image2_3.setXY(0, 0);
    image2_3.setBitmap(touchgfx::Bitmap(BITMAP_AYUDA4_ID));
    swipeContainer1Page1_3.add(image2_3);
    swipeContainer1.add(swipeContainer1Page1_3);

    swipeContainer1.setSwipeCutoff(50);
    swipeContainer1.setEndSwipeElasticWidth(50);
    swipeContainer1.setSelectedPage(0);

    homeButton.setBoxWithBorderPosition(0, 0, 65, 39);
    homeButton.setBorderSize(5);
    homeButton.setBoxWithBorderColors(touchgfx::Color::getColorFrom24BitRGB(49, 49, 49), touchgfx::Color::getColorFrom24BitRGB(75, 83, 86), touchgfx::Color::getColorFrom24BitRGB(49, 49, 49), touchgfx::Color::getColorFrom24BitRGB(75, 83, 86));
    homeButton.setBitmaps(Bitmap(BITMAP_HOME_ID), Bitmap(BITMAP_HOME_ID));
    homeButton.setBitmapXY(0, 0);
    homeButton.setPosition(411, 5, 65, 39);
    homeButton.setAction(flexButtonCallback);

    textArea1.setXY(20, 23);
    textArea1.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID121));

    add(image1);
    add(swipeContainer1);
    add(homeButton);
    add(textArea1);
}

void InformacionViewBase::setupScreen()
{

}

void InformacionViewBase::flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src)
{
    if (&src == &homeButton)
    {
        //regresarMenu
        //When homeButton clicked change screen to MenuPrincipal
        //Go to MenuPrincipal with no screen transition
        application().gotoMenuPrincipalScreenNoTransition();
    }
}

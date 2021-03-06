/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef INFORMACIONVIEWBASE_HPP
#define INFORMACIONVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/informacion_screen/InformacionPresenter.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/containers/SwipeContainer.hpp>
#include <touchgfx/containers/Container.hpp>

#include <touchgfx/containers/buttons/Buttons.hpp>
#include <touchgfx/widgets/TextArea.hpp>
class InformacionViewBase : public touchgfx::View<InformacionPresenter>
{
public:
    InformacionViewBase();
    virtual ~InformacionViewBase() {}
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Image image1;
    touchgfx::SwipeContainer swipeContainer1;
    touchgfx::Container swipeContainer1Page1;
    touchgfx::Image image2;

    touchgfx::Container swipeContainer1Page1_1;
    touchgfx::Image image2_1;

    touchgfx::Container swipeContainer1Page1_2;
    touchgfx::Image image2_2;

    touchgfx::Container swipeContainer1Page1_3;
    touchgfx::Image image2_3;

    touchgfx::ImageButtonStyle< touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger > > homeButton;
    touchgfx::TextArea textArea1;

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<InformacionViewBase, const touchgfx::AbstractButtonContainer&> flexButtonCallback;

    /*
     * Callback Handler Declarations
     */
    void flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src);

};

#endif // INFORMACIONVIEWBASE_HPP

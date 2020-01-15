/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef BALANZAINTELIGENTEVIEWBASE_HPP
#define BALANZAINTELIGENTEVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/balanzainteligente_screen/BalanzaInteligentePresenter.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/BoxWithBorder.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/containers/ScrollableContainer.hpp>
#include <touchgfx/widgets/Button.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>

#include <touchgfx/containers/buttons/Buttons.hpp>
#include <touchgfx/widgets/canvas/Circle.hpp>
#include <touchgfx/widgets/canvas/PainterRGB565.hpp>
#include <touchgfx/containers/ModalWindow.hpp>
#include <touchgfx/Color.hpp>
#include <touchgfx/widgets/ButtonWithLabel.hpp>
#include <touchgfx/widgets/canvas/Line.hpp>
#include <touchgfx/EasingEquations.hpp>
#include <touchgfx/mixins/MoveAnimator.hpp>
class BalanzaInteligenteViewBase : public touchgfx::View<BalanzaInteligentePresenter>
{
public:
    BalanzaInteligenteViewBase();
    virtual ~BalanzaInteligenteViewBase() {}
    virtual void setupScreen();
    virtual void afterTransition();

    /*
     * Virtual Action Handlers
     */
    virtual void CalcularPeso()
    {
        // Override and implement this function in BalanzaInteligente
    }

    virtual void cargarDatos()
    {
        // Override and implement this function in BalanzaInteligente
    }

    virtual void Slot1Config()
    {
        // Override and implement this function in BalanzaInteligente
    }

    virtual void Slot2Config()
    {
        // Override and implement this function in BalanzaInteligente
    }

    virtual void Slot3Config()
    {
        // Override and implement this function in BalanzaInteligente
    }

    virtual void Slot4Config()
    {
        // Override and implement this function in BalanzaInteligente
    }

    virtual void Slot5Config()
    {
        // Override and implement this function in BalanzaInteligente
    }

    virtual void enviarMedianteSigfox()
    {
        // Override and implement this function in BalanzaInteligente
    }

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Image backgroundmenu;
    touchgfx::BoxWithBorder boxWithBorder1;
    touchgfx::TextArea txt_tituloBalanza;
    touchgfx::ScrollableContainer perfilesButtons;
    touchgfx::Button btnSlot5;
    touchgfx::TextAreaWithOneWildcard txtSlot5;
    touchgfx::Button btnSlot4;
    touchgfx::TextAreaWithOneWildcard txtSlot4;
    touchgfx::Button btnSlot3;
    touchgfx::TextAreaWithOneWildcard txtSlot3;
    touchgfx::Button btnSlot2;
    touchgfx::TextAreaWithOneWildcard txtSlot2;
    touchgfx::Button btnSlot1;
    touchgfx::TextAreaWithOneWildcard txtSlot1;

    touchgfx::ImageButtonStyle< touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger > > homeButton;
    touchgfx::Image contenedor;
    touchgfx::Button btnPesar;
    touchgfx::TextAreaWithOneWildcard txtResultadoPesar;
    touchgfx::MoveAnimator< touchgfx::Circle > widgetCircular;
    touchgfx::PainterRGB565 widgetCircularPainter;
    touchgfx::TextArea textArea2;
    touchgfx::TextAreaWithOneWildcard TxtDisplayPerfil;
    touchgfx::TextArea textArea3_1;
    touchgfx::TextAreaWithOneWildcard txtResultadoSmall;
    touchgfx::TextArea textArea3_1_2;
    touchgfx::TextAreaWithOneWildcard txtDispProm;
    touchgfx::TextAreaWithOneWildcard TxtAlerta;
    touchgfx::TextArea volverAPesar;
    touchgfx::TextArea textArea5_1;
    touchgfx::Button BtnEnviar;
    touchgfx::TextArea textArea6;
    touchgfx::Image image1;
    touchgfx::ModalWindow alertaPerfil;
    touchgfx::Image image2;
    touchgfx::TextArea textArea7;
    touchgfx::ButtonWithLabel cerrarModal;

    touchgfx::Line line1;
    touchgfx::PainterRGB565 line1Painter;
    touchgfx::ModalWindow modalWindow1;
    touchgfx::TextArea textArea8;
    touchgfx::ButtonWithLabel cerrarModalEnvio;


    /*
     * Wildcard Buffers
     */
    static const uint16_t TXTSLOT5_SIZE = 16;
    touchgfx::Unicode::UnicodeChar txtSlot5Buffer[TXTSLOT5_SIZE];
    static const uint16_t TXTSLOT4_SIZE = 16;
    touchgfx::Unicode::UnicodeChar txtSlot4Buffer[TXTSLOT4_SIZE];
    static const uint16_t TXTSLOT3_SIZE = 16;
    touchgfx::Unicode::UnicodeChar txtSlot3Buffer[TXTSLOT3_SIZE];
    static const uint16_t TXTSLOT2_SIZE = 16;
    touchgfx::Unicode::UnicodeChar txtSlot2Buffer[TXTSLOT2_SIZE];
    static const uint16_t TXTSLOT1_SIZE = 16;
    touchgfx::Unicode::UnicodeChar txtSlot1Buffer[TXTSLOT1_SIZE];
    static const uint16_t TXTRESULTADOPESAR_SIZE = 15;
    touchgfx::Unicode::UnicodeChar txtResultadoPesarBuffer[TXTRESULTADOPESAR_SIZE];
    static const uint16_t TXTDISPLAYPERFIL_SIZE = 16;
    touchgfx::Unicode::UnicodeChar TxtDisplayPerfilBuffer[TXTDISPLAYPERFIL_SIZE];
    static const uint16_t TXTRESULTADOSMALL_SIZE = 10;
    touchgfx::Unicode::UnicodeChar txtResultadoSmallBuffer[TXTRESULTADOSMALL_SIZE];
    static const uint16_t TXTDISPPROM_SIZE = 16;
    touchgfx::Unicode::UnicodeChar txtDispPromBuffer[TXTDISPPROM_SIZE];
    static const uint16_t TXTALERTA_SIZE = 10;
    touchgfx::Unicode::UnicodeChar TxtAlertaBuffer[TXTALERTA_SIZE];

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<BalanzaInteligenteViewBase, const touchgfx::AbstractButton&> buttonCallback;
    touchgfx::Callback<BalanzaInteligenteViewBase, const touchgfx::AbstractButtonContainer&> flexButtonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);
    void flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src);

    /*
     * Canvas Buffer Size
     */
    static const uint16_t CANVAS_BUFFER_SIZE = 7200;
    uint8_t canvasBuffer[CANVAS_BUFFER_SIZE];

};

#endif // BALANZAINTELIGENTEVIEWBASE_HPP
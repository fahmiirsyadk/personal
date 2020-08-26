open Util.ReactStuff;
open Css;

module Styles = {
  let title =
    style([
      unsafe("fontSize", "clamp(1.55rem, 4vw, 100vw)"),
      position(relative),
      top(rem(8.3333)),
      margin2(~v=zero, ~h=auto),
      fontWeight(`extraBold),
      lineHeight(`abs(1.55)),
      textAlign(center),
      fontFamily(
        `custom("'Libre Baskerville','Times New Roman',sans-serif"),
      ),
    ]);
};

[@react.component]
let make = () => {
  <>
    <h1 className=Styles.title>
      {js| Hey, I'm Fahmi Irsyad Khairi Frontend Developer |js}->s
    </h1>
  </>;
};

let default = make;

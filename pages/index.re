open Util.ReactStuff;
open Css;

module Canvas = {
  [@bs.module "components/canvas.js"] [@react.component]
  external make: unit => React.element = "default";
};

module Styles = {
  let title =
    style([
      unsafe("font-size", "clamp(1.55rem, 4vw, 100vw)"),
      position(relative),
      top(px(80)),
      margin2(~v=zero, ~h=auto),
      fontWeight(`extraBold),
      lineHeight(`abs(1.25)),
      textAlign(center),
      maxWidth(px(800)),
    ]);
};

module P = {
  [@react.component]
  let make = (~children) => <p className="mb-2"> children </p>;
};

[@react.component]
let make = () => {
  <>
    <Canvas />
    <h1 className=Styles.title>
      {js| Hey, I'm Fahmi Frontend developer living in Yogyakarta |js}->s
    </h1>
  </>;
};

let default = make;

[@bs.module "../common/useCanvas"]
external useCanvas: unit => unit = "useCanvas";

open Util.ReactStuff;
open Css;

module Styles = {
  let title =
    style([
      fontSize(px(48)),
      position(relative),
      top(px(80)),
      margin2(~v=zero, ~h=auto),
      fontWeight(`extraBold),
      lineHeight(px(62)),
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
  useCanvas();

  <div className="content content--canvas">
    <h1 className=Styles.title>
      {js| Hey, I'm Fahmi Frontend developer living in Yogyakarta |js}->s
    </h1>
  </div>;
};

let default = make;

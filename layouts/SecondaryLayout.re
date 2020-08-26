// open Util.ReactStuff;
open Lib;
module Link = Next.Link;

module Styles = {
  open Css;
  let wrapper =
    style([display(`flex), justifyContent(center), alignItems(center)]);
  let container = style([maxWidth(px(960))]);
  let spacer = style([width(inherit_), height(px(48))]);

  let grainWrapper =
    style([
      pointerEvents(none),
      position(fixed),
      zIndex(99),
      overflow(hidden),
      width(pct(100.0)),
      height(vh(100.0)),
      justifyContent(center),
      alignItems(center),
      display(`flex),
      opacity(0.3),
    ]);
};

[@react.component]
let make = (~children) => {
  <>
    <GoogleFonts
      href="https://fonts.googleapis.com/css2?family=Inter:wght@400;500;700&family=Libre+Baskerville:wght@700&display=swap"
    />
    <div className=Styles.wrapper>
      <div className=Styles.grainWrapper />
      <main className=Styles.container> <Header /> children </main>
    </div>
  </>;
};

// open Util.ReactStuff;
module Link = Next.Link;

module Styles = {
  open Css;
  let wrapper =
    style([display(`flex), justifyContent(center), alignItems(center)]);
  let container = style([maxWidth(px(950))]);
};

[@react.component]
let make = (~children) => {
  <div className=Styles.wrapper>
    <main className=Styles.container> <Header /> children </main>
  </div>;
};

// open Util.ReactStuff;
module Link = Next.Link;

module Styles = {
  open Css;
  let wrapper =
    style([display(`flex), justifyContent(center), alignItems(center)]);
  let container = style([maxWidth(px(960))]);
  let spacer = style([width(inherit_), height(px(48))]);
};

[@react.component]
let make = (~children) => {
  <div className=Styles.wrapper>
    <main className=Styles.container>
      <div className=Styles.spacer />
      <Header />
      children
    </main>
  </div>;
};

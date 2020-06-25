module Styles = {
  open Css;
  let headerSpace = style([padding(px(16)), position(sticky), top(zero)]);
};

[@react.component]
let make = () => {
  <header className=Styles.headerSpace> <Logo /> </header>;
};

let default = make;
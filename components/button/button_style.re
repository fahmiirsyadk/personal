module Styles = {
  open Css;

  let button =
    style([unsafe("backgroundColor", {|var("--color-primary")|})]);
};
module Styles = {
  open Css;
  let headerSpace =
    style([
      padding(px(16)),
      position(sticky),
      top(zero),
      display(`flex),
      justifyContent(`spaceBetween),
      alignContent(`center),
    ]);

  let headerMenu =
    style([
      display(`flex),
      listStyleType(none),
      selector(
        "li",
        [
          margin2(~v=zero, ~h=px(10)),
          selector(
            "a",
            [textDecoration(none), unsafe("color", "var(--color-text)")],
          ),
        ],
      ),
    ]);
};

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
      fontSize(rem(1.2)),
      fontWeight(medium),
    ]);

  let headerMenu =
    style([
      display(`flex),
      alignItems(center),
      listStyleType(none),
      selector(
        "li",
        [
          fontWeight(normal),
          fontSize(rem(1.1)),
          margin2(~v=zero, ~h=rem(1.0)),
          transition(~duration=350, ~delay=0, ~timingFunction=ease, "all"),
          selector(
            "a",
            [textDecoration(none), unsafe("color", "var(--color-text)")],
          ),
        ],
      ),
    ]);
};

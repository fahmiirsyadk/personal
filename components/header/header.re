open Next;
open Util.ReactStuff;
open Header_style;

[@react.component]
let make = () => {
  <header className=Styles.headerSpace>
    <Logo />
    <ul className=Styles.headerMenu>
      <li> <Link href="#"> <a> "Blog"->s </a> </Link> </li>
      <li> <Link href="#"> <a> "About"->s </a> </Link> </li>
    </ul>
  </header>;
};

let default = make;

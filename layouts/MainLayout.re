// open Util.ReactStuff;
module Link = Next.Link;

module Styles = {
  open Css;
  let wrapper =
    style([display(`flex), justifyContent(center), alignItems(center)]);
  let container = style([maxWidth(px(950))]);
};

// module Navigation = {
//   [@react.component]
//   let make = () =>
//     <nav
//       className="p-2 h-12 flex border-b border-gray-200 justify-between items-center text-sm">
//       <Link href="/">
//         <a className="flex items-center w-1/3">
//           <img className="w-5" src="/static/zeit-black-triangle.svg" />
//           <span className="text-xl ml-2 align-middle font-semibold">
//             "Next"->s
//             <span className="text-orange-800"> "RE"->s </span>
//           </span>
//         </a>
//       </Link>
//       <div className="flex w-2/3 justify-end">
//         <Link href="/"> <a className="px-3"> "Home"->s </a> </Link>
//         <Link href="/examples"> <a className="px-3"> "Examples"->s </a> </Link>
//         <a
//           className="px-3 font-bold"
//           target="_blank"
//           href="https://github.com/ryyppy/nextjs-default">
//           "Github"->s
//         </a>
//       </div>
//     </nav>;
// };

[@react.component]
let make = (~children) => {
  let {crumbpage}: CrumbContext.store =
    React.useContext(CrumbContext.storeCtx);

  Js.log(crumbpage);

  <div className=Styles.wrapper>
    <main className=Styles.container> <Header /> children </main>
  </div>;
};
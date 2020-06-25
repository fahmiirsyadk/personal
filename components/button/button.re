open Util.ReactStuff;

[@react.component]
let make = (~title: string) => <button> title->s </button>;

let default = make;